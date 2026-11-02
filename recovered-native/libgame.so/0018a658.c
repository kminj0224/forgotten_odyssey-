/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a658  Symbol: FUN_0018a658 */

void FUN_0018a658(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0018a6b4;
  if (param_1 != DAT_0018a6ac) {
    if (DAT_0018a6ac < param_1) {
      iVar2 = DAT_0018a6bc;
      if (param_1 == DAT_0018a6b0) goto LAB_0018a696;
      iVar1 = DAT_0018a6b0 + 1;
      iVar2 = DAT_0018a6c0;
    }
    else {
      iVar1 = DAT_0018a6ac + -1;
      iVar2 = DAT_0018a6b8;
    }
    if (param_1 != iVar1) {
      iVar2 = DAT_0018a6c4;
    }
  }
LAB_0018a696:
  FUN_001a570c(2,param_1,param_2,DAT_0018a6a8 + 0x18a664 + iVar2,param_3);
  return;
}


