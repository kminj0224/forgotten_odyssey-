/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fa1c  Symbol: FUN_0018fa1c */

int * FUN_0018fa1c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)0x0;
  iVar3 = DAT_0018fa44 + 0x18fa28;
  if ((-1 < param_1) &&
     (piVar2 = (int *)FUN_0018f94c(param_2), iVar1 = DAT_0018fa48, piVar2 != (int *)0x0)) {
    *piVar2 = param_1;
    piVar2[1] = iVar3 + iVar1;
    piVar2[2] = 0;
  }
  return piVar2;
}


