/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014232a  Symbol: detachChild */

/* cocos2d::CCNode::detachChild(cocos2d::CCNode*, bool) */

void __thiscall cocos2d::CCNode::detachChild(CCNode *this,CCNode *param_1,bool param_2)

{
  if (this[0x70] != (CCNode)0x0) {
    (**(code **)(*(int *)param_1 + 0xb8))(param_1);
  }
  if (param_2) {
    (**(code **)(*(int *)param_1 + 0xdc))(param_1);
  }
  (**(code **)(*(int *)param_1 + 0x94))(param_1,0);
  CCArray::removeObject(*(CCObject **)(this + 0x40));
  return;
}


