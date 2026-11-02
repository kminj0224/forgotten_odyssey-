/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001035b8  Symbol: Unit_init_layer */

/* Monster3700::Unit_init_layer() */

Monster3700 * __thiscall Monster3700::Unit_init_layer(Monster3700 *this)

{
  int iVar1;
  void *pvVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCObject *pCVar4;
  undefined4 uVar5;
  CCMutableArray *pCVar6;
  int iVar7;
  char *pcVar8;
  CCObject **ppCVar9;
  Monster3700 *pMVar10;
  
  pvVar2 = operator_new(0x24);
  *(undefined4 *)((int)pvVar2 + 8) = 0x3c;
  *(undefined4 *)((int)pvVar2 + 0xc) = 0x28;
  iVar7 = 0;
  *(undefined4 *)((int)pvVar2 + 0x18) = DAT_001036a4;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar7 + 0x120;
    iVar7 = iVar7 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar7 != 0x10);
  pcVar8 = (char *)(DAT_001036a8 + 0x103602);
  iVar7 = 0;
  Monster_Lode(pcVar8,(char *)(DAT_001036ac + 0x103604),1,7,*(CCAnimate **)(this + 0x110),
               *(CCMutableArray **)(this + 0x120),0);
  Monster_Lode(pcVar8,(char *)(DAT_001036b0 + 0x103622),1,9,*(CCAnimate **)(this + 0x114),
               *(CCMutableArray **)(this + 0x124),1);
  Monster_Lode(pcVar8,(char *)(DAT_001036b4 + 0x10363a),1,9,*(CCAnimate **)(this + 0x118),
               *(CCMutableArray **)(this + 0x128),1);
  Monster_Lode(pcVar8,(char *)(DAT_001036b8 + 0x103652),1,9,*(CCAnimate **)(this + 0x11c),
               *(CCMutableArray **)(this + 300),1);
  pMVar10 = this;
  do {
    pCVar3 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(pMVar10 + 0x120));
    pCVar4 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar9 = (CCObject **)(pMVar10 + 0x110);
    *ppCVar9 = pCVar4;
    pCVar6 = *(CCMutableArray **)(pMVar10 + 0x120);
    iVar7 = iVar7 + 1;
    pMVar10 = pMVar10 + 4;
    uVar5 = __floatunsisf(*(int *)(pCVar6 + 0x18) - *(int *)(pCVar6 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar5,DAT_001036bc);
    *(undefined4 *)(pCVar4 + 0x20) = uVar5;
    cocos2d::CCObject::retain(*ppCVar9);
  } while (iVar7 != 4);
  return this;
}


