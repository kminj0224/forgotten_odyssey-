/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010be54  Symbol: Unit_init_layer */

/* Unit3::Unit_init_layer() */

Unit3 * __thiscall Unit3::Unit_init_layer(Unit3 *this)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCMutableArray *pCVar4;
  undefined4 uVar5;
  CCSpriteFrame *pCVar6;
  CCActionInterval *this_01;
  CCAction *pCVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  CCMutableArray **ppCVar11;
  code *pcVar12;
  char *pcVar13;
  CCMutableArray **ppCVar14;
  float extraout_s0;
  undefined8 uVar15;
  float extraout_s1;
  undefined4 local_40;
  int local_3c;
  CCPoint aCStack_28 [8];
  CCPoint local_20;
  int local_1c;
  
  puVar2 = (undefined4 *)operator_new(0x24);
  iVar10 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[6] = 0xa0;
  puVar2[7] = 0x3f800000;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar10 + 0x120;
    iVar10 = iVar10 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar10 != 0x10);
  piVar9 = *(int **)(DAT_0010c080 + 0x10bea4);
  *(undefined4 *)(this + 0x110) = 0;
  iVar10 = *piVar9;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  if (iVar10 - 1U < 3) {
    Unit_Lode((char *)(DAT_0010c098 + 0x10bf38),(char *)(DAT_0010c09c + 0x10bf3c),1,7,
              (CCAnimate *)0x0,*(CCMutableArray **)(this + 0x120),6);
    local_3c = 1;
  }
  else {
    pcVar13 = (char *)(DAT_0010c084 + 0x10bec4);
    Unit_Lode(pcVar13,(char *)(DAT_0010c088 + 0x10bec8),1,7,(CCAnimate *)0x0,
              *(CCMutableArray **)(this + 0x120),6);
    Unit_Lode(pcVar13,(char *)(DAT_0010c08c + 0x10bee2),1,9,*(CCAnimate **)(this + 0x114),
              *(CCMutableArray **)(this + 0x124),6);
    Unit_Lode(pcVar13,(char *)(DAT_0010c090 + 0x10befc),1,9,*(CCAnimate **)(this + 0x118),
              *(CCMutableArray **)(this + 0x128),6);
    Unit_Lode(pcVar13,(char *)(DAT_0010c094 + 0x10bf16),1,8,*(CCAnimate **)(this + 0x11c),
              *(CCMutableArray **)(this + 300),6);
    local_3c = 4;
  }
  iVar10 = 0;
  ppCVar11 = (CCMutableArray **)(this + 0x120);
  local_40 = DAT_0010c0a0;
  while( true ) {
    pCVar3 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames(*ppCVar11);
    pCVar4 = (CCMutableArray *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    ppCVar11[-4] = pCVar4;
    ppCVar14 = ppCVar11 + 1;
    iVar10 = iVar10 + 1;
    uVar5 = __floatunsisf(*(int *)(*ppCVar11 + 0x18) - *(int *)(*ppCVar11 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar5,local_40);
    *(undefined4 *)(pCVar4 + 0x20) = uVar5;
    uVar15 = cocos2d::CCObject::retain((CCObject *)ppCVar11[-4]);
    if (local_3c <= iVar10) break;
    ppCVar11 = ppCVar14;
    local_40 = DAT_0010c0a8;
    if (iVar10 == 1) {
      local_40 = DAT_0010c0a4;
    }
  }
  if (*piVar9 == 1) {
    pCVar6 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
    piVar9 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    pcVar12 = *(code **)(*piVar9 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0,extraout_s1);
    (*pcVar12)(piVar9,aCStack_28);
    if (*(char *)(**(int **)(DAT_0010c0ac + 0x10bfce) + **(int **)(DAT_0010c0b0 + 0x10bfd6) * 9 +
                 DAT_0010c0b4) == '\0') {
      (**(code **)(*piVar9 + 0xf4))(piVar9);
    }
    (**(code **)(*(int *)this + 0xcc))(this,piVar9,1,1);
    this_01 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar7 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_01);
    cocos2d::CCNode::runAction((CCNode *)piVar9,pCVar7);
    cocos2d::CCObject::release((CCObject *)this_01);
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20))
    ;
    vDrawImage((CCNode *)this,(char *)(DAT_0010c0b8 + 0x10c040),local_20,local_1c,0);
  }
  pCVar6 = (CCSpriteFrame *)FUN_0010a482(*(undefined4 *)(this + 0x120));
  piVar9 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
  puVar8 = (undefined4 *)(**(code **)(*piVar9 + 0x7c))();
  uVar5 = __fixsfsi(*puVar8);
  puVar2[2] = uVar5;
  iVar10 = (**(code **)(*piVar9 + 0x7c))(piVar9);
  uVar5 = __fixsfsi(*(undefined4 *)(iVar10 + 4));
  puVar2[3] = uVar5;
  return this;
}


