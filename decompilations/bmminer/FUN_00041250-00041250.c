
undefined4
FUN_00041250(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char acStack_808 [2056];
  
  switch(param_1) {
  case 0:
    uVar1 = 0x40;
    *param_2 = 0x18;
    uVar3 = 0x44;
    uVar2 = 0x45;
    break;
  case 1:
    uVar1 = 0x40;
    *param_2 = 0x10;
    uVar3 = 0x46;
    uVar2 = 0x47;
    break;
  case 2:
    uVar1 = 0x40;
    *param_2 = 8;
    uVar3 = 0x48;
    uVar2 = 0x49;
    break;
  case 3:
    *param_2 = 0;
    *param_3 = 0x40;
    *param_4 = 0x4a;
    *param_5 = 0x4b;
    return 0;
  case 4:
    uVar1 = 0x41;
    *param_2 = 0x18;
    uVar3 = 0x4c;
    uVar2 = 0x4d;
    break;
  case 5:
    uVar1 = 0x41;
    *param_2 = 0x10;
    uVar3 = 0x4e;
    uVar2 = 0x4f;
    break;
  case 6:
    uVar1 = 0x41;
    *param_2 = 8;
    uVar3 = 0x50;
    uVar2 = 0x51;
    break;
  case 7:
    *param_2 = 0;
    *param_3 = 0x41;
    *param_4 = 0x52;
    *param_5 = 0x53;
    return 0;
  case 8:
    uVar1 = 0x42;
    *param_2 = 0x18;
    uVar3 = 0x54;
    uVar2 = 0x55;
    break;
  case 9:
    uVar1 = 0x42;
    *param_2 = 0x10;
    uVar3 = 0x56;
    uVar2 = 0x57;
    break;
  case 10:
    uVar1 = 0x42;
    *param_2 = 8;
    uVar3 = 0x73;
    uVar2 = 0x74;
    break;
  case 0xb:
    *param_2 = 0;
    *param_3 = 0x42;
    *param_4 = 0x75;
    *param_5 = 0x76;
    return 0;
  case 0xc:
    uVar1 = 0x43;
    *param_2 = 0x18;
    uVar3 = 0x77;
    uVar2 = 0x78;
    break;
  case 0xd:
    uVar1 = 0x43;
    *param_2 = 0x10;
    uVar3 = 0x79;
    uVar2 = 0x7a;
    break;
  default:
    snprintf(acStack_808,0x800,"%s: The uart %d is not supported!!!\n","get_send_address_info",
             param_1);
    FUN_0002e584(0,acStack_808);
    return 0xffffffff;
  }
  *param_3 = uVar1;
  *param_4 = uVar3;
  *param_5 = uVar2;
  return 0;
}

