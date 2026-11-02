/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cea48  Symbol: ~CP_Shop */

/* CP_Shop::~CP_Shop() */

CP_Shop * __thiscall CP_Shop::~CP_Shop(CP_Shop *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000cea7c + 0xcea52);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


