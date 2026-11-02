/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001964cc  Symbol: FUN_001964cc */

undefined4 FUN_001964cc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
LAB_001964f2:
    uVar2 = 1;
  }
  else {
    for (iVar3 = *(int *)(param_2 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
      iVar1 = FUN_00196484(param_1,*(undefined4 *)(param_2 + 8),iVar3);
      if (iVar1 != 0) goto LAB_001964f2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


