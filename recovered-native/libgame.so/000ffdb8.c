/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ffdb8  Symbol: ~Monster3600 */

/* Monster3600::~Monster3600() */

Monster3600 * __thiscall Monster3600::~Monster3600(Monster3600 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ffdec + 0xffdc2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


