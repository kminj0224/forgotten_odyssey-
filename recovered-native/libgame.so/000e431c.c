/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e431c  Symbol: ~Market_Unit */

/* Market_Unit::~Market_Unit() */

Market_Unit * __thiscall Market_Unit::~Market_Unit(Market_Unit *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000e4350 + 0xe4326);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


