/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e7d0  Symbol: ~CCMenuItemImage */

/* cocos2d::CCMenuItemImage::~CCMenuItemImage() */

CCMenuItemImage * __thiscall cocos2d::CCMenuItemImage::~CCMenuItemImage(CCMenuItemImage *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014e7f4 + 0x14e7da);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x110) = iVar1 + 0x140;
  CCMenuItemSprite::~CCMenuItemSprite((CCMenuItemSprite *)this);
  return this;
}


