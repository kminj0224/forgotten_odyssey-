/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001050d0  Symbol: ~Monster_HP */

/* Monster_HP::~Monster_HP() */

Monster_HP * __thiscall Monster_HP::~Monster_HP(Monster_HP *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00105104 + 0x1050da);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


