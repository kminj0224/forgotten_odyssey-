/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001020b4  Symbol: Monster8000 */

/* Monster8000::Monster8000() */

Monster8000 * __thiscall Monster8000::Monster8000(Monster8000 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_001020e8 + 0x1020c6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


