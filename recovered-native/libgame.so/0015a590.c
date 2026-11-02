/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a590  Symbol: spriteWithTexture */

/* cocos2d::CCSprite::spriteWithTexture(cocos2d::CCTexture2D*) */

int * cocos2d::CCSprite::spriteWithTexture(CCTexture2D *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x1c8);
  CCSprite((CCSprite *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithTexture((CCSprite *)this,param_1);
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


