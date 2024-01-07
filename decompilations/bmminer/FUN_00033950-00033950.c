
/* WARNING: Removing unreachable block (ram,0x0001eaac) */

void FUN_00033950(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar2 = FUN_0003388c();
  uVar2 = uVar2 & 0xffffff;
  FUN_0001e970();
  FUN_000304d4(200);
  FUN_0001ed08();
  FUN_000304d4(10);
  FUN_0001ef94(0xff,uVar2 & 0xff);
  uVar4 = (undefined2)(uVar2 >> 0x10);
  FUN_000304d4(10);
  FUN_0001efe0(0xff,(char)uVar4,(char)((ushort)uVar4 >> 8),0);
  FUN_000304d4(10);
  FUN_0001ead4(0xff);
  FUN_000304d4(10);
  FUN_0001ea18(0xff,0,1,3);
  uVar2 = 0;
  do {
    while( true ) {
      uVar3 = uVar2 + 1;
      iVar1 = FUN_0001e29c(uVar2);
      if (iVar1 != 0) break;
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    FUN_000513fc(uVar2 & 0xff);
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

