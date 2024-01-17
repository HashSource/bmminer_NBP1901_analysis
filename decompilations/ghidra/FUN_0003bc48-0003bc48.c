
void FUN_0003bc48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  undefined4 local_828;
  
  if (4 < DAT_0007eb9c) {
    snprintf((char *)&local_828,0x800,"[DEBUG] Dump freq table, chain = %d.\n",param_1);
    FUN_0002e584(4,&local_828,0);
  }
  iVar4 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar4);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == iVar4)) {
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"chain = %d\n",iVar4);
        FUN_0002ea54(3,&local_828,0);
      }
      iVar1 = FUN_0001e0f0();
      if (iVar1 != 0) {
        iVar3 = 0;
        do {
          if (3 < DAT_0007eb9c) {
            snprintf((char *)&local_828,0x800,"[%3d]:%-3d",iVar3,
                     *(undefined4 *)(param_2 + iVar4 * 0x400 + iVar3 * 4));
            FUN_0002ea54(3,&local_828,0);
            if (3 < DAT_0007eb9c) {
              local_828 = &DAT_00202020;
              FUN_0002ea54(3,&local_828,0);
            }
          }
          iVar3 = iVar3 + 1;
          uVar2 = FUN_0001e100();
          FUN_0005fadc(iVar3,uVar2);
          if ((extraout_r1 == 0) && (3 < DAT_0007eb9c)) {
            local_828 = (undefined *)CONCAT22(local_828._2_2_,10);
            FUN_0002ea54(3,&local_828);
          }
        } while (iVar1 != iVar3);
      }
      if (3 < DAT_0007eb9c) {
        local_828 = (undefined *)CONCAT22(local_828._2_2_,10);
        FUN_0002ea54(3,&local_828,0);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return;
}

