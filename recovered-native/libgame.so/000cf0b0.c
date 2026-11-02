/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cf0b0  Symbol: ~Equip_Layer */

/* Equip_Layer::~Equip_Layer() */

Equip_Layer * __thiscall Equip_Layer::~Equip_Layer(Equip_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000cf0e4 + 0xcf0ba);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


