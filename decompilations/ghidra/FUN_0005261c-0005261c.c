
undefined4 FUN_0005261c(int param_1,int param_2)

{
  void *pvVar1;
  in_addr_t iVar2;
  int __fd;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *__src;
  void *pvVar8;
  uint uVar9;
  undefined4 local_470;
  socklen_t local_46c;
  pthread_t pStack_468;
  sockaddr local_464;
  sockaddr sStack_454;
  pthread_attr_t pStack_444;
  undefined4 local_420;
  undefined auStack_41c [124];
  undefined4 local_3a0;
  undefined auStack_39c [124];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined auStack_310 [240];
  undefined4 local_220;
  undefined auStack_21c [512];
  
  if (DAT_005859e8 == 0) {
    pthread_attr_init(&pStack_444);
    pthread_attr_setstacksize(&pStack_444,0x100000);
    pthread_mutex_init((pthread_mutex_t *)&DAT_005859ec,(pthread_mutexattr_t *)0x0);
    DAT_005859e4 = param_2;
    if (param_2 != 0) {
      pvVar7 = DAT_0005292c;
      __src = (void *)(param_1 + 4);
      do {
        pvVar1 = memcpy(pvVar7,__src,0x80);
        pvVar8 = (void *)((int)__src + 0x88);
        uVar6 = *(undefined4 *)((int)__src + -4);
        pvVar7 = (void *)((int)pvVar1 + 0x88);
        *(undefined4 *)((int)pvVar1 + 0x80) = *(undefined4 *)((int)__src + 0x80);
        *(undefined4 *)((int)pvVar1 + -4) = uVar6;
        __src = pvVar8;
      } while ((int)pvVar8 + (param_2 * -0x88 - (int)(void *)(param_1 + 4)) != 0);
    }
    local_464.sa_data[4] = '\0';
    local_464.sa_data[5] = '\0';
    local_464.sa_data[6] = '\0';
    local_464.sa_data[7] = '\0';
    local_464.sa_data[8] = '\0';
    local_464.sa_data[9] = '\0';
    local_464.sa_data[10] = '\0';
    local_464.sa_data[11] = '\0';
    local_464.sa_data[12] = '\0';
    local_464.sa_data[13] = '\0';
    local_464.sa_data[0] = '\0';
    local_464.sa_data[1] = '\0';
    local_464.sa_data[2] = '\0';
    local_464.sa_data[3] = '\0';
    local_464.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_464.sa_data._2_2_ = (undefined2)iVar2;
    local_464.sa_data._4_2_ = (undefined2)(iVar2 >> 0x10);
    local_470 = 1;
    __fd = socket(2,1,0);
    if (__fd < 0) {
      uVar6 = 0xfffffffc;
      perror("socket error");
    }
    else {
      iVar3 = setsockopt(__fd,1,2,&local_470,4);
      if (iVar3 < 0) {
        uVar6 = 0xfffffffc;
        perror("set sockopt err");
      }
      else {
        uVar9 = 0x560a;
        while( true ) {
          local_464.sa_data._0_2_ = (ushort)((uVar9 & 0xff) << 8) | (ushort)(uVar9 >> 8) & 0xff;
          uVar9 = uVar9 + 1;
          iVar3 = bind(__fd,&local_464,0x10);
          if (-1 < iVar3) break;
          perror("bind error");
        }
        iVar3 = listen(__fd,5);
        if (iVar3 < 0) {
          uVar6 = 0xfffffffc;
          perror("listen error");
        }
        else {
          local_46c = 0x10;
          iVar3 = accept(__fd,&sStack_454,&local_46c);
          if (iVar3 < 0) {
            uVar6 = 0xfffffffc;
            perror("accept error");
          }
          else {
            local_420 = 0;
            memset(auStack_41c,0,0x7c);
            sprintf((char *)&local_420,"Hello!0x%x\n",0x3f);
            sVar4 = strlen((char *)&local_420);
            send(iVar3,&local_420,sVar4 + 1,0);
            DAT_005859e8 = 1;
            local_220 = 0;
            DAT_00585a04 = iVar3;
            memset(auStack_21c,0,0x1fc);
            sVar5 = recv(iVar3,&local_220,0x400,0);
            if (0 < sVar5) {
              auStack_21c[sVar5 + -4] = 0;
            }
            uStack_320 = DAT_0006ad78;
            uStack_31c = DAT_0006ad7c;
            uStack_318 = DAT_0006ad80;
            uStack_314 = DAT_0006ad84;
            memset(auStack_310,0,0xf0);
            send(iVar3,&uStack_320,0x10,0);
            local_3a0 = 0;
            memset(auStack_39c,0,0x7c);
            sVar5 = recv(iVar3,&local_3a0,0x80,0);
            if (0 < sVar5) {
              auStack_39c[sVar5 + -4] = 0;
            }
            pvVar7 = malloc(0xc);
            *(int *)((int)pvVar7 + 8) = iVar3;
            *(int *)((int)pvVar7 + 4) = __fd;
            pthread_create(&pStack_468,&pStack_444,FUN_000522dc,pvVar7);
            uVar6 = 0;
          }
        }
      }
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

