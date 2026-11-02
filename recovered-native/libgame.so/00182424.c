/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182424  Symbol: FUN_00182424 */

undefined4 FUN_00182424(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x24);
  pcVar3 = *(char **)(iVar2 + 0x10);
  iVar4 = DAT_001824f8 + 0x182432;
  if ((((*pcVar3 == 'N') && (pcVar3[1] == 'O')) && (pcVar3[2] == 'T')) &&
     (((pcVar3[3] == 'A' && (pcVar3[4] == 'T')) &&
      ((pcVar3[5] == 'I' && ((pcVar3[6] == 'O' && (pcVar3[7] == 'N')))))))) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 8;
    *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 8;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
       (iVar2 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar2 < 1)) {
      FUN_0017c6c4(param_1);
    }
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) || (cVar1 == '\r')) {
      FUN_0017ff44(param_1);
      iVar2 = FUN_00180540(param_1);
      *param_2 = iVar2;
      if (iVar2 != 0) {
        return 10;
      }
    }
    else {
      FUN_0017bae0(param_1,0x41,iVar4 + DAT_001824fc);
    }
  }
  else {
    iVar2 = FUN_0018040c(param_1);
    *param_2 = iVar2;
    if (iVar2 != 0) {
      return 9;
    }
  }
  return 0;
}


