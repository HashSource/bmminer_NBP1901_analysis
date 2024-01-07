
void FUN_00056b38(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    FUN_0005df98(param_2,"src/conf.c",0x2d,"-conf[%p]-",param_1);
    FUN_0005df98(param_2,"src/conf.c",0x2e,"--global--");
    iVar3 = param_1 + 0x401;
    FUN_0005df98(param_2,"src/conf.c",0x2f,"---file[%s],mtime[%s]---",param_1,iVar3);
    FUN_0005df98(param_2,"src/conf.c",0x30,"---strict init[%d]---",*(undefined4 *)(param_1 + 0x418))
    ;
    FUN_0005df98(param_2,"src/conf.c",0x31,"---buffer min[%ld]---",*(undefined4 *)(param_1 + 0x41c))
    ;
    uVar2 = *(undefined4 *)(param_1 + 0x420);
    FUN_0005df98(param_2,"src/conf.c",0x32,"---buffer max[%ld]---",uVar2);
    if (*(int *)(param_1 + 0x2430) != 0) {
      FUN_0005df98(param_2,"src/conf.c",0x34,"---default_format---",uVar2,iVar3);
      FUN_000575fc(*(undefined4 *)(param_1 + 0x2430),param_2);
    }
    FUN_0005df98(param_2,"src/conf.c",0x37,"---file perms[0%o]---",*(undefined4 *)(param_1 + 0x2434)
                );
    FUN_0005df98(param_2,"src/conf.c",0x38,"---reload conf period[%ld]---",
                 *(undefined4 *)(param_1 + 0x243c));
    FUN_0005df98(param_2,"src/conf.c",0x39,"---fsync period[%ld]---",
                 *(undefined4 *)(param_1 + 0x2438));
    FUN_0005df98(param_2,"src/conf.c",0x3b,"---rotate lock file[%s]---",param_1 + 0x424);
    if (*(int *)(param_1 + 0x1428) != 0) {
      FUN_00058638(*(int *)(param_1 + 0x1428),param_2);
    }
    if (*(int *)(param_1 + 0x2440) != 0) {
      FUN_00057a8c(*(int *)(param_1 + 0x2440),param_2);
    }
    if (*(int *)(param_1 + 0x2444) != 0) {
      FUN_0005df98(param_2,"src/conf.c",0x41,"--format list[%p]--",*(int *)(param_1 + 0x2444));
      piVar4 = *(int **)(param_1 + 0x2444);
      if (0 < piVar4[1]) {
        iVar3 = 0;
        do {
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          FUN_000575fc(*(undefined4 *)(*piVar4 + iVar1),param_2);
          piVar4 = *(int **)(param_1 + 0x2444);
        } while (iVar3 < piVar4[1]);
      }
    }
    if (*(int *)(param_1 + 0x2448) != 0) {
      FUN_0005df98(param_2,"src/conf.c",0x48,"--rule_list[%p]--",*(int *)(param_1 + 0x2448));
      piVar4 = *(int **)(param_1 + 0x2448);
      if (0 < piVar4[1]) {
        iVar3 = 0;
        do {
          iVar1 = iVar3 * 4;
          iVar3 = iVar3 + 1;
          FUN_0005a850(*(undefined4 *)(*piVar4 + iVar1),param_2);
          piVar4 = *(int **)(param_1 + 0x2448);
        } while (iVar3 < piVar4[1]);
      }
    }
    return;
  }
  FUN_0005df98(2,"src/conf.c",0x2c,"a_conf is null or 0");
  return;
}

