/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e43e4  Symbol: onExit */

/* Market_Unit::onExit() */

void __thiscall Market_Unit::onExit(Market_Unit *this)

{
  CCNode *pCVar1;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  KG_removeChild(pCVar1,true);
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


