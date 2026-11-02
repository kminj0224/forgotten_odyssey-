/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141df2  Symbol: setGrid */

/* cocos2d::CCNode::setGrid(cocos2d::CCGridBase*) */

void __thiscall cocos2d::CCNode::setGrid(CCNode *this,CCGridBase *param_1)

{
  if (param_1 != (CCGridBase *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x48) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x48));
  }
  *(CCGridBase **)(this + 0x48) = param_1;
  return;
}


