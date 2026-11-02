/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a66c  Symbol: init */

/* cocos2d::CCSprite::init() */

undefined4 __thiscall cocos2d::CCSprite::init(CCSprite *this)

{
  int iVar1;
  CCRect *pCVar2;
  CCSprite *pCVar3;
  code *pcVar4;
  float extraout_s0;
  float extraout_s1;
  CCPoint aCStack_20 [12];
  
  this[0x119] = (CCSprite)0x0;
  this[0x118] = (CCSprite)0x0;
  useSelfRender(this);
  this[DAT_0015a774] = (CCSprite)0x1;
  iVar1 = DAT_0015a778;
  this[0x104] = (CCSprite)0xff;
  this[0x1c0] = (CCSprite)0xff;
  this[DAT_0015a77c] = (CCSprite)0xff;
  this[0x1c2] = (CCSprite)0xff;
  this[0x105] = (CCSprite)0xff;
  this[0x106] = (CCSprite)0xff;
  pCVar3 = this + iVar1;
  *pCVar3 = (CCSprite)0xff;
  *(undefined4 *)(pCVar3 + 0x15) = 1;
  *(undefined4 *)(pCVar3 + 0x19) = DAT_0015a780;
  (**(code **)(*(int *)this + 0x114))(this,0);
  memset(this + 0x160,0,0x60);
  this[DAT_0015a784] = (CCSprite)0x0;
  this[0x1c4] = (CCSprite)0x0;
  pcVar4 = *(code **)(*(int *)this + 0x74);
  CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
  (*pcVar4)(this,aCStack_20);
  iVar1 = DAT_0015a788;
  pCVar2 = (CCRect *)(DAT_0015a788 + 0x15a702);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(DAT_0015a788 + 0x15a712);
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(iVar1 + 0x15a716);
  *(undefined4 *)(pCVar3 + 0xd) = 0xf;
  this[0x11a] = (CCSprite)0x0;
  this[0x184] = (CCSprite)0xff;
  this[0x185] = (CCSprite)0xff;
  this[0x186] = (CCSprite)0xff;
  this[0x187] = (CCSprite)0xff;
  this[0x1b4] = (CCSprite)0xff;
  this[0x1b5] = (CCSprite)0xff;
  this[0x1b6] = (CCSprite)0xff;
  this[0x1b7] = (CCSprite)0xff;
  this[0x16c] = (CCSprite)0xff;
  this[0x16d] = (CCSprite)0xff;
  this[0x16e] = (CCSprite)0xff;
  this[0x16f] = (CCSprite)0xff;
  this[0x19c] = (CCSprite)0xff;
  this[0x19d] = (CCSprite)0xff;
  this[0x19e] = (CCSprite)0xff;
  this[0x19f] = (CCSprite)0xff;
  setTextureRectInPixels(this,pCVar2,false,(CCSize *)(iVar1 + 0x15a71a));
  return 1;
}


