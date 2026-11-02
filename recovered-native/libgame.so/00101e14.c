/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101e14  Symbol: Monster3600 */

/* Monster3600::Monster3600() */

Monster3600 * __thiscall Monster3600::Monster3600(Monster3600 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101e48 + 0x101e26);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


