/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b658  Symbol: addChild */

/* cocos2d::CCSpriteBatchNode::addChild(cocos2d::CCNode*, int, int) */

void __thiscall
cocos2d::CCSpriteBatchNode::addChild
          (CCSpriteBatchNode *this,CCNode *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  CCNode::addChild((CCNode *)this,param_1,param_2,param_3);
  uVar1 = atlasIndexForChild(this,(CCSprite *)param_1,param_2);
  insertChild(this,(CCSprite *)param_1,uVar1);
  return;
}


