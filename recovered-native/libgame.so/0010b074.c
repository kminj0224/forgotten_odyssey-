/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010b074  Symbol: ~Unit3 */

/* Unit3::~Unit3() */

Unit3 * __thiscall Unit3::~Unit3(Unit3 *this)

{
  CCMutableArray<cocos2d::CCSpriteFrame*> *pCVar1;
  int iVar2;
  Unit3 *pUVar3;
  int iVar4;
  
  iVar2 = *(int *)(DAT_0010b11c + 0x10b07e);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x13c;
  *(int *)(this + 0x104) = iVar2 + 0x178;
  iVar4 = DAT_0010b120;
  *(int *)(this + 0x100) = iVar2 + 0x16c;
  if (**(int **)(iVar4 + 0x10b0a4) - 1U < 3) {
    if (*(CCObject **)(this + 0x110) != (CCObject *)0x0) {
      cocos2d::CCObject::release(*(CCObject **)(this + 0x110));
    }
    iVar4 = 0;
    do {
      pCVar1 = *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar4 + 0x120);
      if (pCVar1 != (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
        cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects(pCVar1,true);
        cocos2d::CCObject::release(*(CCObject **)(this + iVar4 + 0x120));
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != 0x10);
  }
  else {
    iVar4 = 0;
    pUVar3 = this;
    do {
      if (*(CCObject **)(pUVar3 + 0x110) != (CCObject *)0x0) {
        cocos2d::CCObject::release(*(CCObject **)(pUVar3 + 0x110));
      }
      pCVar1 = *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(pUVar3 + 0x120);
      if (pCVar1 != (CCMutableArray<cocos2d::CCSpriteFrame*> *)0x0) {
        cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects(pCVar1,true);
        cocos2d::CCObject::release(*(CCObject **)(pUVar3 + 0x120));
      }
      iVar4 = iVar4 + 1;
      pUVar3 = pUVar3 + 4;
    } while (iVar4 != 4);
  }
  KG_Fram_removeChild((CCNode *)this);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


