
int FUN_0001f080(uint param_1,uint param_2)

{
  byte local_8;
  byte local_7;
  
  local_8 = (byte)param_1;
  local_7 = (byte)(param_1 >> 8);
  return (int)(((25.0 / (float)(longlong)(int)(param_1 >> 0x10 & 0xff)) *
               (float)(longlong)(int)(param_2 & 0xffff)) /
              (float)(longlong)
                     (int)((param_2 >> 0x10 & 0xff) *
                          (int)(short)(ushort)local_8 * (int)(short)(ushort)local_7));
}

