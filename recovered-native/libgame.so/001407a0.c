/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001407a0  Symbol: ~CCFadeOutBLTiles */

/* cocos2d::CCFadeOutBLTiles::~CCFadeOutBLTiles() */

CCFadeOutBLTiles * __thiscall cocos2d::CCFadeOutBLTiles::~CCFadeOutBLTiles(CCFadeOutBLTiles *this)

{
  *(int *)this = *(int *)(DAT_001407b8 + 0x1407aa) + 8;
  CCFadeOutTRTiles::~CCFadeOutTRTiles((CCFadeOutTRTiles *)this);
  return this;
}


