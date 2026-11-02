/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3924  Symbol: ~In_App_Layer */

/* In_App_Layer::~In_App_Layer() */

In_App_Layer * __thiscall In_App_Layer::~In_App_Layer(In_App_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000d3958 + 0xd392e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


