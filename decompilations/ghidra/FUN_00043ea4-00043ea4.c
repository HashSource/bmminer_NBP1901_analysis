
int * FUN_00043ea4(int param_1,int *param_2)

{
  int *piVar1;
  
  do {
    piVar1 = param_2;
    param_2 = (int *)*piVar1;
  } while (param_2 != (int *)(param_1 + 4));
  return piVar1;
}

