/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010b620  Symbol: Unit_init_layer */

/* Unit9000::Unit_init_layer() */

Unit9000 * __thiscall Unit9000::Unit_init_layer(Unit9000 *this)

{
  undefined4 *puVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar2;
  CCMutableArray *pCVar3;
  undefined4 uVar4;
  CCSpriteFrame *pCVar5;
  int *piVar6;
  undefined4 *puVar7;
  Unit9000 *pUVar8;
  CCMutableArray **ppCVar9;
  int iVar10;
  char *pcVar11;
  CCMutableArray **ppCVar12;
  undefined4 local_20;
  
  puVar1 = (undefined4 *)operator_new(0x24);
  iVar10 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar1);
  puVar1[6] = 0x104;
  puVar1[7] = 0x3f800000;
  pUVar8 = this;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar10 = iVar10 + 1;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(pUVar8 + 0x120) = this_00;
    *(undefined4 *)(pUVar8 + 0x110) = 0;
    pUVar8 = pUVar8 + 4;
  } while (iVar10 != 4);
  pcVar11 = (char *)(DAT_0010b770 + 0x10b68a);
  Unit_Lode(pcVar11,(char *)(DAT_0010b774 + 0x10b692),1,7,*(CCAnimate **)(this + 0x110),
            *(CCMutableArray **)(this + 0x120),5);
  Unit_Lode(pcVar11,(char *)(DAT_0010b778 + 0x10b6aa),1,9,*(CCAnimate **)(this + 0x114),
            *(CCMutableArray **)(this + 0x124),5);
  Unit_Lode(pcVar11,(char *)(DAT_0010b77c + 0x10b6c2),1,9,*(CCAnimate **)(this + 0x118),
            *(CCMutableArray **)(this + 0x128),5);
  Unit_Lode(pcVar11,(char *)(DAT_0010b780 + 0x10b6e6),1,8,*(CCAnimate **)(this + 0x11c),
            *(CCMutableArray **)(this + 300),5);
  iVar10 = 0;
  ppCVar9 = (CCMutableArray **)(this + 0x120);
  local_20 = DAT_0010b784;
  while( true ) {
    pCVar2 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar9);
    pCVar3 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar2);
    ppCVar9[-4] = pCVar3;
    ppCVar12 = ppCVar9 + 1;
    iVar10 = iVar10 + 1;
    uVar4 = __floatunsisf(*(int *)(*ppCVar9 + 0x18) - *(int *)(*ppCVar9 + 0x14) >> 2);
    uVar4 = __mulsf3(uVar4,local_20);
    *(undefined4 *)(pCVar3 + 0x20) = uVar4;
    cocos2d::CCObject::retain((CCObject *)ppCVar9[-4]);
    if (iVar10 == 4) break;
    ppCVar9 = ppCVar12;
    local_20 = DAT_0010b78c;
    if (iVar10 == 1) {
      local_20 = DAT_0010b788;
    }
  }
  pCVar5 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
  piVar6 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar5);
  puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
  uVar4 = __fixsfsi(*puVar7);
  puVar1[2] = uVar4;
  iVar10 = (**(code **)(*piVar6 + 0x7c))(piVar6);
  uVar4 = __fixsfsi(*(undefined4 *)(iVar10 + 4));
  puVar1[3] = uVar4;
  return this;
}


