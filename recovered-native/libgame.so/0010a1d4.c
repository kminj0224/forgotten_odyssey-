/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a1d4  Symbol: ~Unit9000 */

/* Unit9000::~Unit9000() */

Unit9000 * __thiscall Unit9000::~Unit9000(Unit9000 *this)

{
  int iVar1;
  Unit9000 *pUVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_0010a26c + 0x10a1de);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  iVar3 = DAT_0010a270;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  if (**(int **)(iVar3 + 0x10a204) - 1U < 3) {
    if (*(CCObject **)(this + 0x110) != (CCObject *)0x0) {
      cocos2d::CCObject::release(*(CCObject **)(this + 0x110));
    }
    iVar3 = 0;
    do {
      if (*(CCObject **)(this + iVar3 + 0x120) != (CCObject *)0x0) {
        cocos2d::CCObject::release(*(CCObject **)(this + iVar3 + 0x120));
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != 0x10);
  }
  else {
    iVar3 = 0;
    pUVar2 = this;
    do {
      if (*(CCObject **)(pUVar2 + 0x110) != (CCObject *)0x0) {
        cocos2d::CCObject::release(*(CCObject **)(pUVar2 + 0x110));
      }
      if (*(CCObject **)(pUVar2 + 0x120) != (CCObject *)0x0) {
        cocos2d::CCObject::release(*(CCObject **)(pUVar2 + 0x120));
      }
      iVar3 = iVar3 + 1;
      pUVar2 = pUVar2 + 4;
    } while (iVar3 != 4);
  }
  KG_Fram_removeChild((CCNode *)this);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


