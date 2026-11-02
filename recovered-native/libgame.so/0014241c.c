/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014241c  Symbol: addChild */

/* cocos2d::CCNode::addChild(cocos2d::CCNode*, int, int) */

void __thiscall cocos2d::CCNode::addChild(CCNode *this,CCNode *param_1,int param_2,int param_3)

{
  if (*(int *)(this + 0x40) == 0) {
    childrenAlloc(this);
  }
  insertChild(this,param_1,param_2);
  *(int *)(param_1 + 0x7c) = param_3;
  (**(code **)(*(int *)param_1 + 0x94))(param_1,this);
  if (this[0x70] != (CCNode)0x0) {
    (**(code **)(*(int *)param_1 + 0xb0))(param_1);
    (**(code **)(*(int *)param_1 + 0xb4))(param_1);
  }
  return;
}


