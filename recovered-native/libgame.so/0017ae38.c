/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ae38  Symbol: FUN_0017ae38 */

undefined4 FUN_0017ae38(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == *(int *)(param_1 + 0x138)) {
    uVar2 = *(undefined4 *)(param_1 + 0x140);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x148) + -2;
    iVar5 = iVar4 * 4;
    for (; -1 < iVar4; iVar4 = iVar4 + -2) {
      iVar3 = *(int *)(param_1 + 0x150);
      piVar1 = (int *)(iVar3 + iVar5);
      iVar5 = iVar5 + -8;
      if (*piVar1 == param_2) {
        if ((param_2 != 0) || (**(char **)((iVar4 + 1) * 4 + iVar3) != '\0')) {
          return *(undefined4 *)((iVar4 + 1) * 4 + iVar3);
        }
        break;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


