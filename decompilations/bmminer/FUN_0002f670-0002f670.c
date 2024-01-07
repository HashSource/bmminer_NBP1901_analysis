
void FUN_0002f670(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar2 = param_2 * 2 + 1;
  uVar6 = uVar2 & 3;
  if ((int)uVar2 < 1) {
    uVar6 = -(-uVar2 & 3);
  }
  pcVar3 = (char *)FUN_0002f490((4 - uVar6) + uVar2,1,"util.c",DAT_0002f720,0x315);
  if (0 < param_2) {
    pbVar5 = (byte *)(param_1 + -1);
    pbVar4 = pbVar5 + param_2;
    pcVar1 = pcVar3;
    do {
      pbVar5 = pbVar5 + 1;
      *pcVar1 = "0123456789abcdefbin2hex"[*pbVar5 >> 4];
      pcVar1[1] = "0123456789abcdefbin2hex"[*pbVar5 & 0xf];
      pcVar1 = pcVar1 + 2;
    } while (pbVar5 != pbVar4);
    pcVar3 = pcVar3 + param_2 * 2;
  }
  *pcVar3 = '\0';
  return;
}

