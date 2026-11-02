/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00106050  Symbol: Money */

/* Money::Money() */

Money * __thiscall Money::Money(Money *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010608c + 0x106062);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x118));
  return this;
}


