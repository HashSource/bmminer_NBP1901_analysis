
char ** FUN_0005c758(char *param_1,char **param_2,char **param_3)

{
  char cVar1;
  undefined2 uVar2;
  char **ppcVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int local_2c;
  char *local_28;
  char *local_24;
  
  local_2c = 0;
  if (param_1 == (char *)0x0) {
    FUN_0005df98(2,"src/spec.c",0x1dc,"pattern_start is null or 0");
    return (char **)0x0;
  }
  if (param_2 == (char **)0x0) {
    FUN_0005df98(2,"src/spec.c",0x1dd,"pattern_next is null or 0");
    return (char **)0x0;
  }
  ppcVar3 = (char **)calloc(1,0x2434);
  if (ppcVar3 == (char **)0x0) {
    piVar6 = __errno_location();
    FUN_0005df98(2,"src/spec.c",0x1e1,"calloc fail, errno[%d]",*piVar6);
    return (char **)0x0;
  }
  cVar1 = *param_1;
  *ppcVar3 = param_1;
  if (cVar1 == '%') {
    pcVar4 = (char *)((int)ppcVar3 + 0x1411);
    local_2c = 0;
    iVar5 = __isoc99_sscanf(param_1,"%%%[.0-9-]%n",pcVar4,&local_2c);
    if (iVar5 == 1) {
      ppcVar3[0x90a] = &LAB_0005c5a0;
      ppcVar3[0x90b] = &LAB_0005c510;
      ppcVar3[0x90c] = &LAB_0005c480;
      if (*(char *)((int)ppcVar3 + 0x1411) == '-') {
        ppcVar3[0x905] = (char *)0x1;
        pcVar4 = (char *)((int)ppcVar3 + 0x1412);
      }
      else {
        if (*(char *)((int)ppcVar3 + 0x1411) == '0') {
          ppcVar3[0x906] = (char *)0x1;
        }
        ppcVar3[0x905] = (char *)0x0;
      }
      local_28 = (char *)0x0;
      local_24 = (char *)0x0;
      __isoc99_sscanf(pcVar4,&DAT_0006d388);
      pcVar4 = strchr(pcVar4,0x2e);
      if (pcVar4 != (char *)0x0) {
        __isoc99_sscanf(pcVar4,&DAT_0006d390,&local_24);
      }
      ppcVar3[0x908] = local_28;
      ppcVar3[0x907] = local_24;
    }
    else {
      ppcVar3[0x90a] = &LAB_0005bd24;
      ppcVar3[0x90b] = &LAB_0005bd34;
      ppcVar3[0x90c] = &LAB_0005bd44;
      local_2c = 1;
    }
    pcVar4 = param_1 + local_2c;
    if (param_1[local_2c] == 'd') {
      if (pcVar4[1] == '(') {
        iVar5 = strncmp(pcVar4,"d()",3);
        if (iVar5 == 0) {
          pcVar4 = pcVar4 + 3;
          uVar2 = (undefined2)DAT_0006bad0;
          ppcVar3[2] = DAT_0006bacc;
          *(undefined2 *)(ppcVar3 + 3) = uVar2;
          pcVar8 = *ppcVar3;
        }
        else {
          local_2c = 0;
          iVar5 = __isoc99_sscanf(pcVar4,"d(%[^)])%n",ppcVar3 + 2);
          pcVar8 = *ppcVar3;
          if (iVar5 == 1) {
            pcVar4 = pcVar4 + local_2c;
          }
          else {
            local_2c = 0;
          }
          if (pcVar4[-1] != ')') {
            FUN_0005df98(2,"src/spec.c",0x211,"in string[%s] can\'t find match \')\'",pcVar8);
            goto LAB_0005caa8;
          }
        }
      }
      else {
        pcVar4 = pcVar4 + 1;
        uVar2 = (undefined2)DAT_0006bad0;
        ppcVar3[2] = DAT_0006bacc;
        *(undefined2 *)(ppcVar3 + 3) = uVar2;
        pcVar8 = *ppcVar3;
      }
      pcVar7 = *param_3;
      ppcVar3[0x403] = pcVar7;
      *param_3 = pcVar7 + 1;
      ppcVar3[0x909] = (char *)FUN_0005c358;
      *param_2 = pcVar4;
      ppcVar3[1] = pcVar4 + -(int)pcVar8;
    }
    else if (param_1[local_2c] == 'M') {
      local_2c = 0;
      iVar5 = __isoc99_sscanf(pcVar4,"M(%[^)])%n",ppcVar3 + 0x404);
      if (iVar5 == 1) {
        pcVar4 = pcVar4 + local_2c;
      }
      else {
        local_2c = 0;
        iVar5 = strncmp(pcVar4,"M()",3);
        if (iVar5 == 0) {
          pcVar4 = pcVar4 + 3;
          local_2c = 3;
        }
      }
      if (pcVar4[-1] != ')') {
        FUN_0005df98(2,"src/spec.c",0x22a,"in string[%s] can\'t find match \')\'",*ppcVar3);
LAB_0005caa8:
        FUN_0005c6f4(ppcVar3);
        return (char **)0x0;
      }
      ppcVar3[1] = pcVar4 + -(int)*ppcVar3;
      *param_2 = pcVar4;
      ppcVar3[0x909] = &LAB_0005c2e4;
    }
    else {
      iVar5 = strncmp(pcVar4,"ms",2);
      pcVar8 = *ppcVar3;
      if (iVar5 == 0) {
        ppcVar3[1] = pcVar4 + 2 + -(int)pcVar8;
        *param_2 = pcVar4 + 2;
        ppcVar3[0x909] = "\b";
      }
      else {
        iVar5 = strncmp(pcVar4,"us",2);
        if (iVar5 == 0) {
          ppcVar3[1] = pcVar4 + 2 + -(int)pcVar8;
          *param_2 = pcVar4 + 2;
          ppcVar3[0x909] = "\b";
        }
        else {
          *param_2 = pcVar4 + 1;
          cVar1 = *pcVar4;
          ppcVar3[1] = pcVar4 + (1 - (int)pcVar8);
          pcVar4 = DAT_0006bacc;
          switch(cVar1) {
          case '%':
            ppcVar3[0x909] = &LAB_0005bd64;
            break;
          default:
            FUN_0005df98(2,"src/spec.c",0x27a,"str[%s] in wrong format, p[%c]",pcVar8,cVar1);
            goto LAB_0005caa8;
          case 'D':
            pcVar8 = *param_3;
            *(short *)(ppcVar3 + 3) = (short)DAT_0006bad0;
            ppcVar3[2] = pcVar4;
            *param_3 = pcVar8 + 1;
            ppcVar3[0x403] = pcVar8;
            ppcVar3[0x909] = (char *)FUN_0005c358;
            break;
          case 'F':
            ppcVar3[0x909] = &LAB_0005c454;
            break;
          case 'H':
            ppcVar3[0x909] = &LAB_0005bdc8;
            break;
          case 'L':
            ppcVar3[0x909] = &LAB_0005beec;
            break;
          case 'T':
            ppcVar3[0x909] = &LAB_0005bd78;
            break;
          case 'U':
            ppcVar3[0x909] = &LAB_0005c420;
            break;
          case 'V':
            ppcVar3[0x909] = &LAB_0005bdec;
            break;
          case 'c':
            ppcVar3[0x909] = &LAB_0005bddc;
            break;
          case 'f':
            ppcVar3[0x909] = (char *)FUN_0005c204;
            break;
          case 'k':
            ppcVar3[0x909] = &LAB_0005bdb4;
            break;
          case 'm':
            ppcVar3[0x909] = &DAT_0005bf18;
            break;
          case 'n':
            ppcVar3[0x909] = &LAB_0005bda0;
            break;
          case 'p':
            ppcVar3[0x909] = (char *)FUN_0005be70;
            break;
          case 't':
            ppcVar3[0x909] = &LAB_0005bd8c;
            break;
          case 'v':
            ppcVar3[0x909] = &LAB_0005be2c;
          }
        }
      }
    }
  }
  else {
    pcVar4 = strchr(param_1,0x25);
    *param_2 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)strlen(param_1);
      ppcVar3[1] = pcVar4;
      *param_2 = param_1 + (int)pcVar4;
    }
    else {
      ppcVar3[1] = pcVar4 + -(int)param_1;
    }
    ppcVar3[0x909] = "";
    ppcVar3[0x90a] = &LAB_0005bd24;
    ppcVar3[0x90b] = &LAB_0005bd34;
    ppcVar3[0x90c] = &LAB_0005bd44;
  }
  FUN_0005c630(ppcVar3,0);
  return ppcVar3;
}

