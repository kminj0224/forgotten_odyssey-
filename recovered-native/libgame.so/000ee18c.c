/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee18c  Symbol: ~Boss16000 */

/* Boss16000::~Boss16000() */

Boss16000 * __thiscall Boss16000::~Boss16000(Boss16000 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ee1c0 + 0xee196);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


