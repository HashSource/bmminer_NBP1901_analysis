
int FUN_0002b800(undefined4 *param_1)

{
  int iVar1;
  size_t sVar2;
  char acStack_808 [2056];
  
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
    sVar2 = strlen((char *)param_1[2]);
    return sVar2 + 1;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x10:
  case 0x13:
  case 0x16:
  case 0x1a:
    return 4;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
    iVar1 = 8;
    break;
  case 0xe:
    return 1;
  default:
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_808,0x800,"Should not happen for unknown data type %d");
      FUN_0002e584(3,acStack_808,0);
      return 0;
    }
    iVar1 = 0;
  }
  return iVar1;
}

