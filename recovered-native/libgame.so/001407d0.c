/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001407d0  Symbol: ~CCFadeOutUpTiles */

/* cocos2d::CCFadeOutUpTiles::~CCFadeOutUpTiles() */

CCFadeOutUpTiles * __thiscall cocos2d::CCFadeOutUpTiles::~CCFadeOutUpTiles(CCFadeOutUpTiles *this)

{
  *(int *)this = *(int *)(DAT_001407e8 + 0x1407da) + 8;
  CCFadeOutTRTiles::~CCFadeOutTRTiles((CCFadeOutTRTiles *)this);
  return this;
}


