/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101be4  Symbol: Monster1900 */

/* Monster1900::Monster1900() */

Monster1900 * __thiscall Monster1900::Monster1900(Monster1900 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101c18 + 0x101bf6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


