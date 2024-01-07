
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031d58(uint param_1,int param_2)

{
  undefined *puVar1;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined local_810;
  
  DAT_00482a64 = param_1;
  if (param_2 == 0) {
    if (DAT_0007eb9c < 4) goto LAB_00031e30;
    if (param_1 < 0x12) {
      puVar1 = (&PTR_s_STATUS_INIT_000666c0)[param_1];
    }
    else {
      puVar1 = (undefined *)0x0;
    }
    snprintf((char *)&local_818,0x800,"%s\n",puVar1);
    FUN_0002e584(3,&local_818,0);
LAB_00031dd0:
    if (param_1 == 3) goto LAB_00031de0;
  }
  else {
    if (3 < DAT_0007eb9c) {
      if (param_1 < 0x12) {
        puVar1 = (&PTR_s_STATUS_INIT_000666c0)[param_1];
      }
      else {
        puVar1 = (undefined *)0x0;
      }
      snprintf((char *)&local_818,0x800,"%s: %s\n",puVar1,param_2);
      FUN_0002e584(3,&local_818,0);
      goto LAB_00031dd0;
    }
LAB_00031e30:
    if (param_1 == 3) {
      return;
    }
  }
  DAT_00482a68 = param_1;
LAB_00031de0:
  switch(DAT_00482a64) {
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (1 < DAT_0007eb9c) {
      snprintf((char *)&local_818,0x800,"%s: %s\n",DAT_00031f84,param_2);
      FUN_0002e584(1,&local_818,0);
    }
    FUN_00015150();
    FUN_00027ff8();
    FUN_00027f58();
    FUN_00027eb8();
    FUN_00031cac();
    FUN_00042728();
    FUN_00042784();
    return;
  case 6:
  case 0xb:
  case 0xd:
    if (1 < DAT_0007eb9c) {
      snprintf((char *)&local_818,0x800,"%s: %s\n",DAT_00031f88,param_2);
      FUN_0002e584(1,&local_818,0);
    }
    break;
  default:
    return;
  }
  FUN_00015150();
  FUN_00027ff8();
  FUN_00027f58();
  FUN_00027eb8();
  FUN_00031cac();
  FUN_00042728();
  FUN_00042784();
  local_818._0_1_ = s_restart_000668bc[0];
  local_818._1_1_ = s_restart_000668bc[1];
  local_818._2_1_ = s_restart_000668bc[2];
  local_818._3_1_ = s_restart_000668bc[3];
  uStack_814._0_1_ = s_restart_000668bc[4];
  uStack_814._1_1_ = s_restart_000668bc[5];
  uStack_814._2_1_ = s_restart_000668bc[6];
  uStack_814._3_1_ = s_restart_000668bc[7];
  local_810 = (undefined)ram0x000668c4;
  FUN_0002e584(0,&local_818);
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","driver-btm-api.c",0x98,DAT_00031f8c);
}

