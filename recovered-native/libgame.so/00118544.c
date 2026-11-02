/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00118544  Symbol: Castle_Att_Effect_Remove */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Castle_Att_Effect_Remove() */

void Castle_Att_Effect_Remove(void)

{
  CCObject *pCVar1;
  CCObject **ppCVar2;
  
  ppCVar2 = *(CCObject ***)(DAT_00118598 + 0x11854c);
  pCVar1 = *ppCVar2;
  if (pCVar1 != (CCObject *)0x0) {
    cocos2d::CCObject::release(pCVar1);
    *ppCVar2 = (CCObject *)0x0;
  }
  ppCVar2 = *(CCObject ***)(DAT_0011859c + 0x118560);
  pCVar1 = *ppCVar2;
  if (pCVar1 != (CCObject *)0x0) {
    cocos2d::CCObject::release(pCVar1);
    *ppCVar2 = (CCObject *)0x0;
  }
  ppCVar2 = *(CCObject ***)(DAT_001185a0 + 0x118574);
  pCVar1 = *ppCVar2;
  if (pCVar1 != (CCObject *)0x0) {
    cocos2d::CCObject::release(pCVar1);
    *ppCVar2 = (CCObject *)0x0;
  }
  ppCVar2 = *(CCObject ***)(DAT_001185a4 + 0x118588);
  pCVar1 = *ppCVar2;
  if (pCVar1 != (CCObject *)0x0) {
    cocos2d::CCObject::release(pCVar1);
    *ppCVar2 = (CCObject *)0x0;
  }
  return;
}


