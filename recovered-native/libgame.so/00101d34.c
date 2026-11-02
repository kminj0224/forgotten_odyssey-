/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101d34  Symbol: Monster2600 */

/* Monster2600::Monster2600() */

Monster2600 * __thiscall Monster2600::Monster2600(Monster2600 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101d68 + 0x101d46);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


