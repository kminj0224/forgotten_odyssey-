/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001003a4  Symbol: ~Monster5510 */

/* Monster5510::~Monster5510() */

Monster5510 * __thiscall Monster5510::~Monster5510(Monster5510 *this)

{
  int iVar1;
  Monster5510 *pMVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_00100404 + 0x1003b0);
  iVar3 = 4;
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  pMVar2 = this;
  do {
    cocos2d::CCObject::release(*(CCObject **)(pMVar2 + 0x110));
    iVar3 = iVar3 + -1;
    cocos2d::CCObject::release(*(CCObject **)(pMVar2 + 0x120));
    pMVar2 = pMVar2 + 4;
  } while (iVar3 != 0);
  KG_Fram_removeChild((CCNode *)this);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


