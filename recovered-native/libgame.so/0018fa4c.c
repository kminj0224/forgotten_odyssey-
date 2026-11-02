/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fa4c  Symbol: FUN_0018fa4c */

int * FUN_0018fa4c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_0018fabc + 0x18fa58;
  iVar3 = iVar4 + DAT_0018fac0;
  if (*(int *)(iVar3 + 0x78) == 0) {
    iVar2 = *(int *)(iVar3 + 0x7c);
    if (iVar2 < 0xf) {
      iVar5 = iVar4 + DAT_0018fac4;
      *(int *)(iVar2 * 0x10 + iVar5) = iVar4 + DAT_0018fac8;
      *(int *)(iVar5 + iVar2 * 0x10 + 4) = iVar4 + DAT_0018facc;
      iVar6 = iVar2 * 0x10 + 8;
      *(int *)(iVar6 + iVar5) = iVar4 + DAT_0018fad0;
      *(int *)(iVar5 + iVar6 + 4) = iVar4 + DAT_0018fad4;
      *(undefined4 *)(iVar3 + 0x78) = 1;
      *(int *)(iVar3 + 0x7c) = iVar2 + 1;
    }
    *(undefined4 *)(iVar4 + DAT_0018fac0 + 0x78) = 1;
  }
  piVar1 = (int *)0x0;
  if ((param_1 != 0) &&
     (piVar1 = (int *)FUN_0018f94c(param_2), iVar2 = DAT_0018fad8, iVar3 = DAT_0018fad0,
     piVar1 != (int *)0x0)) {
    *piVar1 = param_1;
    piVar1[1] = iVar4 + iVar3;
    piVar1[2] = iVar4 + iVar2;
  }
  return piVar1;
}


