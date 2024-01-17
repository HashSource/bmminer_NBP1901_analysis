
void FUN_000356c4(undefined4 param_1,undefined4 param_2)

{
  char acStack_808 [2056];
  
  switch(param_1) {
  case 0:
    snprintf((char *)&DAT_004fcae8,0x40,"J%d:1",param_2);
    break;
  case 1:
    snprintf((char *)&DAT_004fcae8,0x40,"J%d:2",param_2);
    break;
  case 2:
    snprintf((char *)&DAT_004fcae8,0x40,"J%d:8",param_2);
    break;
  case 3:
    snprintf((char *)&DAT_004fcae8,0x40,"J%d:4",param_2);
    break;
  case 4:
    snprintf((char *)&DAT_004fcae8,0x40,"J%d:5",param_2);
    break;
  case 5:
    DAT_004fcae8 = &DAT_00313a52;
    break;
  case 6:
    DAT_004fcae8 = &DAT_00323a52;
    break;
  case 7:
    snprintf((char *)&DAT_004fcae8,0x40,"T:%d",param_2);
    break;
  case 8:
    DAT_004fcae8 = &DAT_00313a50;
    break;
  case 9:
    DAT_004fcae8 = &DAT_00323a50;
    break;
  case 10:
    DAT_004fcae8 = &DAT_00313a46;
    break;
  case 0xb:
    snprintf((char *)&DAT_004fcae8,0x40,"J%d:6",param_2);
    break;
  case 0xc:
    DAT_004fcae8 = &DAT_00313a56;
    break;
  case 0xd:
    DAT_004fcae8 = &DAT_00313a4d;
    break;
  case 0xe:
    DAT_004fcae8 = &DAT_00313a4e;
    break;
  case 0xf:
    DAT_004fcae8 = &DAT_00343a50;
    break;
  default:
    DAT_004fcae8 = (undefined *)s_sensor__d___chain__d_manufacture_0006075c._36_4_;
    DAT_004fcaec = s_sensor__d___chain__d_manufacture_0006075c._40_4_;
    break;
  case 0x11:
    DAT_004fcae8 = &DAT_00333a52;
    break;
  case 0x12:
    DAT_004fcae8 = &DAT_00313a43;
    break;
  case 0x13:
    DAT_004fcae8 = &DAT_00323a4e;
    break;
  case 0x14:
    DAT_004fcae8 = &DAT_00303a53;
    break;
  case 0x15:
    DAT_004fcae8 = &DAT_00333a4e;
    break;
  case 0x16:
    DAT_004fcae8 = &DAT_00353a50;
  }
  FUN_00036558(1);
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_808,0x800,"Sweep error string = %s.\n",&DAT_004fcae8);
    FUN_0002e584(3,acStack_808,0);
  }
  return;
}

