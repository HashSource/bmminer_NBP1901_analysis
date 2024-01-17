
void FUN_0001a870(float param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined local_844 [4];
  undefined4 local_840;
  undefined4 local_83c;
  char acStack_838 [2052];
  longlong lVar8;
  
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_838,0x800,"fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n",
             param_3,param_4);
    FUN_0002e584(4,acStack_838,0);
  }
  iVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    if (iVar1 != 0) {
      FUN_0001f0e0(iVar3,1,0,param_2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (param_3 < param_4) {
    uVar2 = param_4 - param_3;
  }
  else {
    uVar2 = param_3 - param_4;
  }
  dVar5 = ((double)((float)(ulonglong)uVar2 + param_1) - DAT_0001aad8) / (double)param_1;
  uVar2 = (uint)(0.0 < dVar5) * (int)(longlong)dVar5;
  if (uVar2 != 0) {
    uVar4 = 1;
    lVar8 = (ulonglong)(uint)(float)(ulonglong)param_4 << 0x20;
    do {
      fVar7 = (float)((ulonglong)lVar8 >> 0x20);
      local_840 = 0;
      local_83c = 0;
      if (param_3 < param_4) {
        fVar6 = (float)(ulonglong)param_3 + (float)(ulonglong)uVar4 * param_1;
        lVar8 = CONCAT44(fVar7,fVar6);
        if (fVar7 < fVar6) {
          lVar8 = CONCAT44(fVar7,fVar7);
        }
      }
      else {
        fVar6 = (float)(ulonglong)param_3 - (float)(ulonglong)uVar4 * param_1;
        if (fVar7 != fVar6 && fVar7 < fVar6 == (NAN(fVar7) || NAN(fVar6))) {
          fVar6 = fVar7;
        }
        lVar8 = CONCAT44(fVar7,fVar6);
      }
      iVar3 = 0;
      do {
        iVar1 = FUN_0001e29c(iVar3);
        if (iVar1 != 0) {
          fVar7 = (float)lVar8;
          FUN_000502c0(fVar7,&local_840,local_844,0);
          FUN_0001f164(iVar3,1,0,param_2,local_840);
          if (4 < DAT_0007eb9c) {
            snprintf(acStack_838,0x800,"chain = %d set freq to %.2f",iVar3,(double)fVar7);
            FUN_0002e584(4,acStack_838,0);
          }
          iVar1 = DAT_0001aae0;
          (&DAT_0007f8c4)[iVar3] = (int)fVar7;
          *(int *)(iVar1 + iVar3 * 4) = (int)fVar7;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      uVar4 = uVar4 + 1;
      usleep(100000);
    } while (uVar4 <= uVar2);
  }
  iVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    if (iVar1 != 0) {
      (&DAT_0007f8c4)[iVar3] = param_4;
      (&DAT_0007f8e0)[iVar3] = param_4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return;
}

