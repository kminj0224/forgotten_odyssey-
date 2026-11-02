/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104f00  Symbol: ~Unit_Money */

/* Unit_Money::~Unit_Money() */

Unit_Money * __thiscall Unit_Money::~Unit_Money(Unit_Money *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00104f34 + 0x104f0a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


