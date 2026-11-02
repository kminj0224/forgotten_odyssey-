/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f004c  Symbol: Boss_Effect */

/* Effect::Boss_Effect(cocos2d::CCLayer*, int, int, int, int, int) */

void __thiscall
Effect::Boss_Effect(Effect *this,CCLayer *param_1,int param_2,int param_3,int param_4,int param_5,
                   int param_6)

{
  bool bVar1;
  int *this_00;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  CCNode *pCVar5;
  int *piVar6;
  CCTexture2D *pCVar7;
  CCArray *this_01;
  CCDirector *pCVar8;
  undefined4 uVar9;
  CCSize *pCVar10;
  CCSpriteFrame *pCVar11;
  uint uVar12;
  code *pcVar13;
  CCNode **ppCVar14;
  uint uVar15;
  undefined8 uVar16;
  float extraout_s2;
  float extraout_s3;
  CCPoint aCStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [2];
  CCRect aCStack_28 [5];
  
  if ((uint)(param_2 + DAT_000f02b0) < 2) {
    this_00 = (int *)operator_new(0x110);
    cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
    pcVar13 = *(code **)(*this_00 + 0x3c);
    __floatsisf(param_3);
    uVar16 = __floatsisf(param_4 + 0x46);
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar13)(this_00,aCStack_40);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_00,param_5,0xffffffe2);
    cocos2d::CCObject::release((CCObject *)this_00);
    if (param_2 == DAT_000f02b4) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000f02b8 + 0xf00be),1);
      iVar3 = (**(code **)(*piVar2 + 0xa8))();
      puVar4 = (undefined4 *)operator_new(0x20);
      uVar16 = cocos2d::CCSize::CCSize((CCSize *)(puVar4 + 6));
      uVar9 = DAT_000f02bc;
      *puVar4 = 1;
      puVar4[3] = uVar9;
      puVar4[4] = 0;
      *(undefined *)((int)puVar4 + 0x15) = 1;
      *(undefined *)((int)puVar4 + 0x16) = 1;
      puVar4[1] = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x38);
      *(undefined *)(puVar4 + 5) = 0;
      cocos2d::CCSize::CCSize((CCSize *)&local_38,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      puVar4[6] = local_38;
      puVar4[7] = local_34;
      (**(code **)(*this_00 + 0xac))(this_00,puVar4);
    }
    ppCVar14 = *(CCNode ***)(DAT_000f02c4 + 0xf011c);
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar14,1000);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,param_6 + 10);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar2,0);
    pCVar7 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))();
    this_01 = (CCArray *)(**(code **)(*piVar2 + 0x58))(piVar2);
    for (uVar15 = 0; uVar12 = cocos2d::CCArray::count(this_01), uVar15 < uVar12; uVar15 = uVar15 + 1
        ) {
      piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this_01,uVar15);
      iVar3 = piVar2[0x4b];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      __mulsf3(iVar3,uVar9);
      iVar3 = piVar2[0x4c];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      __mulsf3(iVar3,uVar9);
      iVar3 = piVar2[0x4d];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      __mulsf3(iVar3,uVar9);
      iVar3 = piVar2[0x4e];
      pCVar8 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar9 = cocos2d::CCDirector::getContentScaleFactor(pCVar8);
      uVar16 = __mulsf3(iVar3,uVar9);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_28,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),extraout_s2,
                 extraout_s3);
      bVar1 = *(bool *)(piVar2 + 0x53);
      cocos2d::CCSprite::getOffset();
      pCVar10 = (CCSize *)(**(code **)(*piVar2 + 0x7c))(piVar2);
      pCVar11 = (CCSpriteFrame *)
                cocos2d::CCSpriteFrame::frameWithTexture(pCVar7,aCStack_28,bVar1,aCStack_30,pCVar10)
      ;
      piVar6 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar11);
      pcVar13 = *(code **)(*piVar6 + 0x3c);
      uVar9 = (**(code **)(*piVar2 + 0x38))(piVar2);
      (*pcVar13)(piVar6,uVar9);
      pcVar13 = *(code **)(*piVar6 + 0xec);
      uVar9 = (**(code **)(*piVar2 + 0xe8))(piVar2);
      (*pcVar13)(piVar6,uVar9);
      pcVar13 = *(code **)(*piVar6 + 0x2c);
      uVar9 = (**(code **)(*piVar2 + 0x28))(piVar2);
      (*pcVar13)(piVar6,uVar9);
      pcVar13 = *(code **)(*piVar6 + 0x34);
      uVar9 = (**(code **)(*piVar2 + 0x30))(piVar2);
      (*pcVar13)(piVar6,uVar9);
      pcVar13 = *(code **)(*piVar6 + 0x24);
      uVar9 = (**(code **)(*piVar2 + 0x20))(piVar2);
      (*pcVar13)(piVar6,uVar9);
      (**(code **)(*this_00 + 0xcc))(this_00,piVar6,uVar15,uVar15);
    }
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar14,1000);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,param_6 + 10);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
    ani_Effect_ani((CCLayer *)this_00,*(_KG_Anit **)*puVar4);
  }
  *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
  return;
}


