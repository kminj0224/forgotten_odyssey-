/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee958  Symbol: Boss702600 */

/* Boss702600::Boss702600() */

Boss702600 * __thiscall Boss702600::Boss702600(Boss702600 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000ee98c + 0xee96a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


