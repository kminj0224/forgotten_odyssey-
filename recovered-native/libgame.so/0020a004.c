/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020a004  Symbol: FUN_0020a004 */

undefined4 FUN_0020a004(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (**(char **)(param_1 + 0xc) == 'J') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
  }
  else if (param_2 == 0) {
    iVar3 = 0;
    goto LAB_0020a030;
  }
  iVar3 = FUN_00209418(param_1);
  if (iVar3 == 0) {
    return 0;
  }
LAB_0020a030:
  iVar1 = FUN_00209f10(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00208880(param_1,0x25,iVar3);
  return uVar2;
}


