/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef6b0  Symbol: Hero_Effect */

/* Effect::Hero_Effect(cocos2d::CCLayer*, int, int, int, int, int, bool) */

void __thiscall
Effect::Hero_Effect(Effect *this,CCLayer *param_1,int param_2,int param_3,int param_4,int param_5,
                   int param_6,bool param_7)

{
  bool bVar1;
  undefined4 *puVar2;
  int *this_00;
  CCNode *pCVar3;
  int *piVar4;
  int *piVar5;
  CCTexture2D *pCVar6;
  CCArray *pCVar7;
  CCDirector *pCVar8;
  undefined4 uVar9;
  CCSize *pCVar10;
  CCSpriteFrame *pCVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  int local_e8;
  CCNode **local_d8;
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [2];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [2];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [2];
  CCPoint aCStack_70 [8];
  CCRect aCStack_68 [4];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [4];
  CCRect aCStack_38 [4];
  CCRect aCStack_28 [5];
  
  iVar14 = DAT_000efa70 + 0xef6c6;
  if (param_2 == 1) {
    this_00 = (int *)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
    pcVar13 = *(code **)(*this_00 + 0x3c);
    __floatsisf(param_3 + -0x19);
    uVar16 = __floatsisf(param_4 + 0x2d);
    cocos2d::CCPoint::CCPoint(aCStack_d0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar13)(this_00,aCStack_d0);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)this_00);
    local_d8 = *(CCNode ***)(iVar14 + DAT_000efa74);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_d8,1000);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,param_6 + 10);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar4,0);
    pCVar6 = (CCTexture2D *)(**(code **)(*piVar5 + 0x118))();
    pCVar7 = (CCArray *)(**(code **)(*piVar4 + 0x58))(piVar4);
    for (uVar15 = 0; uVar12 = cocos2d::CCArray::count(pCVar7), uVar15 < uVar12; uVar15 = uVar15 + 1)
    {
      piVar4 = (int *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar15);
      iVar14 = piVar4[0x4b];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      __mulsf3(iVar14,uVar9);
      iVar14 = piVar4[0x4c];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      __mulsf3(iVar14,uVar9);
      iVar14 = piVar4[0x4d];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      __mulsf3(iVar14,uVar9);
      iVar14 = piVar4[0x4e];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      uVar16 = __mulsf3(iVar14,uVar9);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_68,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),extraout_s2,
                 extraout_s3);
      bVar1 = *(bool *)(piVar4 + 0x53);
      pCVar10 = (CCSize *)(**(code **)(*piVar4 + 0x7c))(piVar4);
      pCVar11 = (CCSpriteFrame *)
                cocos2d::CCSpriteFrame::frameWithTexture
                          (pCVar6,aCStack_68,bVar1,(CCPoint *)(piVar4 + 0x54),pCVar10);
      piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar11);
      pcVar13 = *(code **)(*piVar5 + 0x3c);
      (**(code **)(*piVar4 + 0x38))(piVar4);
      uVar16 = (**(code **)(*piVar4 + 0x38))(piVar4);
      cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      (*pcVar13)(piVar5,aCStack_c8);
      pcVar13 = *(code **)(*piVar5 + 0xec);
      uVar9 = (**(code **)(*piVar4 + 0xe8))(piVar4);
      (*pcVar13)(piVar5,uVar9);
      pcVar13 = *(code **)(*piVar5 + 0x2c);
      uVar9 = (**(code **)(*piVar4 + 0x28))(piVar4);
      (*pcVar13)(piVar5,uVar9);
      pcVar13 = *(code **)(*piVar5 + 0x34);
      uVar9 = (**(code **)(*piVar4 + 0x30))(piVar4);
      (*pcVar13)(piVar5,uVar9);
      pcVar13 = *(code **)(*piVar5 + 0x24);
      uVar9 = (**(code **)(*piVar4 + 0x20))(piVar4);
      (*pcVar13)(piVar5,uVar9);
      (**(code **)(*this_00 + 0xcc))(this_00,piVar5,uVar15,uVar15);
    }
LAB_000efc48:
    local_e8 = param_6 + 10;
    pCVar3 = *local_d8;
  }
  else {
    if (param_2 == 2) {
      this_00 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
      pcVar13 = *(code **)(*this_00 + 0x3c);
      __floatsisf(param_3);
      uVar16 = __floatsisf(param_4 + 0x46);
      cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      (*pcVar13)(this_00,aCStack_c0);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)this_00);
      local_d8 = *(CCNode ***)(iVar14 + DAT_000efa74);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_d8,1000);
      piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,param_6 + 10);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar4,0);
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar5 + 0x118))();
      pCVar7 = (CCArray *)(**(code **)(*piVar4 + 0x58))(piVar4);
      for (uVar15 = 0; uVar12 = cocos2d::CCArray::count(pCVar7), uVar15 < uVar12;
          uVar15 = uVar15 + 1) {
        piVar4 = (int *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar15);
        iVar14 = piVar4[0x4b];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4c];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4d];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4e];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        uVar16 = __mulsf3(iVar14,uVar9);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_58,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),
                   extraout_s2_00,extraout_s3_00);
        bVar1 = *(bool *)(piVar4 + 0x53);
        cocos2d::CCSprite::getOffset();
        pCVar10 = (CCSize *)(**(code **)(*piVar4 + 0x7c))(piVar4);
        pCVar11 = (CCSpriteFrame *)
                  cocos2d::CCSpriteFrame::frameWithTexture
                            (pCVar6,aCStack_58,bVar1,aCStack_b8,pCVar10);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar11);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        (**(code **)(*piVar4 + 0x38))(piVar4);
        uVar16 = (**(code **)(*piVar4 + 0x38))(piVar4);
        cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        (*pcVar13)(piVar5,aCStack_b0);
        pcVar13 = *(code **)(*piVar5 + 0xec);
        uVar9 = (**(code **)(*piVar4 + 0xe8))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x2c);
        uVar9 = (**(code **)(*piVar4 + 0x28))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x34);
        uVar9 = (**(code **)(*piVar4 + 0x30))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x24);
        uVar9 = (**(code **)(*piVar4 + 0x20))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        (**(code **)(*this_00 + 0xcc))(this_00,piVar5,uVar15,uVar15);
      }
      goto LAB_000efc48;
    }
    if (param_2 == 4) {
      this_00 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
      pcVar13 = *(code **)(*this_00 + 0x3c);
      __floatsisf(param_3);
      uVar16 = __floatsisf(param_4 + 0x46);
      cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      (*pcVar13)(this_00,aCStack_a8);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)this_00);
      local_d8 = *(CCNode ***)(iVar14 + DAT_000efe58);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_d8,1000);
      piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,param_6 + 10);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar4,0);
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar5 + 0x118))();
      pCVar7 = (CCArray *)(**(code **)(*piVar4 + 0x58))(piVar4);
      for (uVar15 = 0; uVar12 = cocos2d::CCArray::count(pCVar7), uVar15 < uVar12;
          uVar15 = uVar15 + 1) {
        piVar4 = (int *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar15);
        iVar14 = piVar4[0x4b];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4c];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4d];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4e];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        uVar16 = __mulsf3(iVar14,uVar9);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_48,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),
                   extraout_s2_01,extraout_s3_01);
        bVar1 = *(bool *)(piVar4 + 0x53);
        pCVar10 = (CCSize *)(**(code **)(*piVar4 + 0x7c))(piVar4);
        pCVar11 = (CCSpriteFrame *)
                  cocos2d::CCSpriteFrame::frameWithTexture
                            (pCVar6,aCStack_48,bVar1,(CCPoint *)(piVar4 + 0x54),pCVar10);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar11);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        (**(code **)(*piVar4 + 0x38))(piVar4);
        uVar16 = (**(code **)(*piVar4 + 0x38))(piVar4);
        cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        (*pcVar13)(piVar5,aCStack_a0);
        pcVar13 = *(code **)(*piVar5 + 0xec);
        uVar9 = (**(code **)(*piVar4 + 0xe8))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x2c);
        uVar9 = (**(code **)(*piVar4 + 0x28))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x34);
        uVar9 = (**(code **)(*piVar4 + 0x30))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x24);
        uVar9 = (**(code **)(*piVar4 + 0x20))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        (**(code **)(*this_00 + 0xcc))(this_00,piVar5,uVar15,uVar15);
      }
      goto LAB_000efc48;
    }
    if (param_2 == 3) {
      this_00 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
      pcVar13 = *(code **)(*this_00 + 0x3c);
      __floatsisf(param_3);
      uVar16 = __floatsisf(param_4 + 0x46);
      cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      (*pcVar13)(this_00,aCStack_98);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)this_00);
      if (param_7) {
        (**(code **)(*this_00 + 0x2c))(this_00,DAT_000efe5c);
      }
      local_d8 = *(CCNode ***)(iVar14 + DAT_000efe58);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_d8,1000);
      local_e8 = param_6 + 0x14;
      piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,local_e8);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar4,0);
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar5 + 0x118))();
      pCVar7 = (CCArray *)(**(code **)(*piVar4 + 0x58))(piVar4);
      for (uVar15 = 0; uVar12 = cocos2d::CCArray::count(pCVar7), uVar15 < uVar12;
          uVar15 = uVar15 + 1) {
        piVar4 = (int *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar15);
        iVar14 = piVar4[0x4b];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4c];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4d];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4e];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        uVar16 = __mulsf3(iVar14,uVar9);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_38,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),
                   extraout_s2_02,extraout_s3_02);
        bVar1 = *(bool *)(piVar4 + 0x53);
        cocos2d::CCSprite::getOffset();
        pCVar10 = (CCSize *)(**(code **)(*piVar4 + 0x7c))(piVar4);
        pCVar11 = (CCSpriteFrame *)
                  cocos2d::CCSpriteFrame::frameWithTexture
                            (pCVar6,aCStack_38,bVar1,aCStack_90,pCVar10);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar11);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        (**(code **)(*piVar4 + 0x38))(piVar4);
        uVar16 = (**(code **)(*piVar4 + 0x38))(piVar4);
        cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        (*pcVar13)(piVar5,aCStack_88);
        pcVar13 = *(code **)(*piVar5 + 0xec);
        uVar9 = (**(code **)(*piVar4 + 0xe8))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x2c);
        uVar9 = (**(code **)(*piVar4 + 0x28))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x34);
        uVar9 = (**(code **)(*piVar4 + 0x30))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x24);
        uVar9 = (**(code **)(*piVar4 + 0x20))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        (**(code **)(*this_00 + 0xcc))(this_00,piVar5,uVar15,uVar15);
      }
    }
    else {
      if (param_2 != 5) {
        if (param_2 == 8) {
          return;
        }
        goto LAB_000f003a;
      }
      this_00 = (int *)operator_new(0x110);
      cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
      pcVar13 = *(code **)(*this_00 + 0x3c);
      __floatsisf(param_3);
      uVar16 = __floatsisf(param_4 + 0x46);
      cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      (*pcVar13)(this_00,aCStack_80);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,param_5,0xffffffe2);
      cocos2d::CCObject::release((CCObject *)this_00);
      local_d8 = *(CCNode ***)(iVar14 + DAT_000f0048);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*local_d8,1000);
      local_e8 = param_6 + 10;
      piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,local_e8);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar4,0);
      pCVar6 = (CCTexture2D *)(**(code **)(*piVar5 + 0x118))();
      pCVar7 = (CCArray *)(**(code **)(*piVar4 + 0x58))(piVar4);
      for (uVar15 = 0; uVar12 = cocos2d::CCArray::count(pCVar7), uVar15 < uVar12;
          uVar15 = uVar15 + 1) {
        piVar4 = (int *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar15);
        iVar14 = piVar4[0x4b];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4c];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4d];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        __mulsf3(iVar14,uVar9);
        iVar14 = piVar4[0x4e];
        pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
        uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
        uVar16 = __mulsf3(iVar14,uVar9);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_28,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),
                   extraout_s2_03,extraout_s3_03);
        bVar1 = *(bool *)(piVar4 + 0x53);
        cocos2d::CCSprite::getOffset();
        pCVar10 = (CCSize *)(**(code **)(*piVar4 + 0x7c))(piVar4);
        pCVar11 = (CCSpriteFrame *)
                  cocos2d::CCSpriteFrame::frameWithTexture
                            (pCVar6,aCStack_28,bVar1,aCStack_78,pCVar10);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar11);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        (**(code **)(*piVar4 + 0x38))(piVar4);
        uVar16 = (**(code **)(*piVar4 + 0x38))(piVar4);
        cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        (*pcVar13)(piVar5,aCStack_70);
        pcVar13 = *(code **)(*piVar5 + 0xec);
        uVar9 = (**(code **)(*piVar4 + 0xe8))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x2c);
        uVar9 = (**(code **)(*piVar4 + 0x28))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x34);
        uVar9 = (**(code **)(*piVar4 + 0x30))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        pcVar13 = *(code **)(*piVar5 + 0x24);
        uVar9 = (**(code **)(*piVar4 + 0x20))(piVar4);
        (*pcVar13)(piVar5,uVar9);
        (**(code **)(*this_00 + 0xcc))(this_00,piVar5,uVar15,uVar15);
      }
    }
    pCVar3 = *local_d8;
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,1000);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,local_e8);
  puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0xa8))();
  ani_Effect_ani((CCLayer *)this_00,*(_KG_Anit **)*puVar2);
LAB_000f003a:
  *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
  return;
}


