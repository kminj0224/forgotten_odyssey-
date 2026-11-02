/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159b28  Symbol: addChild */

/* cocos2d::CCSprite::addChild(cocos2d::CCNode*, int, int) */

void __thiscall cocos2d::CCSprite::addChild(CCSprite *this,CCNode *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  CCNode::addChild((CCNode *)this,param_1,param_2,param_3);
  if (this[0x128] != (CCSprite)0x0) {
    uVar1 = CCSpriteBatchNode::atlasIndexForChild
                      (*(CCSpriteBatchNode **)(this + 0x110),(CCSprite *)param_1,param_2);
    CCSpriteBatchNode::insertChild(*(CCSpriteBatchNode **)(this + 0x110),(CCSprite *)param_1,uVar1);
  }
  this[0x11a] = (CCSprite)0x1;
  return;
}


