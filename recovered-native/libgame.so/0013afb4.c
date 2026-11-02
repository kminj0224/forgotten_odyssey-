/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013afb4  Symbol: setPosition */

/* cocos2d::CCRipple3D::setPosition(cocos2d::CCPoint const&) */

void __thiscall cocos2d::CCRipple3D::setPosition(CCRipple3D *this,CCPoint *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  CCPoint CVar3;
  
  *(CCPoint *)(this + 0x34) = *param_1;
  *(CCPoint *)(this + 0x38) = param_1[1];
  CVar3 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(CVar3,uVar2);
  *(undefined4 *)(this + 0x4c) = uVar2;
  CVar3 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(CVar3,uVar2);
  *(undefined4 *)(this + 0x50) = uVar2;
  return;
}


