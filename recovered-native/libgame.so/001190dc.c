/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001190dc  Symbol: ~StateMode */

/* StateMode::~StateMode() */

StateMode * __thiscall StateMode::~StateMode(StateMode *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00119110 + 0x1190e6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


