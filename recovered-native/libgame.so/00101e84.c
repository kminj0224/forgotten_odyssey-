/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101e84  Symbol: Monster5100 */

/* Monster5100::Monster5100() */

Monster5100 * __thiscall Monster5100::Monster5100(Monster5100 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101eb8 + 0x101e96);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


