/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200358  Symbol: FUN_00200358 */

int * FUN_00200358(int *param_1,uint param_2,wchar_t param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + -0xc);
    if (0xffffffeU - iVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4558((int)&DAT_00200418 + DAT_0020041c);
    }
    uVar3 = param_2 + iVar1;
    if ((*(uint *)(iVar2 + -8) < uVar3) || (0 < *(int *)(iVar2 + -4))) {
      FUN_00200268(param_1,uVar3);
      iVar2 = *param_1;
      iVar1 = *(int *)(iVar2 + -0xc);
    }
    if (param_2 == 1) {
      *(wchar_t *)(iVar2 + iVar1 * 4) = param_3;
    }
    else {
      wmemset((wchar_t *)(iVar2 + iVar1 * 4),param_3,param_2);
      iVar2 = *param_1;
    }
    if (iVar2 + -0xc != DAT_00200418 + 0x2003f8) {
      *(undefined4 *)(iVar2 + -4) = 0;
      *(uint *)(iVar2 + -0xc) = uVar3;
      *(undefined4 *)(iVar2 + uVar3 * 4) = 0;
    }
  }
  return param_1;
}


