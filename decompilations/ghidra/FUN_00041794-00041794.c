
uint FUN_00041794(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_824;
  char acStack_820 [2052];
  
  local_824 = 0;
  switch(param_1) {
  case 0:
    uVar8 = 0x60;
    uVar3 = 0x5f;
    break;
  case 1:
    uVar8 = 0x62;
    uVar3 = 0x61;
    break;
  case 2:
    uVar8 = 100;
    uVar3 = 99;
    break;
  case 3:
    uVar8 = 0x66;
    uVar3 = 0x65;
    break;
  case 4:
    uVar8 = 0x68;
    uVar3 = 0x67;
    break;
  case 5:
    uVar8 = 0x6a;
    uVar3 = 0x69;
    break;
  case 6:
    uVar8 = 0x6c;
    uVar3 = 0x6b;
    break;
  case 7:
    uVar8 = 0x6e;
    uVar3 = 0x6d;
    break;
  case 8:
    uVar8 = 0x70;
    uVar3 = 0x6f;
    break;
  case 9:
    uVar8 = 0x72;
    uVar3 = 0x71;
    break;
  case 10:
    uVar8 = 0x7c;
    uVar3 = 0x7b;
    break;
  case 0xb:
    uVar8 = 0x7e;
    uVar3 = 0x7d;
    break;
  case 0xc:
    uVar8 = 0x80;
    uVar3 = 0x7f;
    break;
  case 0xd:
    uVar8 = 0x82;
    uVar3 = 0x81;
    break;
  default:
    snprintf(acStack_820,0x800,"%s: The uart%d is not supported!!!\n",DAT_000419d4,param_1);
    FUN_0002e584(0,acStack_820,0);
    snprintf(acStack_820,0x800,"get_read_address_info error, chain_id = %d\n",param_1);
    FUN_0002e584(0,acStack_820,0);
    return 0;
  }
  FUN_00040390(uVar3,param_3 & 0x3ff | 0x80000000);
  if (param_3 >> 2 != 0) {
    puVar4 = param_2;
    do {
      puVar5 = puVar4 + 4;
      FUN_00040314(uVar8,&local_824);
      puVar4[3] = (char)local_824;
      *puVar4 = (char)((uint)local_824 >> 0x18);
      puVar4[1] = (char)((uint)local_824 >> 0x10);
      puVar4[2] = (char)((uint)local_824 >> 8);
      puVar4 = puVar5;
    } while (param_2 + (param_3 & 0xfffffffc) != puVar5);
  }
  uVar6 = param_3 & 3;
  uVar7 = param_3 & 0xfffffffc;
  if (uVar6 != 0) {
    FUN_00040314(uVar8,&local_824);
    uVar1 = param_3 & 0xfffffffc;
    uVar2 = (undefined)((uint)local_824 >> 0x10);
    if (uVar6 == 2) {
      uVar7 = uVar7 + 2;
      param_2[param_3 & 0xfffffffc] = local_824._3_1_;
      param_2[uVar1 + 1] = uVar2;
    }
    else if (uVar6 == 3) {
      uVar7 = uVar7 + 3;
      param_2[param_3 & 0xfffffffc] = local_824._3_1_;
      param_2[uVar1 + 1] = uVar2;
      param_2[uVar1 + 2] = (char)((uint)local_824 >> 8);
    }
    else {
      uVar7 = uVar7 + 1;
      param_2[param_3 & 0xfffffffc] = local_824._3_1_;
    }
  }
  return uVar7;
}

