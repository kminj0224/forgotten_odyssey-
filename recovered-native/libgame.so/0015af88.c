/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015af88  Symbol: spriteWithSpriteFrame */

/* cocos2d::CCSprite::spriteWithSpriteFrame(cocos2d::CCSpriteFrame*) */

int * cocos2d::CCSprite::spriteWithSpriteFrame(CCSpriteFrame *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x1c8);
  CCSprite((CCSprite *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithSpriteFrame((CCSprite *)this,param_1);
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


