/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001aa64  Symbol: FUN_0001aa64 */

int FUN_0001aa64(int param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_14;
  
  pcVar4 = *(char **)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  if (*pcVar4 == 'I') {
    pcVar2 = pcVar4 + 1;
    *(char **)(param_1 + 0xc) = pcVar2;
    cVar3 = pcVar4[1];
    if (cVar3 == 'E') {
      *(char **)(param_1 + 0xc) = pcVar4 + 2;
      uVar6 = FUN_00017fe4(param_1,0x2b,0,0);
      return uVar6;
    }
    piVar5 = &local_14;
    local_14 = 0;
    do {
      if (cVar3 == 'L') {
        iVar1 = FUN_0001a508(param_1);
      }
      else if (cVar3 == 'X') {
        *(char **)(param_1 + 0xc) = pcVar2 + 1;
        iVar1 = FUN_0001a624(param_1);
        if (**(char **)(param_1 + 0xc) != 'E') goto LAB_0001aa84;
        *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
      }
      else if (cVar3 == 'I') {
        iVar1 = FUN_0001aa64(param_1);
      }
      else {
        iVar1 = FUN_00018b7c(param_1);
      }
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00017fe4(param_1,0x2b,iVar1,0);
      *piVar5 = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      pcVar2 = *(char **)(param_1 + 0xc);
      piVar5 = (int *)(iVar1 + 8);
      cVar3 = *pcVar2;
    } while (cVar3 != 'E');
    *(char **)(param_1 + 0xc) = pcVar2 + 1;
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
  }
  else {
LAB_0001aa84:
    local_14 = 0;
  }
  return local_14;
}


