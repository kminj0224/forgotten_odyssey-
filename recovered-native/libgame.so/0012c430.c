/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c430  Symbol: onExit */

/* LogoLayer::onExit() */

void __thiscall LogoLayer::onExit(LogoLayer *this)

{
  CCNode *pCVar1;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  KG_removeChild(pCVar1,true);
  (**(code **)(*(int *)this + 0xd0))(this,*(undefined4 *)(this + 0x110),1);
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


