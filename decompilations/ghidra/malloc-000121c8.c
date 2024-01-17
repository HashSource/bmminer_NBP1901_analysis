
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000121d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR_LAB_0007e118)();
  return pvVar1;
}

