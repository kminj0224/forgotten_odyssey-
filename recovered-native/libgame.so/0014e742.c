/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e742  Symbol: activate */

/* cocos2d::CCMenuItemLabel::activate() */

void __thiscall cocos2d::CCMenuItemLabel::activate(CCMenuItemLabel *this)

{
  float fVar1;
  
  if (this[0xfd] != (CCMenuItemLabel)0x0) {
    fVar1 = (float)CCNode::stopAllActions();
    CCNode::setScale((CCNode *)this,fVar1);
    CCMenuItem::activate();
  }
  return;
}


