
int * FUN_00058008(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)calloc(1,4);
  if (piVar1 == (int *)0x0) {
    piVar3 = __errno_location();
    FUN_0005df98(2,"src/mdc.c",0x45,"calloc fail, errno[%d]",*piVar3);
  }
  else {
    iVar2 = FUN_0005d7b8(0x14,&LAB_0005df18,FUN_0005df44,0,FUN_00057e98);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_0005df98(2,"src/mdc.c",0x4e,"zc_hashtable_new fail");
      FUN_00057f94(piVar1);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

