/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff144  Symbol: FUN_001ff144 */

uint FUN_001ff144(int *param_1,wchar_t *param_2,uint param_3,size_t param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + -0xc) == 0) {
LAB_001ff164:
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(int *)(iVar1 + -0xc) - 1;
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    iVar4 = uVar3 << 2;
    while( true ) {
      pwVar2 = wmemchr(param_2,*(wchar_t *)(iVar1 + iVar4),param_4);
      iVar4 = iVar4 + -4;
      if (pwVar2 == (wchar_t *)0x0) break;
      bVar5 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      if (bVar5) goto LAB_001ff164;
      iVar1 = *param_1;
    }
  }
  return uVar3;
}


