/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a4ec  Symbol: ~CCScene */

/* cocos2d::CCScene::~CCScene() */

CCScene * __thiscall cocos2d::CCScene::~CCScene(CCScene *this)

{
  *(int *)this = *(int *)(DAT_0014a504 + 0x14a4f6) + 8;
  CCNode::~CCNode((CCNode *)this);
  return this;
}


