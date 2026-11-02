/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010522c  Symbol: ~Money */

/* Money::~Money() */

Money * __thiscall Money::~Money(Money *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00105260 + 0x105236);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


