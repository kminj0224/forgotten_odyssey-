/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010207c  Symbol: Monster5510 */

/* Monster5510::Monster5510() */

Monster5510 * __thiscall Monster5510::Monster5510(Monster5510 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_001020b0 + 0x10208e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


