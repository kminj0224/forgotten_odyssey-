/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014be30  Symbol: ~CCTransitionScene */

/* cocos2d::CCTransitionScene::~CCTransitionScene() */

CCTransitionScene * __thiscall
cocos2d::CCTransitionScene::~CCTransitionScene(CCTransitionScene *this)

{
  *(int *)this = *(int *)(DAT_0014be58 + 0x14be3c) + 8;
  CCObject::release(*(CCObject **)(this + 0xfc));
  CCObject::release(*(CCObject **)(this + 0x100));
  CCScene::~CCScene((CCScene *)this);
  return this;
}


