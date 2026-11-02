/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142262  Symbol: getChildrenCount */

/* cocos2d::CCNode::getChildrenCount() */

void __thiscall cocos2d::CCNode::getChildrenCount(CCNode *this)

{
  if (*(CCArray **)(this + 0x40) != (CCArray *)0x0) {
    CCArray::count(*(CCArray **)(this + 0x40));
  }
  return;
}


