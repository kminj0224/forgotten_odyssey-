/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104270  Symbol: Unit_init_layer */

/* Monster1900::Unit_init_layer() */

Monster1900 * __thiscall Monster1900::Unit_init_layer(Monster1900 *this)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCObject *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCMutableArray *pCVar7;
  int iVar8;
  char *pcVar9;
  CCObject **ppCVar10;
  Monster1900 *pMVar11;
  int local_24;
  
  puVar2 = (undefined4 *)operator_new(0x24);
  *puVar2 = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[2] = 0x50;
  puVar2[3] = 0x28;
  puVar2[6] = DAT_00104384;
  iVar8 = 0;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar8 + 0x120;
    iVar8 = iVar8 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar8 != 0x10);
  pcVar9 = (char *)(DAT_00104388 + 0x1042ca);
  Monster_Lode(pcVar9,(char *)(DAT_0010438c + 0x1042cc),1,5,*(CCAnimate **)(this + 0x110),
               *(CCMutableArray **)(this + 0x120),0);
  Monster_Lode(pcVar9,(char *)(DAT_00104390 + 0x1042ea),1,9,*(CCAnimate **)(this + 0x114),
               *(CCMutableArray **)(this + 0x124),1);
  Monster_Lode(pcVar9,(char *)(DAT_00104394 + 0x104302),1,9,*(CCAnimate **)(this + 0x118),
               *(CCMutableArray **)(this + 0x128),1);
  Monster_Lode(pcVar9,(char *)(DAT_00104398 + 0x10431a),1,9,*(CCAnimate **)(this + 0x11c),
               *(CCMutableArray **)(this + 300),1);
  local_24 = 0;
  pMVar11 = this;
  do {
    uVar6 = DAT_001043a0;
    if (local_24 == 0) {
      uVar6 = DAT_0010439c;
    }
    pCVar3 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(pMVar11 + 0x120));
    pCVar4 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar10 = (CCObject **)(pMVar11 + 0x110);
    *ppCVar10 = pCVar4;
    pCVar7 = *(CCMutableArray **)(pMVar11 + 0x120);
    pMVar11 = pMVar11 + 4;
    uVar5 = __floatunsisf(*(int *)(pCVar7 + 0x18) - *(int *)(pCVar7 + 0x14) >> 2);
    uVar6 = __mulsf3(uVar5,uVar6);
    *(undefined4 *)(pCVar4 + 0x20) = uVar6;
    cocos2d::CCObject::retain(*ppCVar10);
    local_24 = local_24 + 1;
  } while (local_24 != 4);
  return this;
}


