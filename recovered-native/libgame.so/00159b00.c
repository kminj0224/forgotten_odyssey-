/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159b00  Symbol: removeChild */

/* cocos2d::CCSprite::removeChild(cocos2d::CCNode*, bool) */

void __thiscall cocos2d::CCSprite::removeChild(CCSprite *this,CCNode *param_1,bool param_2)

{
  if (this[0x128] != (CCSprite)0x0) {
    CCSpriteBatchNode::removeSpriteFromAtlas
              (*(CCSpriteBatchNode **)(this + 0x110),(CCSprite *)param_1);
  }
  CCNode::removeChild((CCNode *)this,param_1,param_2);
  return;
}


