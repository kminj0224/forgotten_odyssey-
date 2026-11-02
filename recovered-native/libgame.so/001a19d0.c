/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a19d0  Symbol: FUN_001a19d0 */

int FUN_001a19d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_001a1940(param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_0018ff70(param_1,*(undefined4 *)(iVar1 + 0x14),0);
    *(int *)(iVar1 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_0019f930(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}


