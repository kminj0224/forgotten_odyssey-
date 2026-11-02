/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148c88  Symbol: CCLabelTTF */

/* cocos2d::CCLabelTTF::CCLabelTTF() */

CCLabelTTF * __thiscall cocos2d::CCLabelTTF::CCLabelTTF(CCLabelTTF *this)

{
  int iVar1;
  
  CCSprite::CCSprite((CCSprite *)this);
  iVar1 = *(int *)(DAT_00148ce8 + 0x148c9a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x100) = iVar1 + 0x150;
  *(int *)(this + 0x1c8) = iVar1 + 0x170;
  CCSize::CCSize((CCSize *)(this + 0x1cc));
  *(undefined4 *)(this + 0x1d4) = 1;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return this;
}


