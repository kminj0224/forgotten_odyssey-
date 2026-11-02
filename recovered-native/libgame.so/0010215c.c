/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010215c  Symbol: Monster8030 */

/* Monster8030::Monster8030() */

Monster8030 * __thiscall Monster8030::Monster8030(Monster8030 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00102190 + 0x10216e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


