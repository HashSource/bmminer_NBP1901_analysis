
uint FUN_00041474(undefined4 param_1)

{
  uint local_80c;
  char acStack_808 [2056];
  
  local_80c = 0;
  switch(param_1) {
  case 0:
    FUN_00040314(0x58,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 1:
    FUN_00040314(0x58,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 2:
    FUN_00040314(0x59,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 3:
    FUN_00040314(0x59,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 4:
    FUN_00040314(0x5a,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 5:
    FUN_00040314(0x5a,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 6:
    FUN_00040314(0x5b,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 7:
    FUN_00040314(0x5b,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 8:
    FUN_00040314(0x5c,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 9:
    FUN_00040314(0x5c,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 10:
    FUN_00040314(0x5d,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 0xb:
    FUN_00040314(0x5d,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  case 0xc:
    FUN_00040314(0x5e,&local_80c);
    local_80c = (local_80c << 6) >> 0x16;
    break;
  case 0xd:
    FUN_00040314(0x5e,&local_80c);
    local_80c = local_80c & 0x3ff;
    break;
  default:
    snprintf(acStack_808,0x800,"%s: The uart%d is not supported!!!\n",DAT_00041658,param_1);
    FUN_0002e584(0,acStack_808);
    local_80c = 0;
  }
  return local_80c;
}

