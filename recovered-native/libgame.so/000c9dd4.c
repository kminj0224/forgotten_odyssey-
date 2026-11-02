/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9dd4  Symbol: ~N_Draw_Number */

/* N_Draw_Number::~N_Draw_Number() */

N_Draw_Number * __thiscall N_Draw_Number::~N_Draw_Number(N_Draw_Number *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000c9e08 + 0xc9dde);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


