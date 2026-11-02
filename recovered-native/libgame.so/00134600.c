/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134600  Symbol: ~StageClear */

/* StageClear::~StageClear() */

StageClear * __thiscall StageClear::~StageClear(StageClear *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00134634 + 0x13460a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


