
int FUN_000258c8(char *param_1)

{
  int __fd;
  int iVar1;
  int iVar2;
  char *__src;
  undefined *puVar3;
  uint uVar4;
  bool bVar5;
  uint local_228;
  undefined *puStack_224;
  undefined auStack_220 [512];
  
  __fd = socket(2,2,0);
  if (__fd < 0) {
    iVar1 = -1;
  }
  else {
    local_228 = 0x200;
    puStack_224 = auStack_220;
    iVar1 = ioctl(__fd,0x8912,&local_228);
    if (iVar1 == 0) {
      iVar1 = -1;
      uVar4 = local_228 >> 5;
      puVar3 = auStack_220 + (uVar4 - 1) * 0x20;
      while (bVar5 = uVar4 != 0, uVar4 = uVar4 - 1, bVar5) {
        iVar2 = ioctl(__fd,0x8915,puVar3);
        if ((iVar2 == 0) &&
           (__src = inet_ntoa((in_addr)*(in_addr_t *)(puVar3 + 0x14)), __src != (char *)0x0)) {
          strcpy(param_1,__src);
          iVar1 = strcmp("127.0.0.1",param_1);
          if (iVar1 != 0) {
            iVar1 = 0;
            break;
          }
        }
        puVar3 = puVar3 + -0x20;
      }
    }
    else {
      iVar1 = -1;
    }
    close(__fd);
  }
  return iVar1;
}

