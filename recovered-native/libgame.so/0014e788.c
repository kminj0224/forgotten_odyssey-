/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e788  Symbol: ~CCMenuItem */

/* cocos2d::CCMenuItem::~CCMenuItem() */

CCMenuItem * __thiscall cocos2d::CCMenuItem::~CCMenuItem(CCMenuItem *this)

{
  *(int *)this = *(int *)(DAT_0014e7a4 + 0x14e792) + 8;
  unregisterScriptHandler(this);
  CCNode::~CCNode((CCNode *)this);
  return this;
}


