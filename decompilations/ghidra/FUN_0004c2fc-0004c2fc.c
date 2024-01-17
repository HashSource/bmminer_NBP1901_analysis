
void FUN_0004c2fc(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 + 2 < 2) {
    return;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  if (param_2 == 10) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    iVar1 = FUN_0004de1c(param_2 & 0xff);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    if (*(byte *)(param_1 + iVar1 + 8) == param_2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("stream->buffer[stream->buffer_pos] == c","load.c",0xf0,DAT_0004c3b4);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("stream->buffer_pos > 0","load.c",0xee,DAT_0004c3b4);
}

