/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee250  Symbol: ~Boss702600 */

/* Boss702600::~Boss702600() */

Boss702600 * __thiscall Boss702600::~Boss702600(Boss702600 *this)

{
  int iVar1;
  Boss702600 *pBVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_000ee2b0 + 0xee25c);
  iVar3 = 4;
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  pBVar2 = this;
  do {
    cocos2d::CCObject::release(*(CCObject **)(pBVar2 + 0x110));
    iVar3 = iVar3 + -1;
    cocos2d::CCObject::release(*(CCObject **)(pBVar2 + 0x120));
    pBVar2 = pBVar2 + 4;
  } while (iVar3 != 0);
  KG_Fram_removeChild((CCNode *)this);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


