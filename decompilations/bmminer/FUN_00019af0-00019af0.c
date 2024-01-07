
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00019af0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined auStack_9b4 [32];
  char acStack_994 [128];
  undefined4 local_914 [23];
  undefined auStack_8b8 [160];
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 uStack_800;
  undefined local_7fc;
  
  memset(acStack_994,0,0x80);
  memset(auStack_9b4,0,0x20);
  iVar2 = FUN_000258c8(auStack_9b4);
  if (iVar2 == 0) {
    sprintf(acStack_994,"http://%s:%d/power/%s",param_1,param_2,auStack_9b4);
    __ptr = (void *)FUN_000253a0(acStack_994);
    if (__ptr != (void *)0x0) {
      iVar2 = FUN_0004d38c(__ptr,0,local_914);
      if (iVar2 == 0) {
        if (DAT_0007eb9c < 4) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0xffffffff;
          snprintf((char *)&local_818,0x800,"JSON decode failed(%d): %s",local_914[0],auStack_8b8);
          FUN_0002e584(3,&local_818,0);
        }
      }
      else {
        iVar3 = FUN_0004e234(iVar2,"power");
        if (iVar3 == 0) {
          if (DAT_0007eb9c < 4) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = 0xffffffff;
            local_818._0_1_ = s_no_json_object_power__found_00061564[0];
            local_818._1_1_ = s_no_json_object_power__found_00061564[1];
            local_818._2_1_ = s_no_json_object_power__found_00061564[2];
            local_818._3_1_ = s_no_json_object_power__found_00061564[3];
            uStack_814._0_1_ = s_no_json_object_power__found_00061564[4];
            uStack_814._1_1_ = s_no_json_object_power__found_00061564[5];
            uStack_814._2_1_ = s_no_json_object_power__found_00061564[6];
            uStack_814._3_1_ = s_no_json_object_power__found_00061564[7];
            uStack_810._0_1_ = s_no_json_object_power__found_00061564[8];
            uStack_810._1_1_ = s_no_json_object_power__found_00061564[9];
            uStack_810._2_1_ = s_no_json_object_power__found_00061564[10];
            uStack_810._3_1_ = s_no_json_object_power__found_00061564[11];
            uStack_80c._0_1_ = s_no_json_object_power__found_00061564[12];
            uStack_80c._1_1_ = s_no_json_object_power__found_00061564[13];
            uStack_80c._2_1_ = s_no_json_object_power__found_00061564[14];
            uStack_80c._3_1_ = s_no_json_object_power__found_00061564[15];
            local_808._0_1_ = s_no_json_object_power__found_00061564[16];
            local_808._1_1_ = s_no_json_object_power__found_00061564[17];
            local_808._2_1_ = s_no_json_object_power__found_00061564[18];
            local_808._3_1_ = s_no_json_object_power__found_00061564[19];
            local_804._0_1_ = s_no_json_object_power__found_00061564[20];
            local_804._1_1_ = s_no_json_object_power__found_00061564[21];
            local_804._2_1_ = s_no_json_object_power__found_00061564[22];
            local_804._3_1_ = s_no_json_object_power__found_00061564[23];
            uStack_800._0_1_ = s_no_json_object_power__found_00061564[24];
            uStack_800._1_1_ = s_no_json_object_power__found_00061564[25];
            uStack_800._2_1_ = s_no_json_object_power__found_00061564[26];
            uStack_800._3_1_ = s_no_json_object_power__found_00061564[27];
            local_7fc = (undefined)ram0x00061580;
            FUN_0002e584(3,&local_818,0);
          }
        }
        else {
          uVar4 = FUN_0004e9c4();
        }
        if (*(int *)(iVar2 + 4) != -1) {
          piVar5 = (int *)(iVar2 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            FUN_0004eb6c(iVar2);
          }
        }
      }
      free(__ptr);
      return uVar4;
    }
    if (3 < DAT_0007eb9c) {
      local_818._0_1_ = s_http_get_failed_0006152c[0];
      local_818._1_1_ = s_http_get_failed_0006152c[1];
      local_818._2_1_ = s_http_get_failed_0006152c[2];
      local_818._3_1_ = s_http_get_failed_0006152c[3];
      uStack_814._0_1_ = s_http_get_failed_0006152c[4];
      uStack_814._1_1_ = s_http_get_failed_0006152c[5];
      uStack_814._2_1_ = s_http_get_failed_0006152c[6];
      uStack_814._3_1_ = s_http_get_failed_0006152c[7];
      uStack_810._0_1_ = s_http_get_failed_0006152c[8];
      uStack_810._1_1_ = s_http_get_failed_0006152c[9];
      uStack_810._2_1_ = s_http_get_failed_0006152c[10];
      uStack_810._3_1_ = s_http_get_failed_0006152c[11];
      uStack_80c._0_1_ = s_http_get_failed_0006152c[12];
      uStack_80c._1_1_ = s_http_get_failed_0006152c[13];
      uStack_80c._2_1_ = s_http_get_failed_0006152c[14];
      uStack_80c._3_1_ = s_http_get_failed_0006152c[15];
      local_808 = CONCAT31(local_808._1_3_,(char)ram0x0006153c);
      FUN_0002e584(3,&local_818,0);
    }
  }
  else if (3 < DAT_0007eb9c) {
    local_818._0_1_ = s_get_local_ip_failed_000614fc[0];
    local_818._1_1_ = s_get_local_ip_failed_000614fc[1];
    local_818._2_1_ = s_get_local_ip_failed_000614fc[2];
    local_818._3_1_ = s_get_local_ip_failed_000614fc[3];
    uStack_814._0_1_ = s_get_local_ip_failed_000614fc[4];
    uStack_814._1_1_ = s_get_local_ip_failed_000614fc[5];
    uStack_814._2_1_ = s_get_local_ip_failed_000614fc[6];
    uStack_814._3_1_ = s_get_local_ip_failed_000614fc[7];
    uStack_810._0_1_ = s_get_local_ip_failed_000614fc[8];
    uStack_810._1_1_ = s_get_local_ip_failed_000614fc[9];
    uStack_810._2_1_ = s_get_local_ip_failed_000614fc[10];
    uStack_810._3_1_ = s_get_local_ip_failed_000614fc[11];
    uStack_80c._0_1_ = s_get_local_ip_failed_000614fc[12];
    uStack_80c._1_1_ = s_get_local_ip_failed_000614fc[13];
    uStack_80c._2_1_ = s_get_local_ip_failed_000614fc[14];
    uStack_80c._3_1_ = s_get_local_ip_failed_000614fc[15];
    local_808._0_1_ = s_get_local_ip_failed_000614fc[16];
    local_808._1_1_ = s_get_local_ip_failed_000614fc[17];
    local_808._2_1_ = s_get_local_ip_failed_000614fc[18];
    local_808._3_1_ = s_get_local_ip_failed_000614fc[19];
    local_804 = CONCAT31(local_804._1_3_,(char)ram0x00061510);
    FUN_0002e584(3,&local_818,0);
    return 0xffffffff;
  }
  return 0xffffffff;
}

