int __fastcall sub_36CA8(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // r9
  signed int v6; // r6
  int v7; // r5
  unsigned __int16 v10; // r11
  int v11; // r10
  int v12; // r0
  int v13; // r1
  int *v14; // r2
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r9
  int result; // r0
  char s[2088]; // [sp+10h] [bp-828h] BYREF

  v4 = a1 << 8;
  v6 = HIWORD(a3);
  v7 = a4 + 4 * ((a1 << 8) + a2) + 0x800000;
  v10 = a3;
  v11 = *(_DWORD *)(dword_4FCB34 + 4);
  *(_DWORD *)(a4 + 4 * ((a1 << 8) + a2) + 8425472) += HIWORD(a3);
  v12 = sub_1E130();
  v15 = 4 * a1;
  if ( v6 <= 8 * v12 )
    v14 = (int *)(a4 + v15);
  v16 = a4 + v15;
  if ( v6 <= 8 * v12 )
    v14 += 0x200000;
  v17 = v16 + 0x800000;
  if ( v6 <= 8 * v12 )
    v14 += 10240;
  v18 = v17 + 40960;
  if ( v6 <= 8 * v12 )
    v13 = *v14;
  v19 = v11 + v4;
  if ( v6 <= 8 * v12 )
    *v14 = v13 + v6;
  *(_DWORD *)(v18 + 2144) += v10 - v6;
  *(_BYTE *)(v19 + a2) = 1;
  result = sub_1E130();
  if ( v6 > 8 * result && (unsigned int)globalLogLevel > 3 )
  {
    snprintf(
      s,
      0x800u,
      "Nonce counter overflow: chain = %d, asic = %d, nonce_return = %d, nonce_match = %d, nonce_accumulate = %d\n",
      a1,
      a2,
      v10,
      v6,
      *(_DWORD *)(v7 + 36864));
    return logMessage(3, s, 0);
  }
  return result;
}
