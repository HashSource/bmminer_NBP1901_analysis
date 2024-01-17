
undefined4 thunk_FUN_0005198c(uint param_1)

{
  undefined *__dest;
  undefined *puVar1;
  uint uVar2;
  
  if (param_1 < 4) {
    uVar2 = 0;
    do {
      if (param_1 == uVar2) {
        __dest = &DAT_005059e0 + param_1 * 0x20000;
        do {
          puVar1 = __dest + 0x200;
          memcpy(__dest,&DAT_0007f588,0x200);
          __dest = puVar1;
        } while (puVar1 != (undefined *)(param_1 * 0x20000 + 0x5259e0));
        memcpy(&DAT_005051c8 + param_1 * 0x200,&DAT_0007f588,0x200);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 4);
    return 0;
  }
  return 0xffffffff;
}

