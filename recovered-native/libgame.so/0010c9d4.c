/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010c9d4  Symbol: Unit_init_layer */

/* Unit::Unit_init_layer() */

Unit * __thiscall Unit::Unit_init_layer(Unit *this)

{
  void *pvVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCSpriteFrame *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  CCAnimation *pCVar6;
  CCMutableArray *pCVar7;
  undefined4 uVar8;
  int iVar9;
  CCMutableArray **ppCVar10;
  char *pcVar11;
  int iVar12;
  CCMutableArray **ppCVar13;
  
  pvVar1 = operator_new(0x24);
  (**(code **)(*(int *)this + 0xac))(this,pvVar1);
  *(undefined4 *)((int)pvVar1 + 0x18) = 0x6e;
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0x3f800000;
  iVar9 = 0;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar12 = iVar9 + 0x120;
    iVar9 = iVar9 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar12) = this_00;
  } while (iVar9 != 0x10);
  pcVar11 = (char *)(DAT_0010cb00 + 0x10ca28);
  Unit_Lode(pcVar11,(char *)(DAT_0010cb04 + 0x10ca2c),1,7,*(CCAnimate **)(this + 0x110),
            *(CCMutableArray **)(this + 0x120));
  Unit_Lode(pcVar11,(char *)(DAT_0010cb08 + 0x10ca44),1,0xd,*(CCAnimate **)(this + 0x114),
            *(CCMutableArray **)(this + 0x124),1);
  Unit_Lode(pcVar11,(char *)(DAT_0010cb0c + 0x10ca5a),1,9,*(CCAnimate **)(this + 0x118),
            *(CCMutableArray **)(this + 0x128),1);
  Unit_Lode(pcVar11,(char *)(DAT_0010cb10 + 0x10ca74),1,8,*(CCAnimate **)(this + 0x11c),
            *(CCMutableArray **)(this + 300),1);
  pCVar2 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar2);
  iVar12 = 0;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar5 = __fixsfsi(*puVar4);
  *(undefined4 *)((int)pvVar1 + 8) = uVar5;
  iVar9 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar5 = __fixsfsi(*(undefined4 *)(iVar9 + 4));
  *(undefined4 *)((int)pvVar1 + 0xc) = uVar5;
  ppCVar10 = (CCMutableArray **)(this + 0x120);
  uVar5 = DAT_0010cb14;
  while( true ) {
    pCVar6 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar10);
    pCVar7 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar6);
    ppCVar10[-4] = pCVar7;
    ppCVar13 = ppCVar10 + 1;
    iVar12 = iVar12 + 1;
    uVar8 = __floatunsisf(*(int *)(*ppCVar10 + 0x18) - *(int *)(*ppCVar10 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar8,uVar5);
    *(undefined4 *)(pCVar7 + 0x20) = uVar5;
    cocos2d::CCObject::retain((CCObject *)ppCVar10[-4]);
    if (iVar12 == 4) break;
    ppCVar10 = ppCVar13;
    uVar5 = DAT_0010cb1c;
    if (iVar12 == 1) {
      uVar5 = DAT_0010cb18;
    }
  }
  return this;
}


