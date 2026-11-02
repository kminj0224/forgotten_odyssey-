/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001037d8  Symbol: Unit_init_layer */

/* Monster2900::Unit_init_layer() */

Monster2900 * __thiscall Monster2900::Unit_init_layer(Monster2900 *this)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCObject *pCVar4;
  undefined4 uVar5;
  CCMutableArray *pCVar6;
  int iVar7;
  char *pcVar8;
  CCObject **ppCVar9;
  Monster2900 *pMVar10;
  int local_20;
  
  puVar2 = (undefined4 *)operator_new(0x24);
  *puVar2 = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[2] = 0x3c;
  puVar2[3] = 0x28;
  puVar2[6] = DAT_001038e4;
  puVar2[7] = 0x3f800000;
  iVar7 = 0;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar7 + 0x120;
    iVar7 = iVar7 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar7 != 0x10);
  pcVar8 = (char *)(DAT_001038e8 + 0x103838);
  Monster_Lode(pcVar8,(char *)(DAT_001038ec + 0x10383a),1,7,*(CCAnimate **)(this + 0x110),
               *(CCMutableArray **)(this + 0x120),0);
  Monster_Lode(pcVar8,(char *)(DAT_001038f0 + 0x103858),1,9,*(CCAnimate **)(this + 0x114),
               *(CCMutableArray **)(this + 0x124),1);
  Monster_Lode(pcVar8,(char *)(DAT_001038f4 + 0x103870),1,9,*(CCAnimate **)(this + 0x118),
               *(CCMutableArray **)(this + 0x128),1);
  Monster_Lode(pcVar8,(char *)(DAT_001038f8 + 0x103888),1,9,*(CCAnimate **)(this + 0x11c),
               *(CCMutableArray **)(this + 300),1);
  local_20 = 0;
  pMVar10 = this;
  do {
    pCVar3 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(pMVar10 + 0x120));
    pCVar4 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar9 = (CCObject **)(pMVar10 + 0x110);
    *ppCVar9 = pCVar4;
    pCVar6 = *(CCMutableArray **)(pMVar10 + 0x120);
    pMVar10 = pMVar10 + 4;
    uVar5 = __floatunsisf(*(int *)(pCVar6 + 0x18) - *(int *)(pCVar6 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar5,DAT_001038fc);
    *(undefined4 *)(pCVar4 + 0x20) = uVar5;
    cocos2d::CCObject::retain(*ppCVar9);
    local_20 = local_20 + 1;
  } while (local_20 != 4);
  return this;
}


