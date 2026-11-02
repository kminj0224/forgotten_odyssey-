/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200de8  Symbol: FUN_00200de8 */

undefined4 * FUN_00200de8(undefined4 *param_1,wchar_t *param_2,undefined4 param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  
  if (param_2 == (wchar_t *)0x0) {
    pwVar3 = (wchar_t *)0xfffffffc;
  }
  else {
    sVar1 = wcslen(param_2);
    pwVar3 = param_2 + sVar1;
  }
  uVar2 = FUN_00200cb8(param_2,pwVar3,param_3,0);
  *param_1 = uVar2;
  return param_1;
}


