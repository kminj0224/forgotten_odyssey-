/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001407ec  Symbol: ~CCFadeOutDownTiles */

/* cocos2d::CCFadeOutDownTiles::~CCFadeOutDownTiles() */

CCFadeOutDownTiles * __thiscall
cocos2d::CCFadeOutDownTiles::~CCFadeOutDownTiles(CCFadeOutDownTiles *this)

{
  *(int *)this = *(int *)(DAT_00140804 + 0x1407f6) + 8;
  CCFadeOutUpTiles::~CCFadeOutUpTiles((CCFadeOutUpTiles *)this);
  return this;
}


