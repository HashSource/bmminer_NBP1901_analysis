int __fastcall sub_39404(int a1)
{
  float v1; // s0
  int result; // r0
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n",
      a1,
      v1);
    logMessage(4, s, 0);
  }
  if ( dword_4FCB3C && *(_DWORD *)(dword_4FCB3C + 4) )
  {
    if ( *(float *)(dword_4FCB3C + 4 * a1 + 48) < v1 )
    {
      result = 1;
      *(_BYTE *)(dword_4FCB3C + a1 + 28) = 1;
    }
    else
    {
      return 0;
    }
  }
  else if ( (unsigned int)globalLogLevel > 3 )
  {
    return sub_388F4();
  }
  else
  {
    return 1;
  }
  return result;
}
