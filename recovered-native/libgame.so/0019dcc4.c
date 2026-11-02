/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019dcc4  Symbol: FUN_0019dcc4 */

void * FUN_0019dcc4(int param_1,char *param_2,size_t param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  void *__dest;
  int iVar4;
  void *__s;
  int iVar5;
  
  __s = *(void **)(param_1 + 0x174);
  iVar5 = DAT_0019de10 + 0x19dcd8;
  if (__s == (void *)0x0) {
    __s = (void *)(***(code ***)(iVar5 + DAT_0019de14))(0x3c);
    if (__s == (void *)0x0) {
      FUN_00179430(param_1,iVar5 + DAT_0019de18);
      return (void *)0x0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)((int)__s + 0x18);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
  }
  memset(__s,0,0x3c);
  if (*(int *)(param_1 + 0x16c) == 0) {
LAB_0019ddac:
    __dest = (void *)0x0;
  }
  else {
    cVar2 = param_2[param_3];
    if ((int)param_3 < 8) {
      if (*(int *)(param_1 + 0x168) << 0xf < 0) {
        __dest = (void *)((int)__s + 0x2c);
        memcpy(__dest,param_2,param_3);
        *(undefined *)((int)__dest + param_3) = 0;
        goto LAB_0019ddae;
      }
      if ((3 < (int)param_3) ||
         (((cVar2 != '\'' && (cVar2 != '\"')) && ((cVar2 != '<' || (param_2[param_3 + 1] == '!')))))
         ) goto LAB_0019dd56;
    }
    else {
LAB_0019dd56:
      cVar1 = *param_2;
      if (((((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) ||
          ((cVar2 != '<' || (0x3b < (int)param_3)))) || (param_2[param_3 + 1] == '!'))
      goto LAB_0019ddac;
      for (iVar4 = 1; iVar4 < (int)param_3; iVar4 = iVar4 + 1) {
        cVar2 = param_2[iVar4];
        if (((1 < (byte)(cVar2 - 9U)) && (cVar2 != ' ')) && (cVar2 != '\r')) goto LAB_0019ddac;
      }
    }
    __dest = (void *)FUN_0019d178(*(undefined4 *)(param_1 + 0x128),param_2,param_3);
  }
LAB_0019ddae:
  iVar4 = DAT_0019de1c;
  *(undefined4 *)((int)__s + 4) = 3;
  *(undefined4 *)((int)__s + 8) = *(undefined4 *)(iVar5 + iVar4);
  if (__dest == (void *)0x0) {
    iVar3 = FUN_0019c88c(param_2,param_3);
    *(int *)((int)__s + 0x28) = iVar3;
    iVar4 = DAT_0019de24;
    if (iVar3 == 0) {
      FUN_0019d7d4(param_1,iVar5 + DAT_0019de20);
      (***(code ***)(iVar5 + iVar4))(__s);
      return (void *)0x0;
    }
  }
  else {
    *(void **)((int)__s + 0x28) = __dest;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(short *)((int)__s + 0x38) = (short)*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c);
  }
  if ((**(int **)(iVar5 + DAT_0019de28) != 0) && (**(code ***)(iVar5 + DAT_0019de2c) != (code *)0x0)
     ) {
    (***(code ***)(iVar5 + DAT_0019de2c))(__s);
  }
  return __s;
}


