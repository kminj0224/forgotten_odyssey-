/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee920  Symbol: Boss16000 */

/* Boss16000::Boss16000() */

Boss16000 * __thiscall Boss16000::Boss16000(Boss16000 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000ee954 + 0xee932);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


