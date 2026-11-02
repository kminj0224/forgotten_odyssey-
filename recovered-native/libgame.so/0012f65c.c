/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f65c  Symbol: ~Story_Layer */

/* Story_Layer::~Story_Layer() */

Story_Layer * __thiscall Story_Layer::~Story_Layer(Story_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0012f690 + 0x12f666);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


