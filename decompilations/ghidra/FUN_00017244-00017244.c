
/* WARNING: Removing unreachable block (ram,0x000173a8) */

void FUN_00017244(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 local_828;
  undefined local_826;
  
  if (DAT_0007eb9c < 4) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    snprintf((char *)&local_828,0x800,"[chain %d]\n",param_1);
    FUN_0002e584(3,&local_828,0);
    uVar1 = DAT_0007eb9c;
    if (param_3 == 0) goto LAB_00017360;
  }
  uVar2 = 0;
  uVar1 = DAT_0007eb9c;
LAB_000172b4:
  do {
    uVar3 = uVar2 & 0xf;
    if (uVar3 == 0) {
      if (3 < uVar1) {
        snprintf((char *)&local_828,0x800,"0x%04X ",uVar2);
        FUN_0002ea54(3,&local_828,0);
        uVar1 = DAT_0007eb9c;
      }
joined_r0x000172f8:
      if (3 < uVar1) {
        snprintf((char *)&local_828,0x800,"%02X ",(uint)*(byte *)(param_2 + uVar2));
        FUN_0002ea54(3,&local_828,0);
        uVar1 = DAT_0007eb9c;
        if ((uVar3 == 0xf) && (3 < DAT_0007eb9c)) {
          uVar2 = uVar2 + 1;
          local_828 = 10;
          FUN_0002ea54(3,&local_828,0);
          uVar1 = DAT_0007eb9c;
          if (param_3 <= uVar2) break;
          goto LAB_000172b4;
        }
      }
    }
    else {
      if (uVar3 != 8) goto joined_r0x000172f8;
      if (3 < uVar1) {
        local_828 = (undefined2)DAT_00060de4;
        local_826 = (undefined)((uint)DAT_00060de4 >> 0x10);
        FUN_0002ea54(3,&local_828,0);
        uVar1 = DAT_0007eb9c;
        goto joined_r0x000172f8;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_3);
LAB_00017360:
  if (uVar1 < 4) {
    return;
  }
  local_828 = 10;
  FUN_0002ea54(3,&local_828,0);
  return;
}

