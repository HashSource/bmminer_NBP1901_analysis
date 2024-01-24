int __fastcall sub_392B8(int a1)
{
  int v2; // r3
  char v4[2064]; // [sp+0h] [bp-810h] BYREF

  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(v4, 0x800u, "[DEBUG] Check if chain is unbalance happen, chain = %d.\n", a1);
    logMessage(4, v4, 0);
  }
  if ( dword_4FCB3C )
  {
    v2 = *(_DWORD *)(dword_4FCB3C + 4);
    if ( v2 )
      return (*(int (__fastcall **)(int))(v2 + 36))(a1);
  }
  if ( (unsigned int)globalLogLevel > 3 )
    return sub_388F4();
  return 1;
}
