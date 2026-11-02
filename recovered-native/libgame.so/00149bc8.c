/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149bc8  Symbol: ~CCLayerColor */

/* cocos2d::CCLayerColor::~CCLayerColor() */

CCLayerColor * __thiscall cocos2d::CCLayerColor::~CCLayerColor(CCLayerColor *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00149c0c + 0x149bd2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x164;
  *(int *)(this + 0x100) = iVar1 + 0x194;
  *(int *)(this + 0x104) = iVar1 + 0x1a0;
  *(int *)(this + 0x110) = iVar1 + 0x1b0;
  *(int *)(this + 0x114) = iVar1 + 0x1d0;
  CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


