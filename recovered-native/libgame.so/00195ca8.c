/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195ca8  Symbol: FUN_00195ca8 */

int FUN_00195ca8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  iVar2 = DAT_00195d04 + 0x195cbe;
  if (iVar1 <= *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xc0) = iVar1 << 1;
    iVar1 = (***(code ***)(iVar2 + DAT_00195d08))(*(int *)(param_1 + 0xc4),iVar1 << 3);
    *(int *)(param_1 + 0xc4) = iVar1;
    if (iVar1 == 0) {
      FUN_00195c00(param_1,0);
      return 0;
    }
  }
  piVar3 = (int *)(param_1 + 0xbc);
  *(undefined4 *)(*piVar3 * 4 + *(int *)(param_1 + 0xc4)) = param_2;
  iVar1 = *piVar3;
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  *piVar3 = iVar1 + 1;
  return iVar1;
}


