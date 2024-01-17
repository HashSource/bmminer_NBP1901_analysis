
long FUN_0005e140(byte *param_1)

{
  ushort **ppuVar1;
  size_t sVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 == (byte *)0x0) {
    FUN_0005df98(2,"src/zc_util.c",0x1b,"astring is null or 0");
    return 0;
  }
  uVar8 = (uint)*param_1;
  pbVar5 = param_1;
  if (uVar8 != 0) {
    ppuVar1 = __ctype_b_loc();
    pbVar4 = param_1;
    pbVar6 = param_1;
    do {
      pbVar5 = pbVar4;
      if (((*ppuVar1)[uVar8] & 0x2000) == 0) {
        pbVar5 = pbVar4 + 1;
        *pbVar4 = (byte)uVar8;
      }
      pbVar6 = pbVar6 + 1;
      uVar8 = (uint)*pbVar6;
      pbVar4 = pbVar5;
    } while (uVar8 != 0);
  }
  *pbVar5 = 0;
  sVar2 = strlen((char *)param_1);
  lVar3 = strtol((char *)param_1,(char **)0x0,10);
  if (lVar3 < 1) {
    lVar3 = 0;
  }
  else {
    uVar8 = (uint)param_1[sVar2 - 1];
    if ((uVar8 & 0xdf) == 0x42) {
      uVar8 = (uint)param_1[sVar2 - 2];
      iVar7 = 0x400;
    }
    else {
      iVar7 = 1000;
    }
    switch(uVar8) {
    case 0x47:
    case 0x67:
      lVar3 = iVar7 * iVar7 * iVar7 * lVar3;
      break;
    default:
      ppuVar1 = __ctype_b_loc();
      if (((*ppuVar1)[uVar8] & 0x800) == 0) {
        FUN_0005df98(2,"src/zc_util.c",0x46,
                     "Wrong suffix parsing size in bytes for string [%s], ignoring suffix",param_1);
      }
      break;
    case 0x4d:
    case 0x6d:
      iVar7 = iVar7 * iVar7;
    case 0x4b:
    case 0x6b:
      lVar3 = iVar7 * lVar3;
    }
  }
  return lVar3;
}

