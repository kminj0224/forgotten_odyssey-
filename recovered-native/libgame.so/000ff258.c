/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ff258  Symbol: ~Image_Fram */

/* Image_Fram::~Image_Fram() */

Image_Fram * __thiscall Image_Fram::~Image_Fram(Image_Fram *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ff2a0 + 0xff262);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  cocos2d::CCObject::release(*(CCObject **)(this + 0x390));
  cocos2d::CCObject::release(*(CCObject **)(this + 0x2c4));
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


