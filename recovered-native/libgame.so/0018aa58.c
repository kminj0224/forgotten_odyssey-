/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018aa58  Symbol: FUN_0018aa58 */

undefined4 FUN_0018aa58(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0018aad8 + 0x18aa64;
  if ((((param_2 == (void *)0x0) || (param_1 == (int *)0x0)) || (param_1[3] == 2)) ||
     ((int)(param_3 + 1) < 0 != SCARRY4(param_3,1))) {
LAB_0018aacc:
    uVar2 = 0xffffffff;
  }
  else {
    if (param_3 != 0) {
      if (param_3 == 0xffffffff) {
        param_3 = FUN_0019c49c(param_2);
        if ((int)param_3 < 0) goto LAB_0018aacc;
        if (param_3 == 0) goto LAB_0018aad2;
      }
      if (((uint)param_1[2] < param_1[1] + 2 + param_3) &&
         (iVar1 = FUN_0018a828(param_1), iVar1 == 0)) {
        FUN_001898e8(iVar3 + DAT_0018aadc);
        return 2;
      }
      memmove((void *)(*param_1 + param_1[1]),param_2,param_3);
      iVar3 = param_1[1];
      param_1[1] = param_3 + iVar3;
      *(undefined *)(*param_1 + param_3 + iVar3) = 0;
    }
LAB_0018aad2:
    uVar2 = 0;
  }
  return uVar2;
}


