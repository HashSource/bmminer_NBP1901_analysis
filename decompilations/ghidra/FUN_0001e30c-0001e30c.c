
int FUN_0001e30c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < DAT_0058e004) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 8;
      iVar3 = iVar3 + 1;
      if (*(char *)(DAT_0058e020 + iVar1) != '\0') {
        iVar2 = iVar2 + 1;
      }
    } while (iVar3 != DAT_0058e004);
    return iVar2;
  }
  return 0;
}

