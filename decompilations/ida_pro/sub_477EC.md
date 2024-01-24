```c
int __fastcall readDataFromEEPROM(unsigned int chain_id, __int16 eeprom_addr_high, __int16 eeprom_addr_low, void *destination_buffer, int data_length)
{
  int return_code; // r7
  int read_data_len; // r8
  unsigned __int8 *read_buffer; // r0
  int address_field; // r2
  int read_actual_length; // r4
  unsigned __int8 *allocated_buffer; // r6
  const char *error_message; // r2
  int read_byte; // r3
  int calculated_checksum; // r8
  __int16 first_byte; // r0
  unsigned int checksum_high; // r3
  unsigned int checksum_low; // r2
  int checksum; // r3
  unsigned __int8 *checksum_position; // r7
  int header_buffer; // [sp+14h] [bp-834h] BYREF
  char hardware_address_code; // [sp+18h] [bp-830h]
  char eeprom_high_byte; // [sp+19h] [bp-82Fh]
  char eeprom_low_byte; // [sp+1Ah] [bp-82Eh]
  char data_length_byte; // [sp+1Bh] [bp-82Dh]
  char command_code; // [sp+1Ch] [bp-82Ch]
  char debug_message[2088]; // [sp+20h] [bp-828h] BYREF

  if ( chain_id > 0xF )
  {
    snprintf(debug_message, 0x800u, "%s: Bad pic param, input chain is %d\n", "readDataFromEEPROM", chain_id);
    read_actual_length = -2147483135;
    logMessage(0, debug_message, 0);
    return read_actual_length;
  }
  if ( !dword_99EE48[2 * chain_id + 1] )
  {
    read_actual_length = initializeEEPROM(chain_id);
    if ( read_actual_length < 0 )
    {
      snprintf(debug_message, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "readDataFromEEPROM", chain_id);
      logMessage(0, debug_message, 0);
      return read_actual_length;
    }
  }
  read_data_len = data_length + 5;
  int pic_i2c_fd = dword_99EE48[2 * chain_id];
  pthread_mutex_lock(&i2c_mutex);
  read_buffer = (unsigned __int8 *)malloc(data_length + 5);
  address_field = (0xFFFFC9C5 << 16) | 0xFFE6; // initialization of header_buffer
  if ( data_length >= 16 )
    read_actual_length = 16;
  else
    read_actual_length = data_length;
  
  header_buffer = address_field;
  allocated_buffer = read_buffer;
  hardware_address_code = eeprom_addr_high;
  eeprom_high_byte = eeprom_addr_low;
  eeprom_low_byte = read_actual_length;
  command_code = read_actual_length + 61 + eeprom_addr_low + eeprom_addr_high;
  data_length_byte = (unsigned __int16)(read_actual_length + 61 + eeprom_addr_low + eeprom_addr_high) >> 8;
  if ( sendI2CData(pic_i2c_fd, (int)&header_buffer, 9) == 9 )
  {
    usleep(0x493E0u);
    if ( read_data_len == receiveI2CData(pic_i2c_fd, allocated_buffer, data_length + 5) )
    {
      read_byte = read_buffer[1];
      calculated_checksum = *read_buffer;
      first_byte = *read_buffer;
      if ( read_byte == 54 && read_buffer[2] == 1 && read_data_len == calculated_checksum )
      {
        if ( data_length + 3 > 0 )
        {
          checksum_low = 0;
          checksum = 0;
          while ( 1 )
          {
            checksum = (unsigned __int16)(checksum + 1);
            checksum_low = (unsigned __int16)(checksum_low + first_byte);
            if ( checksum >= data_length + 3 )
              break;
            first_byte = read_buffer[checksum];
          }
          checksum_high = checksum_low >> 8;
        }
        else
        {
          checksum_high = 0;
          checksum_low = 0;
        }
        checksum_position = &read_buffer[read_data_len];
        if ( *(checksum_position - 2) == checksum_high && *(checksum_position - 1) == (unsigned __int8)checksum_low )
        {
          memcpy(destination_buffer, read_buffer + 3, read_actual_length);
        }
        else
        {
          read_actual_length = 0;
          snprintf(debug_message, 0x800u, "%s failed 2!\n", "readDataFromEEPROM");
          logMessage(0, debug_message, 0);
          showErrorAndFreeBuffer(allocated_buffer, calculated_checksum);
        }
      }
      else
      {
        snprintf(
          debug_message,
          0x800u,
          "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n",
          "readDataFromEEPROM",
          calculated_checksum,
          read_byte,
          read_buffer[2]);
        read_actual_length = 0;
        logMessage(0, debug_message, 0);
        showErrorAndFreeBuffer(allocated_buffer, data_length + 5);
      }
      goto LABEL_9;
    }
    error_message = "%s read iic 2 err\n";
  }
  else
  {
    error_message = "%s write iic 2 err\n";
  }
  read_actual_length = 0;
  snprintf(debug_message, 0x800u, error_message, "readDataFromEEPROM");
  logMessage(0, debug_message, 0);
LABEL_9:
  free(allocated_buffer);
  pthread_mutex_unlock(&i2c_mutex);
  return read_actual_length;
}
```