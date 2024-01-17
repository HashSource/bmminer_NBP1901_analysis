
undefined4 FUN_0005a0d4(int param_1,int param_2)

{
  undefined *puVar1;
  ssize_t sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void *__buf;
  int unaff_r4;
  undefined4 uVar7;
  
  piVar6 = *(int **)(param_1 + 0x1434);
  iVar4 = piVar6[1];
  puVar1 = (undefined *)**(undefined4 **)(param_2 + 0x10);
  if (0 < iVar4) {
    unaff_r4 = 0;
  }
  (*(undefined4 **)(param_2 + 0x10))[1] = puVar1;
  if (0 < iVar4) {
    do {
      iVar4 = *(int *)(*piVar6 + unaff_r4 * 4);
      unaff_r4 = unaff_r4 + 1;
      iVar4 = (**(code **)(iVar4 + 0x242c))(iVar4,param_2);
      if (iVar4 != 0) {
        FUN_0005df98(2,"src/rule.c",0xf5,"zlog_spec_gen_path fail");
        return 0xffffffff;
      }
      piVar6 = *(int **)(param_1 + 0x1434);
    } while (unaff_r4 < piVar6[1]);
    puVar1 = *(undefined **)(*(int *)(param_2 + 0x10) + 4);
  }
  *puVar1 = 0;
  iVar4 = FUN_00057a1c(*(undefined4 *)(param_1 + 0x1878),param_2);
  if (iVar4 == 0) {
    iVar4 = open64(**(char ***)(param_2 + 0x10),*(uint *)(param_1 + 0x102c) | 0x441,
                   *(undefined4 *)(param_1 + 0x1028));
    if (iVar4 < 0) {
      piVar6 = __errno_location();
      uVar7 = 0xffffffff;
      FUN_0005df98(2,"src/rule.c",0xff,"open file[%s] fail, errno[%d]",
                   **(undefined4 **)(param_2 + 0x10),*piVar6);
    }
    else {
      __buf = **(void ***)(param_2 + 0x1c);
      sVar2 = write(iVar4,__buf,(int)(*(void ***)(param_2 + 0x1c))[1] - (int)__buf);
      if (sVar2 < 0) {
        piVar6 = __errno_location();
        FUN_0005df98(2,"src/rule.c",0x104,"write fail, errno[%d]",*piVar6);
        uVar7 = 0xffffffff;
        close(iVar4);
      }
      else {
        if (*(uint *)(param_1 + 0x1868) != 0) {
          uVar5 = *(int *)(param_1 + 0x186c) + 1;
          if (uVar5 < *(uint *)(param_1 + 0x1868)) {
            *(uint *)(param_1 + 0x186c) = uVar5;
          }
          else {
            *(undefined4 *)(param_1 + 0x186c) = 0;
            iVar3 = fsync(iVar4);
            if (iVar3 != 0) {
              piVar6 = __errno_location();
              FUN_0005df98(2,"src/rule.c",0x10b,"fsync[%d] fail, errno[%d]",iVar4,*piVar6);
            }
          }
        }
        iVar4 = close(iVar4);
        uVar7 = 0;
        if (iVar4 < 0) {
          piVar6 = __errno_location();
          uVar7 = 0xffffffff;
          FUN_0005df98(2,"src/rule.c",0x10f,"close fail, maybe cause by write, errno[%d]",*piVar6);
        }
      }
    }
  }
  else {
    FUN_0005df98(2,"src/rule.c",0xf8,"zlog_format_output fail");
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

