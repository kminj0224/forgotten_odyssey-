/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d82c  Symbol: FUN_0015d82c */

int FUN_0015d82c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    iVar1 = FUN_0018962c(*(undefined4 *)(DAT_0015d860 + 0x15d83c));
    *param_2 = iVar1;
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      while ((iVar1 != 0 && (iVar2 = FUN_0019c2dc(*(undefined4 *)(iVar1 + 8),param_1), iVar2 != 0)))
      {
        iVar1 = *(int *)(iVar1 + 0x18);
      }
    }
  }
  return iVar1;
}


