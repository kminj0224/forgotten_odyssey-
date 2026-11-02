/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101024  Symbol: ~Monster */

/* Monster::~Monster() */

undefined8 __thiscall Monster::~Monster(Monster *this)

{
  int iVar1;
  CCObject *pCVar2;
  CCObject **ppCVar3;
  Monster *local_20;
  int local_1c;
  
  iVar1 = *(int *)(DAT_001010a4 + 0x101030);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  local_1c = 4;
  local_20 = this;
  do {
    cocos2d::CCObject::release(*(CCObject **)(local_20 + 0x110));
    pCVar2 = *(CCObject **)(local_20 + 0x120);
    for (ppCVar3 = *(CCObject ***)(pCVar2 + 0x14); ppCVar3 != *(CCObject ***)(pCVar2 + 0x18);
        ppCVar3 = ppCVar3 + 1) {
      cocos2d::CCObject::release(*ppCVar3);
    }
    *(undefined4 *)(pCVar2 + 0x18) = *(undefined4 *)(pCVar2 + 0x14);
    cocos2d::CCObject::release(*(CCObject **)(local_20 + 0x120));
    local_1c = local_1c + -1;
    local_20 = local_20 + 4;
  } while (local_1c != 0);
  KG_Fram_removeChild((CCNode *)this);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return CONCAT44(local_20,this);
}


