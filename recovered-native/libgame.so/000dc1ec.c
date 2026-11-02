/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc1ec  Symbol: ~Market_Hero */

/* Market_Hero::~Market_Hero() */

Market_Hero * __thiscall Market_Hero::~Market_Hero(Market_Hero *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000dc220 + 0xdc1f6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


