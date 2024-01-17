
void FUN_0001aae4(float param_1,int param_2,undefined4 param_3,char *param_4,char *param_5_00,
                 char param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  char *local_850;
  undefined local_844 [4];
  undefined4 local_840;
  undefined uStack_83a;
  char acStack_838 [2052];
  
  local_850 = param_5_00;
  if (DAT_0007eb9c < 5) {
    local_850 = acStack_838;
  }
  if (4 < DAT_0007eb9c) {
    local_850 = acStack_838;
    pcVar1 = "false";
    if (param_5 != '\0') {
      pcVar1 = "true";
    }
    snprintf(local_850,0x800,
             "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n"
             ,param_2,param_4,param_5_00,(double)param_1,pcVar1);
    FUN_0002e584(4,local_850,0);
  }
  FUN_0001f0e0(param_2,1,0,param_3);
  *(undefined4 *)(local_850 + -4) = 0;
  local_840 = 0;
  if (param_4 < param_5_00) {
    uVar2 = (int)param_5_00 - (int)param_4;
  }
  else {
    uVar2 = (int)param_4 - (int)param_5_00;
  }
  dVar4 = ((double)((float)(ulonglong)uVar2 + param_1) - DAT_0001ad00) / (double)param_1;
  uVar2 = (uint)(0.0 < dVar4) * (int)(longlong)dVar4;
  if (uVar2 != 0) {
    lVar6 = (ulonglong)(uint)(float)ZEXT48(param_5_00) << 0x20;
    uVar3 = 1;
    do {
      fVar7 = (float)((ulonglong)lVar6 >> 0x20);
      if (param_4 < param_5_00) {
        fVar5 = (float)(ulonglong)uVar3 * param_1 + (float)ZEXT48(param_4);
        lVar6 = CONCAT44(fVar7,fVar5);
        if (fVar5 != fVar7 && fVar5 < fVar7 == (NAN(fVar5) || NAN(fVar7))) {
          lVar6 = CONCAT44(fVar7,fVar7);
        }
      }
      else {
        fVar5 = (float)ZEXT48(param_4) - (float)(ulonglong)uVar3 * param_1;
        if (fVar5 < fVar7) {
          fVar5 = fVar7;
        }
        lVar6 = CONCAT44(fVar7,fVar5);
      }
      FUN_000502c0((float)lVar6,local_850 + -8,local_844,0);
      uVar3 = uVar3 + 1;
      uStack_83a = local_844[0];
      FUN_0001f164(param_2,1,0,param_3,*(undefined4 *)(local_850 + -8));
      if (4 < DAT_0007eb9c) {
        snprintf(local_850,0x800,"chain = %d set freq to %.2f",param_2,(double)(float)lVar6);
        FUN_0002e584(4,local_850,0);
      }
      usleep(100000);
    } while (uVar3 <= uVar2);
  }
  (&DAT_0007f8c4)[param_2] = param_5_00;
  (&DAT_0007f8e0)[param_2] = param_5_00;
  return;
}

