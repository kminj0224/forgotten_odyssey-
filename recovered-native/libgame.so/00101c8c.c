/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101c8c  Symbol: Monster2200 */

/* Monster2200::Monster2200() */

Monster2200 * __thiscall Monster2200::Monster2200(Monster2200 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101cc0 + 0x101c9e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


