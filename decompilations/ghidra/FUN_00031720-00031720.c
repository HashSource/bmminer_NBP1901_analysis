
void FUN_00031720(uint *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  char acStack_828 [2052];
  
  if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 5)) {
    if (DAT_0007eba0 < 5) goto LAB_000317c8;
  }
  else {
    memcpy(acStack_828,"==========================capability start==========================\n",0x46
          );
    FUN_0002e584(5,acStack_828,0);
    if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 5)) goto LAB_000317c8;
  }
  snprintf(acStack_828,0x800,"board num = %d\n",*param_1);
  FUN_0002e584(5,acStack_828,0);
LAB_000317c8:
  cVar3 = DAT_00590404;
  if (*param_1 != 0) {
    uVar6 = 0;
    puVar5 = param_1;
    do {
      if (((cVar3 != '\0') || (DAT_00482a5c != '\0')) || (cVar3 = DAT_00482a5c, 4 < DAT_0007eba0)) {
        snprintf(acStack_828,0x800,"board id = %d, chain num = %d\n",puVar5[1],puVar5[2]);
        FUN_0002e584(5,acStack_828,0);
        cVar3 = DAT_00590404;
      }
      uVar2 = puVar5[2];
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          if (cVar3 == '\0') {
            while ((DAT_00482a5c == '\0' && (DAT_0007eba0 < 5))) {
              uVar4 = uVar4 + 1;
              cVar3 = DAT_00482a5c;
              if (uVar2 <= uVar4) goto LAB_00031854;
            }
          }
          iVar1 = uVar4 + 3;
          uVar4 = uVar4 + 1;
          snprintf(acStack_828,0x800,"\tchain id = %d\n",puVar5[iVar1]);
          FUN_0002e584(5,acStack_828,0);
          uVar2 = puVar5[2];
          cVar3 = DAT_00590404;
        } while (uVar4 < uVar2);
      }
LAB_00031854:
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 0x12;
    } while (uVar6 < *param_1);
  }
  if (((cVar3 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
    memcpy(acStack_828,"==========================capability end============================\n",0x46
          );
    FUN_0002e584(5,acStack_828,0);
  }
  return;
}

