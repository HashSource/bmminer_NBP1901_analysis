
int FUN_0001a18c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iStack_818;
  int aiStack_814 [7];
  int aiStack_7f8 [505];
  int *piVar5;
  
  uVar1 = FUN_0001a014();
  iVar3 = DAT_00061584;
  iStack_818 = DAT_00061584;
  aiStack_814[0] = DAT_00061588;
  aiStack_814[1] = DAT_0006158c;
  aiStack_814[2] = DAT_00061590;
  aiStack_814[3] = DAT_00061594;
  aiStack_814[4] = DAT_00061598;
  aiStack_814[5] = DAT_0006159c;
  aiStack_814[6] = DAT_000615a0;
  iVar2 = FUN_0005faf8(uVar1,DAT_00061584);
  if (iVar2 == 0) {
    piVar4 = aiStack_814;
    do {
      piVar5 = piVar4 + 1;
      iVar3 = *piVar4;
      iVar2 = FUN_0005faf8(uVar1,iVar3);
      if (iVar2 != 0) goto LAB_0001a234;
      piVar4 = piVar5;
    } while (piVar5 != aiStack_7f8);
    iVar2 = FUN_0001a014();
  }
  else {
LAB_0001a234:
    DAT_0007f8dc = iVar3;
    iVar2 = FUN_0001a014();
    if (iVar3 != 0) goto LAB_0001a258;
  }
  if (DAT_0007eb9c < 5) {
    DAT_0007f8dc = iVar2;
    return iVar2;
  }
  snprintf((char *)&iStack_818,0x800,"format sale hash failed %d\n",iVar2);
  FUN_0002e584(4,&iStack_818,0);
  iVar3 = iVar2;
LAB_0001a258:
  if (DAT_0007eb9c < 5) {
    DAT_0007f8dc = iVar3;
    return iVar3;
  }
  DAT_0007f8dc = iVar3;
  snprintf((char *)&iStack_818,0x800,"sale_hash_rate = %d\n",iVar3);
  FUN_0002e584(4,&iStack_818,0);
  return DAT_0007f8dc;
}

