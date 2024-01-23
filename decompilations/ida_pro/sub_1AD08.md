```c
unsigned int __fastcall setChipFrequencies(int control_board_address, unsigned int default_frequency, int mining_algorithm)
{
  float frequency_step; // s0
  size_t chip_index; // r7
  int chain_id; // r4
  unsigned int *chain_address; // r5
  int i; // r6
  int j; // r4
  char *current_base; // r3
  int k; // r10
  int read_command_response; // r0
  _DWORD *sorted_frequencies; // r7
  int frequency_index; // r4
  char *chain_frequencies_data; // r5
  int total_asic; // r11
  int partial_asic_sum; // r6
  int m; // r10
  int partial_asic; // r0
  int asic_count; // r6
  char *asic_data_base; // r6
  int response_bytes; // r0
  int response_bytes; // r0
  float current_frequency; // s14
  char *data_pointer; // r3
  unsigned int frequency_data; // s15
  float calculated_frequency; // s15
  float diff_frequency; // s16
  int n; // r6
  int total_asic_on_chain; // r8
  int ii; // r4
  int read_frequency; // r5
  float target_frequency; // s15
  char buffer; // r0
  unsigned int *base_chain_address; // r5
  unsigned int highest_frequency; // r2
  char *current_base_pointer; // r3
  int sort_response; // r0
  unsigned int *current_chain_address; // r2
  int frequency_base; // r1
  char *frequency_array_pointer; // r6
  unsigned int frequency_data_temp; // t1
  unsigned int working_frequency; // r5
  int write_command_response; // r0
  int v48; // [sp+18h] [bp-1890h]
  int v49; // [sp+18h] [bp-1890h]
  unsigned int sorted_asic_index; // [sp+20h] [bp-1888h]
  unsigned int last_stable_frequency; // [sp+24h] [bp-1884h]
  unsigned int total_valid_asic; // [sp+30h] [bp-1878h] BYREF
  char temp_buffer[4]; // [sp+34h] [bp-1874h] BYREF
  int v54; // [sp+38h] [bp-1870h]
  int v55; // [sp+3Ch] [bp-186Ch]
  int frequency_offsets[4]; // [sp+40h] [bp-1868h] BYREF
  int adjusted_frequencies[4]; // [sp+50h] [bp-1858h] BYREF
  int frequency_bases[4]; // [sp+60h] [bp-1848h] BYREF
  int log_message_buffer[512]; // [sp+70h] [bp-1838h] BYREF
  char chain_frequencies[4152]; // [sp+870h] [bp-1038h] BYREF

  chip_index = 0;
  chain_id = 0;
  last_stable_frequency = 0;
  total_valid_asic = 0;
  memset(chain_frequencies, 0, 0x1000u);
  memset(adjusted_frequencies, 0, sizeof(adjusted_frequencies));
  memset(frequency_bases, 0, sizeof(frequency_bases));
  v54 = 0;
  v55 = 0;
  memset(frequency_offsets, 255, sizeof(frequency_offsets));
  do
  {
    if ( checkChainOperational(chain_id) )
    {
      base_chain_address = (unsigned int *)(control_board_address + (chain_id << 10));
      processChipFrequencyReadings(base_chain_address, (unsigned int *)&frequency_offsets[chain_id], (unsigned int *)&adjusted_frequencies[chain_id], &total_valid_asic);
      highest_frequency = adjusted_frequencies[chain_id];
      current_base_pointer = &chain_frequencies[4 * chip_index++];
      if ( last_stable_frequency >= highest_frequency )
        highest_frequency = last_stable_frequency;
      *((_DWORD *)current_base_pointer - 516) = frequency_offsets[chain_id];
      last_stable_frequency = highest_frequency;
      sort_response = getChainASICCount();
      if ( sort_response )
      {
        current_chain_address = &base_chain_address[sort_response];
        frequency_base = frequency_offsets[chain_id];
        frequency_array_pointer = &chain_frequencies[1024 * chain_id];
        do
        {
          frequency_data_temp = *base_chain_address++;
          *(_DWORD *)frequency_array_pointer = frequency_data_temp - frequency_base;
          frequency_array_pointer += 4;
        }
        while ( base_chain_address != current_chain_address );
      }
      if ( debugFlags == 2 )
        chain_debug_data[chain_id] = last_processed_nonce;
      working_frequency = total_valid_asic;
      write_command_response = getChainASICCount();
      chain_written_nonces[chain_id] = writeNonceRange(working_frequency, write_command_response);
    }
    ++chain_id;
  }
  while ( chain_id != 4 );
  qsort(frequency_bases, chip_index, 4u, (__compar_fn_t)compareFrequencyAdvancement);
  setVoltageBasedOnFrequency(255, default_frequency, mining_algorithm);
  if ( frequency_bases[0] != last_stable_frequency )
  {
    if ( chip_index > 1 )
    {
      chain_address = (unsigned int *)frequency_bases;
      for ( i = 1; i != chip_index; ++i )
      {
        for ( j = 0; j != 4; ++j )
        {
          if ( checkChainOperational(j) )
          {
            current_base = (char *)chain_address[1];
            if ( frequency_offsets[j] >= (unsigned int)current_base )
              adjustVoltageForChain(j, default_frequency, *chain_address, current_base, mining_algorithm);
          }
        }
        ++chain_address;
      }
    }
    for ( k = 0; k != 4; ++k )
    {
      if ( checkChainOperational(k) && frequency_offsets[k] != adjusted_frequencies[k] )
      {
        if ( globalLogLevel > 3 )
        {
          snprintf((char *)log_message_buffer, 0x800u, "chain = %d, start = %d, freq_step = %.2f\n", k, frequency_offsets[k], frequency_step);
          logMessage(3, (const char *)log_message_buffer, 0);
        }
        read_command_response = getChainASICCount();
        sorted_frequencies = calloc(read_command_response, 8u);
        if ( sorted_frequencies )
        {
          frequency_index = 0;
          chain_frequencies_data = &chain_frequencies[1024 * k];
          log_message_buffer[0] = 0;
          log_message_buffer[1] = 0;
          total_asic = getChainCount();
          if ( total_asic )
          {
            v48 = k;
            do
            {
              partial_asic_sum = getASICInterval();
              if ( partial_asic_sum )
              {
                for ( m = 0; m != partial_asic_sum; ++m )
                {
                  partial_asic = m + frequency_index * getASICInterval();
                  sorted_frequencies[2 * partial_asic + 1] = *(_DWORD *)&chain_frequencies_data[4 * partial_asic];
                  sorted_frequencies[2 * partial_asic] = partial_asic;
                }
              }
              asic_count = 8 * frequency_index++;
              asic_data_base = (char *)sorted_frequencies + getASICInterval() * asic_count;
              response_bytes = getASICInterval();
              qsort(asic_data_base, response_bytes, 8u, (__compar_fn_t)sortFrequencyData);
            }
            while ( total_asic != frequency_index );
            k = v48;
          }
          response_bytes = getChainASICCount();
          current_frequency = 0.0;
          if ( response_bytes )
          {
            data_pointer = &chain_frequencies_data[4 * response_bytes];
            do
            {
              frequency_data = *(_DWORD *)chain_frequencies_data;
              chain_frequencies_data += 4;
              calculated_frequency = (float)frequency_data;
              if ( calculated_frequency > current_frequency )
                current_frequency = calculated_frequency;
            }
            while ( data_pointer != chain_frequencies_data );
          }
          if ( (unsigned int)(float)((float)((float)(frequency_step + current_frequency) - 1.0) / frequency_step) )
          {
            sorted_asic_index = 0;
            do
            {
              ++sorted_asic_index;
              v49 = getASICInterval();
              diff_frequency = (float)sorted_asic_index * frequency_step;
              if ( v49 )
              {
                for ( n = 0; n != v49; ++n )
                {
                  total_asic_on_chain = getChainCount();
                  if ( total_asic_on_chain )
                  {
                    for ( ii = 0; ii != total_asic_on_chain; ++ii )
                    {
                      read_frequency = sorted_frequencies[2 * n + 2 * ii * getASICInterval()];
                      target_frequency = (float)(unsigned int)sorted_frequencies[2 * n + 1 + 2 * ii * getASICInterval()];
                      if ( diff_frequency <= target_frequency || frequency_step > (float)(diff_frequency - target_frequency) )
                      {
                        generateNonce(temp_buffer, 0);
                        BYTE2(log_message_buffer[1]) = temp_buffer[0];
                        buffer = getNextNonceIndex();
                        adjustASICVoltage(k, 0, (unsigned __int8)(buffer * read_frequency), default_frequency, log_message_buffer[0], log_message_buffer[1]);
                      }
                    }
                  }
                  usleep((__useconds_t)&delay_duration);
                }
              }
            }
            while ( (unsigned int)(float)((float)((float)(frequency_step + current_frequency) - 1.0) / frequency_step) != sorted_asic_index );
          }
          free(sorted_frequencies);
        }
        else if ( globalLogLevel > 3 )
        {
          strcpy((char *)log_message_buffer, "failed alloc memory!\n");
          logMessage(3, (const char *)log_message_buffer, 0);
        }
      }
    }
  }
  return last_stable_frequency;
}
```