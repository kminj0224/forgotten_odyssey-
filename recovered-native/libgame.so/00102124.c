/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00102124  Symbol: Monster8020 */

/* Monster8020::Monster8020() */

Monster8020 * __thiscall Monster8020::Monster8020(Monster8020 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00102158 + 0x102136);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


