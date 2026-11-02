/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ff944  Symbol: ~Monster_Test */

/* Monster_Test::~Monster_Test() */

Monster_Test * __thiscall Monster_Test::~Monster_Test(Monster_Test *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ff978 + 0xff94e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


