/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012bb3c  Symbol: ~IntroLayer */

/* IntroLayer::~IntroLayer() */

IntroLayer * __thiscall IntroLayer::~IntroLayer(IntroLayer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0012bb70 + 0x12bb46);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


