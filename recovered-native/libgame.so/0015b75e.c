/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b75e  Symbol: removeChild */

/* cocos2d::CCSpriteBatchNode::removeChild(cocos2d::CCNode*, bool) */

void __thiscall
cocos2d::CCSpriteBatchNode::removeChild(CCSpriteBatchNode *this,CCNode *param_1,bool param_2)

{
  if (param_1 != (CCNode *)0x0) {
    removeSpriteFromAtlas(this,(CCSprite *)param_1);
    CCNode::removeChild((CCNode *)this,param_1,param_2);
  }
  return;
}


