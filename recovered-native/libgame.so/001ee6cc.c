/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee6cc  Symbol: FUN_001ee6cc */

int * FUN_001ee6cc(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *__src;
  int iVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  
  __src = (undefined *)*param_2;
  __n = *(size_t *)(__src + -0xc);
  if (__n != 0) {
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + -0xc);
    uVar3 = iVar1 + __n;
    if ((*(uint *)(iVar2 + -8) < uVar3) || (0 < *(int *)(iVar2 + -4))) {
      FUN_001ee274(param_1,uVar3,iVar1,iVar2,param_4);
      iVar2 = *param_1;
      __src = (undefined *)*param_2;
      iVar1 = *(int *)(iVar2 + -0xc);
    }
    if (__n == 1) {
      *(undefined *)(iVar2 + iVar1) = *__src;
    }
    else {
      memcpy((void *)(iVar2 + iVar1),__src,__n);
    }
    iVar1 = *param_1;
    if (iVar1 + -0xc != DAT_001ee770 + 0x1ee74c) {
      *(undefined4 *)(iVar1 + -4) = 0;
      *(uint *)(iVar1 + -0xc) = uVar3;
      *(undefined *)(iVar1 + uVar3) = 0;
    }
  }
  return param_1;
}


