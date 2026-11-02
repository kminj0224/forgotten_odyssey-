/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019fa0c  Symbol: FUN_0019fa0c */

void FUN_0019fa0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_0019fa6c;
  if (param_1 != DAT_0019fa64) {
    if (DAT_0019fa64 < param_1) {
      iVar1 = DAT_0019fa78;
      if ((param_1 == DAT_0019fa68) || (iVar1 = DAT_0019fa74, param_1 == DAT_0019fa68 + 1))
      goto LAB_0019fa4c;
    }
    else {
      iVar1 = DAT_0019fa70;
      if (param_1 == 0x578) goto LAB_0019fa4c;
    }
    iVar1 = DAT_0019fa7c;
  }
LAB_0019fa4c:
  FUN_001a570c(7,param_1,param_2,DAT_0019fa60 + 0x19fa18 + iVar1,param_3);
  return;
}


