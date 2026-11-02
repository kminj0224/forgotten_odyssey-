/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002006c8  Symbol: FUN_002006c8 */

int * FUN_002006c8(int *param_1,wchar_t **param_2,undefined4 param_3,undefined4 param_4)

{
  wchar_t *__s2;
  int iVar1;
  int iVar2;
  uint uVar3;
  wchar_t __n;
  
  __s2 = *param_2;
  __n = __s2[-3];
  if (__n != L'\0') {
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + -0xc);
    uVar3 = iVar1 + __n;
    if ((*(uint *)(iVar2 + -8) < uVar3) || (0 < *(int *)(iVar2 + -4))) {
      FUN_00200268(param_1,uVar3,iVar1,iVar2,param_4);
      iVar2 = *param_1;
      __s2 = *param_2;
      iVar1 = *(int *)(iVar2 + -0xc);
    }
    if (__n == L'\x01') {
      *(wchar_t *)(iVar2 + iVar1 * 4) = *__s2;
    }
    else {
      wmemcpy((wchar_t *)(iVar2 + iVar1 * 4),__s2,__n);
      iVar2 = *param_1;
    }
    if (iVar2 + -0xc != DAT_0020076c + 0x200748) {
      *(undefined4 *)(iVar2 + -4) = 0;
      *(uint *)(iVar2 + -0xc) = uVar3;
      *(undefined4 *)(iVar2 + uVar3 * 4) = 0;
    }
  }
  return param_1;
}


