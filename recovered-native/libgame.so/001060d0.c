/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001060d0  Symbol: Hero_HP */

/* Hero_HP::Hero_HP() */

Hero_HP * __thiscall Hero_HP::Hero_HP(Hero_HP *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010610c + 0x1060e2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x114));
  return this;
}


