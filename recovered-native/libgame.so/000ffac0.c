/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ffac0  Symbol: ~Monster3000 */

/* Monster3000::~Monster3000() */

Monster3000 * __thiscall Monster3000::~Monster3000(Monster3000 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000ffaf4 + 0xffaca);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


