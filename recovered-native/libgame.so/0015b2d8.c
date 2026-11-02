/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b2d8  Symbol: reorderChild */

/* cocos2d::CCSpriteBatchNode::reorderChild(cocos2d::CCNode*, int) */

void __thiscall
cocos2d::CCSpriteBatchNode::reorderChild(CCSpriteBatchNode *this,CCNode *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
  if (param_2 != iVar1) {
    CCObject::retain((CCObject *)param_1);
    (**(code **)(*(int *)this + 0xd0))(this,param_1,0);
    (**(code **)(*(int *)this + 200))(this,param_1,param_2);
    CCObject::release((CCObject *)param_1);
  }
  return;
}


