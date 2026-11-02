/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7400  Symbol: FUN_001e7400 */

int FUN_001e7400(int param_1,wint_t *param_2,int param_3)

{
  wint_t wVar1;
  int iVar2;
  wint_t *pwVar3;
  
  if (param_3 == 0) {
LAB_001e7448:
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    return 0;
  }
  iVar2 = 0;
  pwVar3 = param_2;
  do {
    wVar1 = getwc(*(__FILE **)(param_1 + 0x20));
    if (wVar1 == 0xffffffff) {
      if (iVar2 == 0) goto LAB_001e7448;
      break;
    }
    iVar2 = iVar2 + 1;
    *pwVar3 = wVar1;
    pwVar3 = pwVar3 + 1;
  } while (param_3 != iVar2);
  *(wint_t *)(param_1 + 0x24) = param_2[iVar2 + -1];
  return iVar2;
}


