/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ff2cc  Symbol: Image_Fram */

/* Image_Fram::Image_Fram() */

Image_Fram * __thiscall Image_Fram::Image_Fram(Image_Fram *this)

{
  int iVar1;
  Image_Fram *this_00;
  Image_Fram *pIVar2;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000ff32c + 0xff2de);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  cocos2d::CCSize::CCSize((CCSize *)(this + 0x110));
  cocos2d::CCSize::CCSize((CCSize *)(this + 0x128));
  this_00 = this + 0x134;
  do {
    pIVar2 = (Image_Fram *)((CCPoint *)this_00 + 8);
    cocos2d::CCPoint::CCPoint((CCPoint *)this_00);
    this_00 = pIVar2;
  } while (pIVar2 != this + 0x2c4);
  return this;
}


