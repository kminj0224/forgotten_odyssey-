/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101c1c  Symbol: Monster2000 */

/* Monster2000::Monster2000() */

Monster2000 * __thiscall Monster2000::Monster2000(Monster2000 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101c50 + 0x101c2e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


