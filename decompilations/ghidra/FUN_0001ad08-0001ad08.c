
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0001ad08(float param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  short sVar2;
  int iVar3;
  void *__ptr;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  size_t sVar16;
  size_t __nmemb;
  uint *__s;
  int iVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint local_1888;
  uint local_1884;
  undefined4 local_1878;
  undefined local_1874 [4];
  undefined4 local_1870;
  undefined4 local_186c;
  uint local_1868 [4];
  uint local_1858 [4];
  uint local_1848 [4];
  undefined4 local_1838;
  undefined4 local_1834;
  undefined4 uStack_1830;
  undefined4 uStack_182c;
  undefined4 uStack_1828;
  undefined2 local_1824;
  uint local_1038 [1025];
  int *piVar15;
  
  iVar9 = 0;
  __s = local_1848 + 4;
  local_1884 = 0;
  local_1878 = 0;
  memset(local_1038,0,0x1000);
  local_1858[0] = 0;
  local_1848[0] = 0;
  local_1870 = 0;
  local_1868[1] = 0xffffffff;
  local_1868[2] = 0xffffffff;
  local_1868[3] = 0xffffffff;
  local_186c = 0;
  local_1868[0] = 0xffffffff;
  local_1858[1] = 0;
  local_1858[2] = 0;
  local_1858[3] = 0;
  local_1848[1] = 0;
  local_1848[2] = 0;
  local_1848[3] = 0;
  sVar16 = 0;
  do {
    iVar3 = FUN_0001e29c(iVar9);
    __nmemb = sVar16;
    if (iVar3 != 0) {
      piVar13 = (int *)(param_2 + iVar9 * 0x400);
      FUN_00019d70(piVar13,local_1868 + iVar9,local_1858 + iVar9,&local_1878);
      __nmemb = sVar16 + 1;
      uVar7 = local_1858[iVar9];
      if (local_1858[iVar9] <= local_1884) {
        uVar7 = local_1884;
      }
      local_1848[sVar16] = local_1868[iVar9];
      iVar3 = FUN_0001e0f0();
      uVar12 = local_1878;
      if (iVar3 != 0) {
        uVar19 = local_1868[iVar9];
        piVar14 = piVar13;
        puVar11 = local_1038 + iVar9 * 0x100;
        do {
          piVar15 = piVar14 + 1;
          *puVar11 = *piVar14 - uVar19;
          piVar14 = piVar15;
          puVar11 = puVar11 + 1;
        } while (piVar15 != piVar13 + iVar3);
      }
      if (DAT_0007edc8 == 2) {
        (&DAT_0007f8c4)[iVar9] = DAT_00482a6c;
      }
      uVar6 = FUN_0001e0f0();
      uVar12 = FUN_0005f880(uVar12,uVar6);
      *(undefined4 *)(DAT_0001b244 + iVar9 * 4) = uVar12;
      local_1884 = uVar7;
    }
    iVar9 = iVar9 + 1;
    sVar16 = __nmemb;
  } while (iVar9 != 4);
  qsort(local_1848,__nmemb,4,FUN_00019d60);
  FUN_0001a470((float)(ulonglong)local_1848[0],0xff,param_3,param_4);
  if (local_1848[0] != local_1884) {
    if (1 < __nmemb) {
      puVar11 = local_1848;
      sVar16 = 1;
      do {
        iVar9 = 0;
        do {
          iVar3 = FUN_0001e29c(iVar9);
          if ((iVar3 != 0) && (puVar11[1] <= local_1868[iVar9])) {
            FUN_0001aae4(param_1,iVar9,param_3,*puVar11,puVar11[1],param_4);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 4);
        sVar16 = sVar16 + 1;
        puVar11 = puVar11 + 1;
      } while (__nmemb != sVar16);
    }
    iVar9 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar9);
      if ((iVar3 != 0) && (uVar7 = local_1868[iVar9], uVar7 != local_1858[iVar9])) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)__s,0x800,"chain = %d, start = %d, freq_step = %.2f\n",iVar9,uVar7);
          FUN_0002e584(3,__s,0);
        }
        sVar16 = FUN_0001e0f0();
        __ptr = calloc(sVar16,8);
        if (__ptr == (void *)0x0) {
          if (3 < DAT_0007eb9c) {
            local_1838._0_1_ = s_failed_alloc_memory__00061864[0];
            local_1838._1_1_ = s_failed_alloc_memory__00061864[1];
            local_1838._2_1_ = s_failed_alloc_memory__00061864[2];
            local_1838._3_1_ = s_failed_alloc_memory__00061864[3];
            local_1834._0_1_ = s_failed_alloc_memory__00061864[4];
            local_1834._1_1_ = s_failed_alloc_memory__00061864[5];
            local_1834._2_1_ = s_failed_alloc_memory__00061864[6];
            local_1834._3_1_ = s_failed_alloc_memory__00061864[7];
            uStack_1830._0_1_ = s_failed_alloc_memory__00061864[8];
            uStack_1830._1_1_ = s_failed_alloc_memory__00061864[9];
            uStack_1830._2_1_ = s_failed_alloc_memory__00061864[10];
            uStack_1830._3_1_ = s_failed_alloc_memory__00061864[11];
            uStack_182c._0_1_ = s_failed_alloc_memory__00061864[12];
            uStack_182c._1_1_ = s_failed_alloc_memory__00061864[13];
            uStack_182c._2_1_ = s_failed_alloc_memory__00061864[14];
            uStack_182c._3_1_ = s_failed_alloc_memory__00061864[15];
            uStack_1828._0_1_ = s_failed_alloc_memory__00061864[16];
            uStack_1828._1_1_ = s_failed_alloc_memory__00061864[17];
            uStack_1828._2_1_ = s_failed_alloc_memory__00061864[18];
            uStack_1828._3_1_ = s_failed_alloc_memory__00061864[19];
            local_1824 = (undefined2)ram0x00061878;
            FUN_0002e584(3,__s,0);
          }
        }
        else {
          iVar10 = 0;
          puVar11 = local_1038 + iVar9 * 0x100;
          local_1838._0_1_ = '\0';
          local_1838._1_1_ = '\0';
          local_1838._2_1_ = '\0';
          local_1838._3_1_ = '\0';
          local_1834._0_1_ = '\0';
          local_1834._1_1_ = '\0';
          local_1834._2_1_ = '\0';
          local_1834._3_1_ = '\0';
          iVar3 = FUN_0001e0e0();
          if (iVar3 != 0) {
            do {
              iVar4 = FUN_0001e100();
              if (iVar4 != 0) {
                iVar17 = 0;
                do {
                  iVar5 = FUN_0001e100();
                  iVar5 = iVar10 * iVar5 + iVar17;
                  iVar17 = iVar17 + 1;
                  *(uint *)((int)__ptr + iVar5 * 8 + 4) = puVar11[iVar5];
                  *(int *)((int)__ptr + iVar5 * 8) = iVar5;
                } while (iVar4 != iVar17);
              }
              iVar4 = iVar10 * 8;
              iVar10 = iVar10 + 1;
              iVar17 = FUN_0001e100();
              sVar16 = FUN_0001e100();
              qsort((void *)(iVar17 * iVar4 + (int)__ptr),sVar16,8,FUN_00019d40);
            } while (iVar3 != iVar10);
          }
          iVar3 = FUN_0001e0f0();
          fVar18 = DAT_0001b240;
          if (iVar3 != 0) {
            puVar8 = puVar11 + iVar3;
            do {
              uVar19 = *puVar11;
              puVar11 = puVar11 + 1;
              fVar20 = (float)(ulonglong)uVar19;
              if (fVar20 != fVar18 && fVar20 < fVar18 == (NAN(fVar20) || NAN(fVar18))) {
                fVar18 = fVar20;
              }
            } while (puVar8 != puVar11);
          }
          fVar18 = ((param_1 + fVar18) - 1.0) / param_1;
          uVar19 = (uint)(0.0 < fVar18) * (int)fVar18;
          if (uVar19 != 0) {
            local_1888 = 0;
            do {
              local_1888 = local_1888 + 1;
              iVar3 = FUN_0001e100();
              fVar18 = (float)(ulonglong)local_1888 * param_1;
              if (iVar3 != 0) {
                iVar10 = 0;
                do {
                  iVar4 = FUN_0001e0e0();
                  if (iVar4 != 0) {
                    iVar17 = 0;
                    do {
                      iVar5 = FUN_0001e100();
                      uVar12 = *(undefined4 *)((int)__ptr + (iVar17 * iVar5 + iVar10) * 8);
                      iVar5 = FUN_0001e100();
                      fVar20 = (float)(ulonglong)
                                      *(uint *)((int)__ptr + (iVar17 * iVar5 + iVar10) * 8 + 4);
                      if ((fVar18 == fVar20 || fVar18 < fVar20 != (NAN(fVar18) || NAN(fVar20))) ||
                         (fVar18 - fVar20 < param_1)) {
                        fVar1 = fVar18;
                        if (fVar20 <= fVar18) {
                          fVar1 = fVar20;
                        }
                        FUN_000502c0(fVar1 + (float)(ulonglong)uVar7,__s,local_1874,0);
                        local_1834._2_1_ = local_1874[0];
                        sVar2 = FUN_0001e160();
                        FUN_0001f164(iVar9,0,(int)sVar2 * (int)(short)uVar12 & 0xff,param_3,
                                     local_1838,local_1834);
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar4 != iVar17);
                  }
                  iVar10 = iVar10 + 1;
                  usleep(100000);
                } while (iVar3 != iVar10);
              }
            } while (uVar19 != local_1888);
          }
          free(__ptr);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 4);
  }
  return local_1884;
}

