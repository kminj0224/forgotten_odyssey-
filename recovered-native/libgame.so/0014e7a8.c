/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e7a8  Symbol: ~CCMenuItemSprite */

/* cocos2d::CCMenuItemSprite::~CCMenuItemSprite() */

CCMenuItemSprite * __thiscall cocos2d::CCMenuItemSprite::~CCMenuItemSprite(CCMenuItemSprite *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014e7cc + 0x14e7b2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x110) = iVar1 + 0x140;
  CCMenuItem::~CCMenuItem((CCMenuItem *)this);
  return this;
}


