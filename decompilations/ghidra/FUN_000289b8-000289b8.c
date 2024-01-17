
char * FUN_000289b8(undefined4 param_1,int param_2)

{
  char *__s;
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char acStack_828 [2052];
  
  if ((param_2 != 0) && (DAT_00080b90 == 0)) {
    DAT_00080b90 = 1;
  }
  if (DAT_0007e61c != 0x10) {
    uVar9 = DAT_0007e61c & 8;
    piVar3 = &DAT_0007e618;
    do {
      if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!(opt->type & OPT_SUBTABLE)","bmminer.c",0x2de,DAT_00028d3c);
      }
      if (*piVar3 == 0) {
        uVar9 = piVar3[8];
      }
      else {
        __s = (char *)__strdup();
        pcVar1 = strtok(__s,"|");
        while (pcVar1 != (char *)0x0) {
          if ((pcVar1[1] == '-') &&
             (piVar2 = (int *)FUN_0004e234(param_1,pcVar1 + 2), piVar2 != (int *)0x0)) {
            iVar7 = *piVar2;
            if ((piVar3[1] & 6U) == 0) {
LAB_00028ac4:
              if (iVar7 - 5U < 2) {
                if ((piVar3[1] & 1U) == 0) {
                  if (iVar7 == 5) {
                    FUN_0003d2f0(piVar3[5]);
                  }
                  else {
                    FUN_0003d300();
                  }
                  goto LAB_00028a70;
                }
                pcVar8 = (char *)(*(code *)piVar3[2])();
                goto LAB_00028bb4;
              }
              pcVar8 = "Invalid value";
            }
            else {
              if (iVar7 != 2) {
                if (iVar7 == 1) {
                  uVar9 = 0;
                  iVar7 = FUN_0004e5a0(piVar2);
                  if (iVar7 != 0) {
                    do {
                      piVar5 = (int *)FUN_0004e5bc(piVar2,uVar9);
                      if (piVar5 == (int *)0x0) break;
                      if (*piVar5 == 2) {
                        uVar4 = FUN_0004e768();
                        pcVar8 = (char *)(*(code *)piVar3[3])(uVar4,piVar3[5]);
                        if (piVar3[1] == 4) {
                          FUN_0003d3d4(uVar4,piVar3[5]);
                        }
LAB_00028cdc:
                        if (pcVar8 != (char *)0x0) goto joined_r0x00028ae0;
                      }
                      else if (*piVar5 == 0) {
                        pcVar8 = (char *)FUN_000289b8();
                        goto LAB_00028cdc;
                      }
                      uVar9 = uVar9 + 1;
                      uVar6 = FUN_0004e5a0(piVar2);
                    } while (uVar9 < uVar6);
                  }
                  goto LAB_00028a70;
                }
                goto LAB_00028ac4;
              }
              uVar4 = FUN_0004e768();
              pcVar8 = (char *)(*(code *)piVar3[3])(uVar4,piVar3[5]);
              if (piVar3[1] == 4) {
                FUN_0003d3d4(uVar4,piVar3[5]);
              }
LAB_00028bb4:
              if (pcVar8 == (char *)0x0) goto LAB_00028a70;
            }
joined_r0x00028ae0:
            if (param_2 == 0) {
              snprintf(DAT_00028d38,200,"Parsing JSON option %s: %s",pcVar1,pcVar8);
              return DAT_00028d38;
            }
            if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
              snprintf(acStack_828,0x800,"Invalid config option %s: %s",pcVar1,pcVar8);
              FUN_0002e584(3,acStack_828,0);
            }
            DAT_00080b90 = -1;
          }
LAB_00028a70:
          pcVar1 = strtok((char *)0x0,"|");
        }
        free(__s);
        uVar9 = piVar3[8];
      }
      if (uVar9 == 0x10) break;
      uVar9 = uVar9 & 8;
      piVar3 = piVar3 + 7;
    } while( true );
  }
  piVar3 = (int *)FUN_0004e234(param_1,"include");
  if ((piVar3 != (int *)0x0) && (*piVar3 == 2)) {
    uVar4 = FUN_0004e768();
    pcVar1 = (char *)FUN_000288c4(uVar4,0);
    return pcVar1;
  }
  return (char *)0x0;
}

