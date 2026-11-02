/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ffb0c  Symbol: ~Monster3100 */

/* Monster3100::~Monster3100() */

Monster3100 * __thiscall Monster3100::~Monster3100(Monster3100 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ffb40 + 0xffb16);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


