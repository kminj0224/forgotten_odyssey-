/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001423f4  Symbol: reorderChild */

/* cocos2d::CCNode::reorderChild(cocos2d::CCNode*, int) */

void __thiscall cocos2d::CCNode::reorderChild(CCNode *this,CCNode *param_1,int param_2)

{
  CCObject::retain((CCObject *)param_1);
  CCArray::removeObject(*(CCObject **)(this + 0x40));
  insertChild(this,param_1,param_2);
  CCObject::release((CCObject *)param_1);
  return;
}


