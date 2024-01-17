
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003962c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined local_808;
  
  if (DAT_0007eb9c < 4) {
    if ((DAT_004fcb3c != 0) && (*(int *)(DAT_004fcb3c + 4) != 0)) goto LAB_00039714;
  }
  else {
    if (param_2 == 0) {
      pcVar2 = "BLOCK";
    }
    else if (param_2 == 1) {
      pcVar2 = "READY";
    }
    else {
      pcVar2 = "DONE";
      if (param_2 != 2) {
        pcVar2 = "UNKNOWN";
      }
    }
    snprintf((char *)&local_818,0x800,"chain = %d, status = %s\n",param_1,pcVar2);
    FUN_0002e584(3,&local_818,0);
    if ((DAT_004fcb3c != 0) && (*(int *)(DAT_004fcb3c + 4) != 0)) {
LAB_00039714:
      iVar3 = 0;
      do {
        iVar1 = FUN_0001e29c(iVar3);
        if (iVar1 != 0) {
          if (param_1 == 0xff) {
            *(int *)(DAT_004fcb3c + (iVar3 + 2) * 4) = param_2;
          }
          else if (param_1 == iVar3) {
            *(int *)(DAT_004fcb3c + (param_1 + 2) * 4) = param_2;
            return;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      return;
    }
    if (3 < DAT_0007eb9c) {
      local_818._0_1_ = s_Handle_is_NULL__00067bc8[0];
      local_818._1_1_ = s_Handle_is_NULL__00067bc8[1];
      local_818._2_1_ = s_Handle_is_NULL__00067bc8[2];
      local_818._3_1_ = s_Handle_is_NULL__00067bc8[3];
      uStack_814._0_1_ = s_Handle_is_NULL__00067bc8[4];
      uStack_814._1_1_ = s_Handle_is_NULL__00067bc8[5];
      uStack_814._2_1_ = s_Handle_is_NULL__00067bc8[6];
      uStack_814._3_1_ = s_Handle_is_NULL__00067bc8[7];
      uStack_810._0_1_ = s_Handle_is_NULL__00067bc8[8];
      uStack_810._1_1_ = s_Handle_is_NULL__00067bc8[9];
      uStack_810._2_1_ = s_Handle_is_NULL__00067bc8[10];
      uStack_810._3_1_ = s_Handle_is_NULL__00067bc8[11];
      uStack_80c._0_1_ = s_Handle_is_NULL__00067bc8[12];
      uStack_80c._1_1_ = s_Handle_is_NULL__00067bc8[13];
      uStack_80c._2_1_ = s_Handle_is_NULL__00067bc8[14];
      uStack_80c._3_1_ = s_Handle_is_NULL__00067bc8[15];
      local_808 = (undefined)ram0x00067bd8;
      FUN_0002e584(3,&local_818,0);
    }
  }
  return;
}

