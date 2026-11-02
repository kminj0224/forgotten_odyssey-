/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f0c98  Symbol: Effect_Draw */

/* Effect::Effect_Draw(cocos2d::CCLayer*, int, int, int, int, bool) */

void __thiscall
Effect::Effect_Draw(Effect *this,CCLayer *param_1,int param_2,int param_3,int param_4,int param_5,
                   bool param_6)

{
  CCNode *pCVar1;
  int *piVar2;
  CCTexture2D *pCVar3;
  CCSprite *pCVar4;
  int iVar5;
  CCSpriteFrame *pCVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CCArray *pCVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  CCObject *this_00;
  CCPoint *pCVar15;
  Effect *pEVar16;
  CCNode **ppCVar17;
  code *pcVar18;
  bool bVar19;
  bool bVar20;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar21;
  undefined8 uVar22;
  int iVar23;
  CCNode **local_e0;
  uint local_dc;
  Effect *local_d4;
  uint local_cc;
  CCNode **local_c4;
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  local_e0 = (CCNode **)(DAT_000f1048 + 0xf0caa);
  if (param_6) {
    pCVar1 = (CCNode *)
             cocos2d::CCNode::getChildByTag(**(CCNode ***)((int)local_e0 + DAT_000f104c),1000);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
    pCVar4 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
    iVar5 = __floatsisf(param_3);
    Effect_Body_Draw(this,param_1,pCVar4,extraout_s0,iVar5,param_4,DAT_000f1050,7);
  }
  pEVar16 = this + 0xfc;
  iVar5 = *(int *)(this + 0x110);
  if (10 < iVar5) {
    FUN_000f1a10();
  }
  if (param_2 != 0) {
    *(int *)(pEVar16 + 0x14) = iVar5 + 1;
  }
  if (((param_2 == 0x104) || (param_2 == 1)) || (uVar7 = 0, param_2 == 5)) {
    param_2 = (int)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)param_2);
    pcVar18 = *(code **)(*(int *)param_2 + 0x3c);
    __floatsisf(param_3);
    uVar22 = __floatsisf(param_4);
    cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*pcVar18)(param_2,aCStack_b8);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)param_2);
    param_1 = (CCLayer *)(this + 0xfc);
    pCVar6 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 300),0);
    uVar7 = cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,uVar7,0,0);
    param_3 = cocos2d::CCObject::copy();
    FUN_000f1a04(uVar7);
  }
  if ((int *)param_2 == DAT_000f1054) {
    param_2 = (int)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)param_2);
    local_e0 = *(CCNode ***)(*(int *)param_2 + 0x3c);
    __floatsisf(param_3);
    uVar22 = __floatsisf(param_4);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*(code *)local_e0)(param_2,aCStack_b0);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)param_2);
    pCVar6 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x124),uVar7);
    local_dc = cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,local_dc,uVar7,uVar7);
LAB_000f0e90:
    param_1 = (CCLayer *)(this + 0xfc);
    param_3 = cocos2d::CCObject::copy();
    FUN_000f1a04(local_dc);
  }
  else if ((int *)param_2 == DAT_000f1058) {
    param_2 = (int)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)param_2);
    local_e0 = *(CCNode ***)(*(int *)param_2 + 0x3c);
    __floatsisf(param_3);
    uVar22 = __floatsisf(param_4);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*(code *)local_e0)(param_2,aCStack_a8);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)param_2);
    pCVar6 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x11c),uVar7);
    local_dc = cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,local_dc,uVar7,uVar7);
    goto LAB_000f0e90;
  }
  if ((int *)param_2 == (int *)0x2) {
    param_2 = (int)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)param_2);
    local_d4 = *(Effect **)(*(int *)param_2 + 0x3c);
    __floatsisf(param_3);
    uVar22 = __floatsisf(param_4);
    cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*(code *)local_d4)(param_2,aCStack_a0);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)param_2);
    local_e0 = *(CCNode ***)((int)local_e0 + DAT_000f104c);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_e0,1000);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0xd);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,uVar7);
    pCVar11 = (CCArray *)(**(code **)(*piVar2 + 0x58))();
    param_3 = (int)local_e0;
    for (; uVar8 = cocos2d::CCArray::count(pCVar11), uVar7 < uVar8; uVar7 = uVar7 + 1) {
      piVar2 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,uVar7);
      pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
      param_1 = (CCLayer *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
      pcVar18 = *(code **)(*(int *)param_1 + 0x3c);
      ppCVar17 = (CCNode **)(**(code **)(*piVar2 + 0x38))(piVar2);
      local_d4 = (Effect *)*ppCVar17;
      uVar22 = (**(code **)(*piVar2 + 0x38))(piVar2);
      cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar18)(param_1,aCStack_98);
      pcVar18 = *(code **)(*(int *)param_1 + 0xec);
      uVar9 = (**(code **)(*piVar2 + 0xe8))(piVar2);
      (*pcVar18)(param_1,uVar9);
      pcVar18 = *(code **)(*(int *)param_1 + 0x2c);
      uVar9 = (**(code **)(*piVar2 + 0x28))(piVar2);
      (*pcVar18)(param_1,uVar9);
      pcVar18 = *(code **)(*(int *)param_1 + 0x34);
      uVar9 = (**(code **)(*piVar2 + 0x30))(piVar2);
      (*pcVar18)(param_1,uVar9);
      param_3 = *(undefined4 *)(*(int *)param_2 + 0xcc);
      (*(code *)param_3)(param_2,param_1,uVar7,uVar7);
    }
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_e0,1000);
    iVar5 = 0xd;
LAB_000f1110:
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar5);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    puVar13 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
    FUN_000f1962(param_2,*(undefined4 *)*puVar13);
  }
  else {
    local_d4 = this;
    if ((int *)param_2 == (int *)0x6) {
      param_2 = (int)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)param_2);
      local_d4 = *(Effect **)(*(int *)param_2 + 0x3c);
      __floatsisf(param_3);
      uVar22 = __floatsisf(param_4);
      cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*(code *)local_d4)(param_2,aCStack_90);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)param_2);
      local_e0 = *(CCNode ***)((int)local_e0 + DAT_000f104c);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_e0,1000);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0xe);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,uVar7);
      pCVar11 = (CCArray *)(**(code **)(*piVar2 + 0x58))();
      param_3 = (int)local_e0;
      for (; uVar8 = cocos2d::CCArray::count(pCVar11), uVar7 < uVar8; uVar7 = uVar7 + 1) {
        piVar2 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,uVar7);
        pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
        param_1 = (CCLayer *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
        pcVar18 = *(code **)(*(int *)param_1 + 0x3c);
        ppCVar17 = (CCNode **)(**(code **)(*piVar2 + 0x38))(piVar2);
        local_d4 = (Effect *)*ppCVar17;
        uVar22 = (**(code **)(*piVar2 + 0x38))(piVar2);
        cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
        (*pcVar18)(param_1,aCStack_88);
        pcVar18 = *(code **)(*(int *)param_1 + 0xec);
        uVar9 = (**(code **)(*piVar2 + 0xe8))(piVar2);
        (*pcVar18)(param_1,uVar9);
        pcVar18 = *(code **)(*(int *)param_1 + 0x2c);
        uVar9 = (**(code **)(*piVar2 + 0x28))(piVar2);
        (*pcVar18)(param_1,uVar9);
        pcVar18 = *(code **)(*(int *)param_1 + 0x34);
        uVar9 = (**(code **)(*piVar2 + 0x30))(piVar2);
        (*pcVar18)(param_1,uVar9);
        param_3 = *(undefined4 *)(*(int *)param_2 + 0xcc);
        (*(code *)param_3)(param_2,param_1,uVar7,uVar7);
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_e0,1000);
      iVar5 = 0xe;
      goto LAB_000f1110;
    }
  }
  if (((int *)param_2 == (int *)0x78) || ((int *)param_2 == (int *)0x6e)) {
    param_2 = (int)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)param_2);
    pcVar18 = *(code **)(*(int *)param_2 + 0x3c);
    __floatsisf(param_3);
    uVar22 = __floatsisf(param_4 + 0x32);
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*pcVar18)(param_2,aCStack_80);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)param_2);
    pCVar6 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(local_d4 + 300),0);
    param_1 = (CCLayer *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
    pcVar18 = *(code **)(*(int *)param_1 + 0x24);
    Random(0,10);
    uVar9 = __floatsisf();
    (*pcVar18)(param_1,uVar9);
    param_3 = *(undefined4 *)(*(int *)param_2 + 0xcc);
    (*(code *)param_3)(param_2,param_1,0,0);
    FUN_000f19fc(*(undefined4 *)(local_d4 + 0x130));
  }
  if ((int *)param_2 == (int *)0x6f) {
    piVar2 = (int *)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
    pcVar18 = *(code **)(*piVar2 + 0x3c);
    local_cc = __floatsisf(param_3);
    uVar22 = __floatsisf(param_4);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*pcVar18)(piVar2,aCStack_78);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)piVar2);
    ppCVar17 = *(CCNode ***)((int)local_e0 + DAT_000f15d4);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,1000);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0x6e);
    piVar14 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    pCVar11 = (CCArray *)(**(code **)(*piVar14 + 0x58))();
    for (local_e0 = (CCNode **)0x0; uVar7 = cocos2d::CCArray::count(pCVar11), local_e0 < uVar7;
        local_e0 = (CCNode **)((int)local_e0 + 1)) {
      piVar14 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,(uint)local_e0);
      pCVar3 = (CCTexture2D *)(**(code **)(*piVar14 + 0x118))();
      piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
      pcVar18 = *(code **)(*piVar12 + 0x3c);
      (**(code **)(*piVar14 + 0x38))(piVar14);
      uVar22 = (**(code **)(*piVar14 + 0x38))(piVar14);
      cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar18)(piVar12,aCStack_70);
      pcVar18 = *(code **)(*piVar12 + 0xec);
      uVar9 = (**(code **)(*piVar14 + 0xe8))(piVar14);
      (*pcVar18)(piVar12,uVar9);
      pcVar18 = *(code **)(*piVar12 + 0x2c);
      uVar9 = (**(code **)(*piVar14 + 0x28))(piVar14);
      (*pcVar18)(piVar12,uVar9);
      pcVar18 = *(code **)(*piVar12 + 0x34);
      uVar9 = (**(code **)(*piVar14 + 0x30))(piVar14);
      (*pcVar18)(piVar12,uVar9);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar12,local_e0,local_e0);
    }
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,1000);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0x6e);
    piVar14 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    puVar13 = (undefined4 *)(**(code **)(*piVar14 + 0xa8))();
    ani_Effect_ani((CCLayer *)piVar2,*(_KG_Anit **)*puVar13);
    if (!param_6) {
      FUN_000f1a10();
      return;
    }
    pCVar1 = *ppCVar17;
  }
  else {
    if ((int *)param_2 == (int *)0x3) {
      piVar2 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
      pcVar18 = *(code **)(*piVar2 + 0x3c);
      iVar5 = __floatsisf(param_3);
      uVar22 = __floatsisf(param_4);
      cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar18)(piVar2,aCStack_68);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,0x300 - param_4,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)piVar2);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)local_d4,5);
      piVar14 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      pCVar11 = (CCArray *)(**(code **)(*piVar14 + 0x58))();
      for (local_cc = 0; uVar7 = cocos2d::CCArray::count(pCVar11), local_cc < uVar7;
          local_cc = local_cc + 1) {
        piVar14 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,local_cc);
        pCVar3 = (CCTexture2D *)(**(code **)(*piVar14 + 0x118))();
        piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
        pcVar18 = *(code **)(*piVar12 + 0x3c);
        uVar9 = (**(code **)(*piVar14 + 0x38))(piVar14);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0xec);
        uVar9 = (**(code **)(*piVar14 + 0xe8))(piVar14);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0x2c);
        uVar9 = (**(code **)(*piVar14 + 0x28))(piVar14);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0x34);
        uVar9 = (**(code **)(*piVar14 + 0x30))(piVar14);
        (*pcVar18)(piVar12,uVar9);
        (**(code **)(*piVar2 + 0xcc))(piVar2,piVar12,local_cc,local_cc);
      }
      ppCVar17 = *(CCNode ***)((int)local_e0 + DAT_000f15d4);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,1000);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,5);
      piVar14 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      puVar13 = (undefined4 *)(**(code **)(*piVar14 + 0xa8))();
      ani_Effect_ani((CCLayer *)piVar2,*(_KG_Anit **)*puVar13);
      if (!param_6) {
        FUN_000f1a10();
        return;
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,1000);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
      pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
      pCVar4 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
      fVar21 = extraout_s0_00;
      iVar23 = DAT_000f15d8;
      goto LAB_000f1794;
    }
    if ((int *)param_2 == (int *)0xa0) {
      piVar14 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)piVar14);
      pcVar18 = *(code **)(*piVar14 + 0x3c);
      local_cc = __floatsisf(param_3);
      uVar22 = __floatsisf(param_4);
      cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar18)(piVar14,aCStack_60);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar14,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)piVar14);
      local_c4 = *(CCNode ***)((int)local_e0 + DAT_000f15d4);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_c4,1000);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,3);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      pCVar11 = (CCArray *)(**(code **)(*piVar2 + 0x58))();
      for (local_e0 = (CCNode **)0x0; uVar7 = cocos2d::CCArray::count(pCVar11), local_e0 < uVar7;
          local_e0 = (CCNode **)((int)local_e0 + 1)) {
        piVar2 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,(uint)local_e0);
        pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
        piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
        pcVar18 = *(code **)(*piVar12 + 0x3c);
        (**(code **)(*piVar2 + 0x38))(piVar2);
        uVar22 = (**(code **)(*piVar2 + 0x38))(piVar2);
        cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
        (*pcVar18)(piVar12,aCStack_58);
        pcVar18 = *(code **)(*piVar12 + 0xec);
        uVar9 = (**(code **)(*piVar2 + 0xe8))(piVar2);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0x2c);
        uVar9 = (**(code **)(*piVar2 + 0x28))(piVar2);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0x34);
        uVar9 = (**(code **)(*piVar2 + 0x30))(piVar2);
        (*pcVar18)(piVar12,uVar9);
        (**(code **)(*piVar14 + 0xcc))(piVar14,piVar12,local_e0,local_e0);
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_c4,1000);
      iVar5 = 3;
    }
    else {
      if ((int *)param_2 != (int *)0xb4) {
        bVar19 = (CCLayer *)(param_2 + DAT_000f1970) != (CCLayer *)0x0;
        if (((bVar19) && (bVar20 = (CCLayer *)(param_2 + DAT_000f1974) == (CCLayer *)0x0, !bVar20))
           && ((int *)param_2 != (int *)0xaf0)) {
          piVar2 = (int *)operator_new(0x110);
          cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
          pcVar18 = *(code **)(*piVar2 + 0x3c);
          __floatsisf(param_3);
          uVar22 = __floatsisf(param_4 + 0x32);
          cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          (*pcVar18)(piVar2,aCStack_20);
          (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_5,0xffffffe2);
          cocos2d::CCObject::release((CCObject *)piVar2);
          pCVar6 = (CCSpriteFrame *)
                   cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                             (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(local_d4 + 0x134),0);
          piVar14 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar6);
          pcVar18 = *(code **)(*piVar14 + 0x24);
          Random(0,10);
          uVar9 = __floatsisf();
          (*pcVar18)(piVar14,uVar9);
          (**(code **)(*piVar2 + 0xcc))(piVar2,piVar14,0,bVar20);
          this_00 = (CCObject *)cocos2d::CCObject::copy();
          cocos2d::CCNode::runAction((CCNode *)piVar14,(CCAction *)this_00);
          cocos2d::CCObject::release(this_00);
          return;
        }
        piVar2 = (int *)operator_new(0x110);
        cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
        if (bVar19) {
          local_d4 = *(Effect **)(*piVar2 + 0x3c);
          if ((int *)param_2 == (int *)0xaf0) {
            __floatsisf(param_3 + 0x19);
            uVar22 = __floatsisf(param_4 + 0xf);
            cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
            (*(code *)local_d4)(piVar2,aCStack_38);
            goto LAB_000f184c;
          }
          __floatsisf(param_3);
          uVar22 = __floatsisf(param_4);
          cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          pCVar15 = aCStack_30;
        }
        else {
          local_d4 = *(Effect **)(*piVar2 + 0x3c);
          __floatsisf((CCNode **)(param_3 + 0x14));
          uVar22 = __floatsisf(param_4 + 0x1e);
          cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          pCVar15 = aCStack_40;
        }
        (*(code *)local_d4)(piVar2,pCVar15);
LAB_000f184c:
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_5,0xffffffe2);
        cocos2d::CCObject::release((CCObject *)piVar2);
        ppCVar17 = *(CCNode ***)((int)local_e0 + DAT_000f1968);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,1000);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,param_2);
        piVar14 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        pCVar11 = (CCArray *)(**(code **)(*piVar14 + 0x58))();
        for (local_dc = 0; uVar7 = cocos2d::CCArray::count(pCVar11), local_dc < uVar7;
            local_dc = local_dc + 1) {
          piVar14 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,local_dc);
          pCVar3 = (CCTexture2D *)(**(code **)(*piVar14 + 0x118))();
          piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
          pcVar18 = *(code **)(*piVar12 + 0x3c);
          (**(code **)(*piVar14 + 0x38))(piVar14);
          uVar22 = (**(code **)(*piVar14 + 0x38))(piVar14);
          cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          (*pcVar18)(piVar12,aCStack_28);
          pcVar18 = *(code **)(*piVar12 + 0xec);
          uVar9 = (**(code **)(*piVar14 + 0xe8))(piVar14);
          (*pcVar18)(piVar12,uVar9);
          pcVar18 = *(code **)(*piVar12 + 0x2c);
          uVar9 = (**(code **)(*piVar14 + 0x28))(piVar14);
          (*pcVar18)(piVar12,uVar9);
          pcVar18 = *(code **)(*piVar12 + 0x34);
          uVar9 = (**(code **)(*piVar14 + 0x30))(piVar14);
          (*pcVar18)(piVar12,uVar9);
          (**(code **)(*piVar2 + 0xcc))(piVar2,piVar12,local_dc,local_dc);
        }
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,1000);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,param_2);
        piVar14 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        puVar13 = (undefined4 *)(**(code **)(*piVar14 + 0xa8))();
        ani_Effect_ani((CCLayer *)piVar2,*(_KG_Anit **)*puVar13);
        FUN_000f1a10();
        return;
      }
      piVar14 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)piVar14);
      pcVar18 = *(code **)(*piVar14 + 0x3c);
      local_cc = __floatsisf(param_3);
      uVar22 = __floatsisf(param_4);
      cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar18)(piVar14,aCStack_50);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar14,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)piVar14);
      local_c4 = *(CCNode ***)((int)local_e0 + DAT_000f1968);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_c4,1000);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0xb4);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      pCVar11 = (CCArray *)(**(code **)(*piVar2 + 0x58))();
      for (local_e0 = (CCNode **)0x0; uVar7 = cocos2d::CCArray::count(pCVar11), local_e0 < uVar7;
          local_e0 = (CCNode **)((int)local_e0 + 1)) {
        piVar2 = (int *)cocos2d::CCArray::objectAtIndex(pCVar11,(uint)local_e0);
        pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
        piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
        pcVar18 = *(code **)(*piVar12 + 0x3c);
        puVar13 = (undefined4 *)(**(code **)(*piVar2 + 0x38))(piVar2);
        uVar9 = *puVar13;
        puVar13 = (undefined4 *)(**(code **)(*piVar12 + 0x7c))(piVar12);
        uVar10 = __mulsf3(*puVar13,0x3f000000);
        __addsf3(uVar9,uVar10);
        uVar22 = (**(code **)(*piVar2 + 0x38))(piVar2);
        cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
        (*pcVar18)(piVar12,aCStack_48);
        pcVar18 = *(code **)(*piVar12 + 0xec);
        uVar9 = (**(code **)(*piVar2 + 0xe8))(piVar2);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0x2c);
        uVar9 = (**(code **)(*piVar2 + 0x28))(piVar2);
        (*pcVar18)(piVar12,uVar9);
        pcVar18 = *(code **)(*piVar12 + 0x34);
        uVar9 = (**(code **)(*piVar2 + 0x30))(piVar2);
        (*pcVar18)(piVar12,uVar9);
        (**(code **)(*piVar14 + 0xcc))(piVar14,piVar12,local_e0,local_e0);
      }
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_c4,1000);
      iVar5 = 0xb4;
    }
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar5);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    puVar13 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
    ani_Effect_ani((CCLayer *)piVar14,*(_KG_Anit **)*puVar13);
    if (!param_6) {
      FUN_000f1a10();
      return;
    }
    pCVar1 = *local_c4;
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1000);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
  pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))();
  pCVar4 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
  iVar5 = local_cc;
  fVar21 = extraout_s0_01;
  iVar23 = DAT_000f196c;
LAB_000f1794:
  Effect_Body_Draw(local_d4,param_1,pCVar4,fVar21,iVar5,param_4,iVar23,7);
  FUN_000f1a10();
  return;
}


