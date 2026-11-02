/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001422a8  Symbol: childrenAlloc */

/* cocos2d::CCNode::childrenAlloc() */

void __thiscall cocos2d::CCNode::childrenAlloc(CCNode *this)

{
  CCObject *this_00;
  
  this_00 = (CCObject *)CCArray::arrayWithCapacity(4);
  *(CCObject **)(this + 0x40) = this_00;
  CCObject::retain(this_00);
  return;
}


