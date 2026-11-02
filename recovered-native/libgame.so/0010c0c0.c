/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010c0c0  Symbol: Unit_init_layer */

/* Unit2::Unit_init_layer() */

Unit2 * __thiscall Unit2::Unit_init_layer(Unit2 *this)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCMutableArray *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCSpriteFrame *pCVar7;
  CCActionInterval *this_01;
  CCAction *pCVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  CCMutableArray **ppCVar12;
  code *pcVar13;
  char *pcVar14;
  CCMutableArray **ppCVar15;
  float extraout_s0;
  undefined8 uVar16;
  float extraout_s1;
  int local_3c;
  CCPoint aCStack_28 [8];
  CCPoint local_20;
  int local_1c;
  
  puVar2 = (undefined4 *)operator_new(0x24);
  iVar11 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[6] = 0x82;
  puVar2[7] = 0x3f800000;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar11 + 0x120;
    iVar11 = iVar11 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar11 != 0x10);
  piVar10 = *(int **)(DAT_0010c2e8 + 0x10c114);
  *(undefined4 *)(this + 0x110) = 0;
  iVar11 = *piVar10;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if (iVar11 - 1U < 3) {
    Unit_Lode((char *)(DAT_0010c300 + 0x10c1a0),(char *)(DAT_0010c304 + 0x10c1a2),1,7,
              (CCAnimate *)0x0,*(CCMutableArray **)(this + 0x120),1);
    local_3c = 1;
  }
  else {
    pcVar14 = (char *)(DAT_0010c2ec + 0x10c134);
    Unit_Lode(pcVar14,(char *)(DAT_0010c2f0 + 0x10c136),1,7,(CCAnimate *)0x0,
              *(CCMutableArray **)(this + 0x120),1);
    Unit_Lode(pcVar14,(char *)(DAT_0010c2f4 + 0x10c152),1,9,*(CCAnimate **)(this + 0x114),
              *(CCMutableArray **)(this + 0x124),1);
    Unit_Lode(pcVar14,(char *)(DAT_0010c2f8 + 0x10c16a),1,9,*(CCAnimate **)(this + 0x118),
              *(CCMutableArray **)(this + 0x128),1);
    Unit_Lode(pcVar14,(char *)(DAT_0010c2fc + 0x10c182),1,8,*(CCAnimate **)(this + 0x11c),
              *(CCMutableArray **)(this + 300),1);
    local_3c = 4;
  }
  iVar11 = 0;
  ppCVar12 = (CCMutableArray **)(this + 0x120);
  uVar6 = DAT_0010c308;
  while( true ) {
    pCVar3 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar12);
    pCVar4 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar12[-4] = pCVar4;
    ppCVar15 = ppCVar12 + 1;
    iVar11 = iVar11 + 1;
    uVar5 = __floatunsisf(*(int *)(*ppCVar12 + 0x18) - *(int *)(*ppCVar12 + 0x14) >> 2);
    uVar6 = __mulsf3(uVar5,uVar6);
    *(undefined4 *)(pCVar4 + 0x20) = uVar6;
    uVar16 = cocos2d::CCObject::retain((CCObject *)ppCVar12[-4]);
    if (local_3c <= iVar11) break;
    ppCVar12 = ppCVar15;
    uVar6 = DAT_0010c310;
    if (iVar11 == 1) {
      uVar6 = DAT_0010c30c;
    }
  }
  if (*piVar10 == 1) {
    pCVar7 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
    piVar10 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar7);
    pcVar13 = *(code **)(*piVar10 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0,extraout_s1);
    (*pcVar13)(piVar10,aCStack_28);
    if (*(char *)(**(int **)(DAT_0010c314 + 0x10c232) + **(int **)(DAT_0010c318 + 0x10c23a) * 9 +
                 DAT_0010c31c) == '\0') {
      (**(code **)(*piVar10 + 0xf4))(piVar10);
    }
    (**(code **)(*(int *)this + 0xcc))(this,piVar10,1,1);
    this_01 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_01);
    cocos2d::CCNode::runAction((CCNode *)piVar10,pCVar8);
    cocos2d::CCObject::release((CCObject *)this_01);
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20))
    ;
    vDrawImage((CCNode *)this,(char *)(DAT_0010c320 + 0x10c2a4),local_20,local_1c,0);
  }
  pCVar7 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
  piVar10 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar7);
  puVar9 = (undefined4 *)(**(code **)(*piVar10 + 0x7c))();
  uVar6 = __fixsfsi(*puVar9);
  puVar2[2] = uVar6;
  iVar11 = (**(code **)(*piVar10 + 0x7c))(piVar10);
  uVar6 = __fixsfsi(*(undefined4 *)(iVar11 + 4));
  puVar2[3] = uVar6;
  return this;
}


