/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019408c  Symbol: FUN_0019408c */

undefined4 FUN_0019408c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_001940d0 + 0x194098;
  if (((param_1 == 0) || (*(int *)(param_1 + 0x2c) == 0)) ||
     ((iVar1 = FUN_00194024(), iVar1 == 0 &&
      ((*(int *)(param_1 + 0x30) == 0 ||
       (iVar1 = FUN_00194024(*(int *)(param_1 + 0x30),param_2), iVar1 == 0)))))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
    if (*(uint *)(iVar1 + 0x24) < 5) {
      uVar2 = *(undefined4 *)(*(uint *)(iVar1 + 0x24) * 4 + iVar3 + DAT_001940d4);
    }
  }
  return uVar2;
}


