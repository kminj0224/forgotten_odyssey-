/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00102194  Symbol: Monster9000 */

/* Monster9000::Monster9000() */

Monster9000 * __thiscall Monster9000::Monster9000(Monster9000 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_001021c8 + 0x1021a6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


