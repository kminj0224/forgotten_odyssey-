/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011bbb0  Symbol: ~New_Notice */

/* New_Notice::~New_Notice() */

New_Notice * __thiscall New_Notice::~New_Notice(New_Notice *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0011bbe4 + 0x11bbba);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


