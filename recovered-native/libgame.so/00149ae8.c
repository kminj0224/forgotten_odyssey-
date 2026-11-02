/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149ae8  Symbol: ~CCLayer */

/* cocos2d::CCLayer::~CCLayer() */

CCLayer * __thiscall cocos2d::CCLayer::~CCLayer(CCLayer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00149b2c + 0x149af4);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  unregisterScriptTouchHandler(this);
  *(int *)(this + 0xfc) = *(int *)(DAT_00149b30 + 0x149b1e) + 8;
  CCNode::~CCNode((CCNode *)this);
  return this;
}


