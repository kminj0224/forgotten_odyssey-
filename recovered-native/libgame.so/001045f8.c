/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001045f8  Symbol: ~SiegeTank9000 */

/* SiegeTank9000::~SiegeTank9000() */

SiegeTank9000 * __thiscall SiegeTank9000::~SiegeTank9000(SiegeTank9000 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0010462c + 0x104602);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


