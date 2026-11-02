/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018ae8  Symbol: FUN_00018ae8 */

int FUN_00018ae8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (**(char **)(param_1 + 0xc) == 'T') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    iVar1 = FUN_00018a94();
    if (-1 < iVar1) {
      iVar3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      if (*(int *)(param_1 + 0x18) <= iVar3) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x10) + iVar3 * 0xc;
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (iVar2 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc) = 5;
        *(int *)(iVar2 + 4) = iVar1;
      }
      return iVar2;
    }
  }
  return 0;
}


