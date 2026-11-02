/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159fa4  Symbol: useSelfRender */

/* cocos2d::CCSprite::useSelfRender() */

void __thiscall cocos2d::CCSprite::useSelfRender(CCSprite *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
  this[0x128] = (CCSprite)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  this[0x119] = (CCSprite)0x0;
  this[0x118] = (CCSprite)0x0;
  uVar1 = __addsf3(*(undefined4 *)(this + 0x150),0);
  uVar2 = __addsf3(*(undefined4 *)(this + 0x154),0);
  uVar3 = __addsf3(uVar1,*(undefined4 *)(this + 0x144));
  uVar4 = __addsf3(uVar2,*(undefined4 *)(this + 0x148));
  *(undefined4 *)(this + 0x178) = uVar1;
  *(undefined4 *)(this + 0x17c) = uVar2;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar3;
  *(undefined4 *)(this + 0x1ac) = uVar2;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x160) = uVar1;
  *(undefined4 *)(this + 0x164) = uVar4;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 400) = uVar3;
  *(undefined4 *)(this + 0x194) = uVar4;
  *(undefined4 *)(this + 0x198) = 0;
  return;
}


