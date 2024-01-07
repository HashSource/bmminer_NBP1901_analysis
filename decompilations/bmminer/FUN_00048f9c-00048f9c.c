
double FUN_00048f9c(int param_1)

{
  double dVar1;
  
  switch(DAT_00505184) {
  case 0x41:
  case 0x42:
    return (DAT_00049140 - (double)(longlong)param_1) / DAT_00049138;
  case 0x43:
    return (DAT_00049150 - (double)(longlong)param_1) / DAT_00049148;
  default:
    dVar1 = -1.0;
    break;
  case 0x71:
  case 0x72:
  case 0x75:
  case 0x77:
    dVar1 = (DAT_00049130 - (double)(longlong)param_1) / DAT_00049128;
    break;
  case 0x74:
  case 0x76:
    return (DAT_00049158 - (double)(longlong)param_1) / DAT_00049160;
  }
  return dVar1;
}

