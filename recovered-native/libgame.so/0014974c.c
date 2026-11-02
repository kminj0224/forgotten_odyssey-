/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014974c  Symbol: setContentSize */

/* cocos2d::CCLayerColor::setContentSize(cocos2d::CCSize const&) */

void __thiscall cocos2d::CCLayerColor::setContentSize(CCLayerColor *this,CCSize *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  CCSize CVar3;
  
  CVar3 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(CVar3,uVar2);
  *(undefined4 *)(this + 0x120) = uVar2;
  CVar3 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(CVar3,uVar2);
  *(undefined4 *)(this + 300) = uVar2;
  CVar3 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(CVar3,uVar2);
  *(undefined4 *)(this + 0x130) = uVar2;
  CVar3 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(CVar3,uVar2);
  *(undefined4 *)(this + 0x134) = uVar2;
  CCNode::setContentSize((CCSize *)this);
  return;
}


