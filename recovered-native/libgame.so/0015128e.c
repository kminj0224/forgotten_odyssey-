/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015128e  Symbol: FUN_0015128e */

void FUN_0015128e(int param_1,CCObject *param_2)

{
  CCObject **ppCVar1;
  CCObject **ppCVar2;
  int iVar3;
  CCObject **__dest;
  
  ppCVar2 = *(CCObject ***)(param_1 + 0x18);
  ppCVar1 = *(CCObject ***)(param_1 + 0x14);
  do {
    __dest = ppCVar1;
    if (__dest == ppCVar2) {
      return;
    }
    ppCVar1 = __dest + 1;
  } while (*__dest != param_2);
  ppCVar1 = __dest + 1;
  if ((ppCVar1 != ppCVar2) && (iVar3 = (int)ppCVar2 - (int)ppCVar1 >> 2, iVar3 != 0)) {
    memmove(__dest,ppCVar1,iVar3 << 2);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
  cocos2d::CCObject::release(param_2);
  return;
}


