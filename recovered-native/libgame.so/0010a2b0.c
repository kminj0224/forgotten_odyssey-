/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a2b0  Symbol: ~Unit */

/* Unit::~Unit() */

Unit * __thiscall Unit::~Unit(Unit *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0010a2ec + 0x10a2ba);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  KG_Fram_removeChild((CCNode *)this);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


