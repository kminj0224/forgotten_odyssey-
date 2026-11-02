/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7ca8  Symbol: ~AppDelegate */

/* AppDelegate::~AppDelegate() */

AppDelegate * __thiscall AppDelegate::~AppDelegate(AppDelegate *this)

{
  *(int *)this = *(int *)(DAT_000b7cc4 + 0xb7cb2) + 8;
  CocosDenshion::SimpleAudioEngine::end();
  cocos2d::CCApplication::~CCApplication((CCApplication *)this);
  return this;
}


