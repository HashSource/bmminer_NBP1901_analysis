
undefined4 FUN_0004a590(uint param_1,int param_2,code *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint local_3c;
  char acStack_38 [20];
  
  local_3c = 0;
  iVar1 = (*param_3)("\"",1,param_4);
  if (iVar1 == 0) {
    uVar5 = param_1;
    uVar2 = param_1;
    do {
      do {
        uVar6 = uVar2;
        if (param_1 + param_2 <= uVar6) {
          if ((uVar5 != uVar6) && (iVar1 = (*param_3)(uVar5,uVar6 - uVar5,param_4), iVar1 != 0)) {
            return 0xffffffff;
          }
LAB_0004a7fc:
          uVar4 = (*param_3)("\"",1,param_4);
          return uVar4;
        }
        uVar2 = FUN_0004df70(uVar6,(param_1 + param_2) - uVar6,&local_3c);
        if (uVar2 == 0) {
          return 0xffffffff;
        }
      } while (((0x1f < (int)local_3c && (local_3c != 0x22 && local_3c != 0x5c)) &&
               (((uint)(local_3c == 0x2f) & param_5 >> 10) == 0)) &&
              (((uint)(0x7f < (int)local_3c) & param_5 >> 6) == 0));
      if ((uVar5 != uVar6) && (iVar1 = (*param_3)(uVar5,uVar6 - uVar5,param_4), iVar1 != 0)) {
        return 0xffffffff;
      }
      if (uVar6 == uVar2) goto LAB_0004a7fc;
      if (local_3c == 0xc) {
        uVar4 = 2;
        pcVar3 = "\\f";
      }
      else if ((int)local_3c < 0xd) {
        if (local_3c == 9) {
          uVar4 = 2;
          pcVar3 = "\\t";
        }
        else if (local_3c == 10) {
          uVar4 = 2;
          pcVar3 = "\\n";
        }
        else if (local_3c == 8) {
          uVar4 = 2;
          pcVar3 = "\\b";
        }
        else {
LAB_0004a6f4:
          if ((int)local_3c < 0x10000) goto LAB_0004a6fc;
LAB_0004a734:
          local_3c = local_3c - 0x10000;
          snprintf(acStack_38,0xd,"\\u%04X\\u%04X",local_3c * 0x1000 >> 0x16 | 0xd800,
                   local_3c & 0x3ff | 0xdc00);
          uVar4 = 0xc;
          pcVar3 = acStack_38;
        }
      }
      else if (local_3c == 0x22) {
        uVar4 = 2;
        pcVar3 = "\\\"";
      }
      else if ((int)local_3c < 0x23) {
        if (local_3c == 0xd) {
          uVar4 = 2;
          pcVar3 = "\\r";
        }
        else {
          if (0xffff < (int)local_3c) goto LAB_0004a734;
LAB_0004a6fc:
          snprintf(acStack_38,0xd,"\\u%04X");
          uVar4 = 6;
          pcVar3 = acStack_38;
        }
      }
      else if (local_3c == 0x2f) {
        uVar4 = 2;
        pcVar3 = "\\/";
      }
      else {
        if (local_3c != 0x5c) goto LAB_0004a6f4;
        uVar4 = 2;
        pcVar3 = "\\\\";
      }
      iVar1 = (*param_3)(pcVar3,uVar4,param_4);
      uVar5 = uVar2;
    } while (iVar1 == 0);
  }
  return 0xffffffff;
}

