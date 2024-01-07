
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FILE * FUN_00036218(void)

{
  FILE *__stream;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined local_7e0;
  
  __stream = fopen64("/config/scanfreqdone","r");
  if (4 < DAT_0007eb9c) {
    local_808._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[0];
    local_808._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[1];
    local_808._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[2];
    local_808._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[3];
    uStack_804._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[4];
    uStack_804._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[5];
    uStack_804._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[6];
    uStack_804._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[7];
    uStack_800._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[8];
    uStack_800._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[9];
    uStack_800._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[10];
    uStack_800._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[11];
    uStack_7fc._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[12];
    uStack_7fc._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[13];
    uStack_7fc._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[14];
    uStack_7fc._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[15];
    local_7f8._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[16];
    local_7f8._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[17];
    local_7f8._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[18];
    local_7f8._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[19];
    uStack_7f4._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[20];
    uStack_7f4._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[21];
    uStack_7f4._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[22];
    uStack_7f4._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[23];
    uStack_7f0._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[24];
    uStack_7f0._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[25];
    uStack_7f0._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[26];
    uStack_7f0._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[27];
    uStack_7ec._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[28];
    uStack_7ec._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[29];
    uStack_7ec._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[30];
    uStack_7ec._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[31];
    local_7e8._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[32];
    local_7e8._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[33];
    local_7e8._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[34];
    local_7e8._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[35];
    uStack_7e4._0_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[36];
    uStack_7e4._1_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[37];
    uStack_7e4._2_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[38];
    uStack_7e4._3_1_ = s__DEBUG__Check_if_sweep_is_alread_0006750c[39];
    local_7e0 = (undefined)ram0x00067534;
    FUN_0002e584(4,&local_808,0);
  }
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
    __stream = (FILE *)0x1;
  }
  return __stream;
}

