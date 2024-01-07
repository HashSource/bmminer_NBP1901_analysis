
undefined4 FUN_00048d38(void)

{
  double in_d0;
  undefined4 local_4;
  
  switch(DAT_00505184) {
  case 0x41:
  case 0x42:
    return (int)(longlong)(DAT_00048ed8 - in_d0 * DAT_00048ed0);
  case 0x43:
    return (int)(longlong)(DAT_00048ee8 - in_d0 * DAT_00048ee0);
  default:
    local_4 = 0xffffffff;
    break;
  case 0x71:
  case 0x72:
  case 0x75:
  case 0x77:
    local_4 = (undefined4)(longlong)(DAT_00048ec8 - in_d0 * DAT_00048ec0);
    break;
  case 0x74:
  case 0x76:
    return (int)(longlong)(DAT_00048ef8 - in_d0 * DAT_00048ef0);
  }
  return local_4;
}

