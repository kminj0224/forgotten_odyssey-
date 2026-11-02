/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146ebc  Symbol: ~CCLabelAtlas */

/* cocos2d::CCLabelAtlas::~CCLabelAtlas() */

CCLabelAtlas * __thiscall cocos2d::CCLabelAtlas::~CCLabelAtlas(CCLabelAtlas *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00146f04 + 0x146ec6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x130) = iVar1 + 0x178;
  *(int *)(this + 0x100) = iVar1 + 0x160;
  FUN_001edf58(this + 0x134);
  FUN_001ed6b8(this + 0x134);
  CCAtlasNode::~CCAtlasNode((CCAtlasNode *)this);
  return this;
}


