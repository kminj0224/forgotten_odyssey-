/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cdec  Symbol: FUN_0015cdec */

void FUN_0015cdec(int *param_1,int param_2)

{
  int iVar1;
  
  cocos2d::CCObject::release(*(CCObject **)(param_1[2] + param_2 * 4));
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  iVar1 = (iVar1 + -1) - param_2;
  if (iVar1 != 0) {
    memmove((void *)(param_1[2] + param_2 * 4),(void *)(param_1[2] + (param_2 + 1) * 4),iVar1 * 4);
  }
  return;
}


