int __fastcall sub_377D8(int a1)
{
  int v1; // r7
  int v2; // r9
  int v3; // r4
  int v4; // r11
  int v5; // r9
  _DWORD *v6; // r10
  char *v7; // r4
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  char *v11; // lr
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r0
  _DWORD *v16; // r6
  int v17; // r1
  int v18; // r9
  int v19; // r2
  _DWORD *v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  char *v24; // r7
  _DWORD *v25; // lr
  _DWORD *v26; // lr
  int v27; // r1
  int v28; // r2
  int v29; // r3
  char *v30; // lr
  int v31; // r1
  int v32; // r2
  int v33; // r3
  bool v34; // zf
  unsigned int v35; // r4
  int v36; // r5
  int v37; // r3
  int v38; // r1
  _DWORD *v40; // r3
  int v41; // r1
  int v42; // lr
  int v43; // r0
  int v44; // r2
  int v45; // r0
  int v46; // r1
  int v47; // lr
  int v48; // r0
  int v49; // r0
  int v50; // r1
  int v51; // r3
  int v52[33]; // [sp+0h] [bp-9D0h] BYREF
  int *v53; // [sp+88h] [bp-948h]
  _DWORD *v54; // [sp+8Ch] [bp-944h]
  int v55; // [sp+90h] [bp-940h]
  int v56; // [sp+94h] [bp-93Ch]
  _DWORD *v57; // [sp+98h] [bp-938h]
  int v58; // [sp+9Ch] [bp-934h]
  int v59; // [sp+A0h] [bp-930h]
  int v60; // [sp+A4h] [bp-92Ch]
  int v61; // [sp+A8h] [bp-928h]
  _DWORD *v62; // [sp+ACh] [bp-924h]
  int v63; // [sp+B0h] [bp-920h]
  _DWORD *v64; // [sp+B4h] [bp-91Ch]
  int v65; // [sp+B8h] [bp-918h]
  int v66; // [sp+BCh] [bp-914h]
  int v67; // [sp+C0h] [bp-910h]
  int v68; // [sp+C4h] [bp-90Ch]
  void *v69; // [sp+C8h] [bp-908h]
  int *v70; // [sp+CCh] [bp-904h]
  __time_t v71[2]; // [sp+D0h] [bp-900h] BYREF
  __time_t v72[2]; // [sp+D8h] [bp-8F8h] BYREF
  char v73[20]; // [sp+E0h] [bp-8F0h] BYREF
  int v74; // [sp+F4h] [bp-8DCh]
  int v75; // [sp+F8h] [bp-8D8h]
  int v76; // [sp+FCh] [bp-8D4h]
  int v77; // [sp+100h] [bp-8D0h]
  int v78; // [sp+104h] [bp-8CCh]
  int v79; // [sp+108h] [bp-8C8h]
  int v80; // [sp+10Ch] [bp-8C4h]
  int v81; // [sp+110h] [bp-8C0h] BYREF
  _BYTE v82[148]; // [sp+114h] [bp-8BCh] BYREF
  char s[2088]; // [sp+1A8h] [bp-828h] BYREF

  v67 = a1;
  v70 = &globalLogLevel;
  sub_302A0(v71);
  if ( (unsigned int)globalLogLevel <= 3 || (strcpy(s, "\n"), sub_2EA54(3, s, 0), (unsigned int)*v70 <= 3) )
  {
    v68 = sub_1E0F0();
    if ( !v68 )
    {
LABEL_37:
      v1 = v68;
      goto LABEL_26;
    }
  }
  else
  {
    snprintf(s, 0x800u, ">>>> Send work for chain %d.\n", v67);
    logMessage(3, s, 0);
    v68 = sub_1E0F0();
    if ( !v68 )
      goto LABEL_37;
  }
  v1 = 0;
  v56 = 0;
  v66 = 0;
  v69 = &unk_202A2A;
  v64 = &dword_80ACAC[1664 * v67];
  v2 = 1 << v67;
  do
  {
    v3 = *(_DWORD *)(dword_4FCB38 + 4 * ((_DWORD)v69 + v66) + 4);
    v65 = sub_1E130();
    if ( v65 )
    {
      v4 = v2;
      v5 = v1;
      v62 = (_DWORD *)(v3 + 20);
      v61 = 0;
      v63 = (unsigned __int8)~((unsigned int)~(v67 << 25) >> 25);
      do
      {
        v6 = v62;
        v60 = v61 & 3;
        v55 = 0;
        do
        {
          while ( (v4 & sub_44ED4()) == 0 )
          {
            ++v5;
            usleep(0x3E8u);
          }
          v7 = v73;
          v8 = v6 - 5;
          v54 = v6 - 5;
          do
          {
            v9 = *v8;
            v8 += 4;
            v10 = *(v8 - 3);
            v11 = v7;
            v12 = *(v8 - 2);
            v7 += 16;
            v13 = *(v8 - 1);
            *(_DWORD *)v11 = v9;
            *((_DWORD *)v11 + 1) = v10;
            *((_DWORD *)v11 + 2) = v12;
            *((_DWORD *)v11 + 3) = v13;
          }
          while ( v8 != v6 + 7 );
          v14 = 0;
          *(_DWORD *)v7 = *v8;
          memset(&v82[2], 0, 0x92u);
          v15 = *(v6 - 3);
          v59 = v5;
          v16 = &v64[13 * v56];
          v17 = *(v6 - 2);
          v18 = v60;
          v82[1] = v63;
          v19 = *(v6 - 1);
          LOBYTE(v74) = v74 + 1;
          *(_DWORD *)&v82[8] = v15;
          *(_DWORD *)&v82[12] = v17;
          *(_DWORD *)&v82[16] = v19;
          v53 = &v81;
          v58 = v4;
          *(_DWORD *)&v82[4] = v56 & 0x7F | v55;
          v57 = v54 + 12;
          v82[0] = 1;
          do
          {
            v20 = (_DWORD *)((char *)v16 + dword_4FCB38);
            if ( v14 == v18 )
            {
              v40 = &v82[32 * v14 + 20];
              v41 = v6[1];
              v42 = v6[2];
              *v40 = *v6;
              v43 = v6[3];
              v44 = (int)v54;
              v40[1] = v41;
              v40[3] = v43;
              v45 = v6[4];
              v40[2] = v42;
              v46 = v6[5];
              v47 = v6[6];
              v40[4] = v45;
              v48 = v6[7];
              v40[5] = v46;
              v40[6] = v47;
              v40[7] = v48;
              do
              {
                v44 += 16;
                v20 += 4;
                v49 = *(_DWORD *)(v44 - 12);
                v50 = *(_DWORD *)(v44 - 8);
                v51 = *(_DWORD *)(v44 - 4);
                v34 = v44 == (_DWORD)v57;
                *(v20 - 4) = *(_DWORD *)(v44 - 16);
                *(v20 - 3) = v49;
                *(v20 - 2) = v50;
                *(v20 - 1) = v51;
              }
              while ( !v34 );
              *v20 = *v57;
            }
            else
            {
              v21 = v75;
              v22 = v76;
              v23 = v77;
              v24 = v73;
              v25 = &v82[32 * v14 + 20];
              *v25 = v74;
              v25[1] = v21;
              v25[2] = v22;
              v25[3] = v23;
              v26 = &v82[32 * v14 + 36];
              v27 = v79;
              v28 = v80;
              v29 = v81;
              *v26 = v78;
              v26[1] = v27;
              v26[2] = v28;
              v26[3] = v29;
              do
              {
                v30 = v24;
                v24 += 16;
                v20 += 4;
                v31 = *((_DWORD *)v30 + 1);
                v32 = *((_DWORD *)v30 + 2);
                v33 = *((_DWORD *)v30 + 3);
                v34 = v30 + 16 == (char *)v53;
                *(v20 - 4) = *(_DWORD *)v30;
                *(v20 - 3) = v31;
                *(v20 - 2) = v32;
                *(v20 - 1) = v33;
              }
              while ( !v34 );
              *v20 = *(_DWORD *)v24;
            }
            ++v14;
            v16 += 13;
          }
          while ( v14 != 4 );
          v4 = v58;
          v6 += 13;
          v35 = v56 + 4;
          v5 = v59;
          memcpy(v52, &v82[16], sizeof(v52));
          v36 = v55 + 128;
          v55 += 128;
          sub_1EEB8(
            *(unsigned int *)v82,
            *(int *)&v82[4],
            *(int *)&v82[8],
            *(int *)&v82[12],
            v52[0],
            v52[1],
            v52[2],
            v52[3],
            v52[4],
            v52[5],
            v52[6],
            v52[7],
            v52[8],
            v52[9],
            v52[10],
            v52[11],
            v52[12],
            v52[13],
            v52[14],
            v52[15],
            v52[16],
            v52[17],
            v52[18],
            v52[19],
            v52[20],
            v52[21],
            v52[22],
            v52[23],
            v52[24],
            v52[25],
            v52[26],
            v52[27],
            v52[28]);
          if ( v35 >= 0x80 )
            v37 = 0;
          else
            v37 = v35;
          v56 = v37;
        }
        while ( v36 != 1024 );
        v62 += 104;
        ++v61;
      }
      while ( v65 != v61 );
      v1 = v5;
      v2 = v4;
    }
    v34 = v68 == ++v66;
  }
  while ( !v34 );
LABEL_26:
  sub_302A0(v72);
  v38 = v72[0] - v71[0];
  if ( v72[1] - v71[1] < 0 )
    --v38;
  if ( (unsigned int)*v70 > 3 )
  {
    snprintf(s, 0x800u, "Send work for chain %d done, time cost %lds, sleep_count = %d\n", v67, v38, v1);
    logMessage(3, s, 0);
  }
  return 0;
}
