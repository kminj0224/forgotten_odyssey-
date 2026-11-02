/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a92c  Symbol: FUN_0018a92c */

undefined4 FUN_0018a92c(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0018a988 + 0x18a936;
  if (((param_1 == (int *)0x0) || (param_1[3] == 2)) || (param_2 == (char *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    for (; *param_2 != '\0'; param_2 = param_2 + 1) {
      if (((uint)param_1[2] <= param_1[1] + 10U) && (iVar1 = FUN_0018a828(param_1), iVar1 == 0)) {
        FUN_001898e8(iVar3 + DAT_0018a98c);
        return 2;
      }
      iVar1 = param_1[1];
      *(char *)(*param_1 + iVar1) = *param_2;
      param_1[1] = iVar1 + 1;
    }
    uVar2 = 0;
    *(undefined *)(*param_1 + param_1[1]) = 0;
  }
  return uVar2;
}


