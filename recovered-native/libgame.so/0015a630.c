/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a630  Symbol: spriteWithBatchNode */

/* cocos2d::CCSprite::spriteWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect const&) */

int * cocos2d::CCSprite::spriteWithBatchNode(CCSpriteBatchNode *param_1,CCRect *param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x1c8);
  CCSprite((CCSprite *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithBatchNode((CCSprite *)this,param_1,param_2);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


