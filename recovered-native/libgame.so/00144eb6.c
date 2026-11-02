/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144eb6  Symbol: getWinSizeInPixels */

/* cocos2d::CCDirector::getWinSizeInPixels() */

CCDirector * __thiscall cocos2d::CCDirector::getWinSizeInPixels(CCDirector *this)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  getWinSize();
  uVar3 = *(undefined4 *)this;
  pCVar1 = (CCDirector *)sharedDirector();
  uVar2 = getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(uVar3,uVar2);
  *(undefined4 *)this = uVar2;
  uVar3 = *(undefined4 *)(this + 4);
  pCVar1 = (CCDirector *)sharedDirector();
  uVar2 = getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(uVar3,uVar2);
  *(undefined4 *)(this + 4) = uVar2;
  return this;
}


