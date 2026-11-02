/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ce674  Symbol: FUN_001ce674 */

undefined4 *
FUN_001ce674(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  iVar1 = FUN_00207ebc(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(char *)(param_2 + 0x54) != '\0') {
      if (*(int *)(param_2 + 8) == *(int *)(param_2 + 4)) {
        iVar1 = 0;
      }
      else {
        iVar1 = 4;
      }
      iVar1 = *(int *)(param_2 + 0x4c) + iVar1;
      *(int *)(param_2 + 0x4c) = iVar1;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 0x3c);
      *(int *)(param_2 + 8) = iVar1;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x50);
      *(undefined *)(param_2 + 0x54) = 0;
    }
    FUN_001ce5b4(&local_28,param_2,param_3,param_4,0,param_5);
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
  }
  return param_1;
}


