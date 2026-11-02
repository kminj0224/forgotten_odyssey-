/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c9f8  Symbol: ~MainMenuLayer */

/* MainMenuLayer::~MainMenuLayer() */

MainMenuLayer * __thiscall MainMenuLayer::~MainMenuLayer(MainMenuLayer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0012ca2c + 0x12ca02);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


