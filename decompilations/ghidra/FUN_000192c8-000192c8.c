
double FUN_000192c8(uint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  int local_83c;
  undefined4 local_838;
  undefined4 local_834;
  char acStack_830 [2048];
  
  local_838 = 0;
  local_834 = 0;
  local_83c = 0;
  cVar4 = FUN_00047158(param_1 & 0xff,&local_83c,1);
  dVar3 = DAT_000193e8;
  dVar2 = DAT_000193e0;
  dVar1 = DAT_000193d8;
  dVar5 = DAT_000193f0;
  if ((cVar4 != '\0') &&
     (dVar5 = (double)(longlong)local_83c * DAT_000193d8 * DAT_000193e0 * DAT_000193e8,
     5 < DAT_0007eb9c)) {
    snprintf(acStack_830,0x800,"an0 = %f.\n");
    FUN_0002e584(5,acStack_830,0);
    dVar5 = (double)(longlong)local_83c * dVar1 * dVar2 * dVar3;
  }
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_830,0x800,"chain = %d, voltage = %f\n",param_1,dVar5);
    FUN_0002e584(4,acStack_830,0);
  }
  return dVar5;
}

