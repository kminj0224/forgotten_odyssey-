/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f8918  Symbol: Mir_Bullet_Draw */

/* Mir_Bullet_Draw(cocos2d::CCNode*, cocos2d::CCSprite*, cocos2d::CCPoint, int, int, int, bool) */

void Mir_Bullet_Draw(CCNode *param_1,CCSprite *param_2,CCPoint param_3,int param_4,int param_5,
                    int param_6,bool param_7)

{
  bool bVar1;
  int *this;
  CCNode *pCVar2;
  int *this_00;
  int *piVar3;
  CCTexture2D *pCVar4;
  CCArray *this_01;
  CCDirector *pCVar5;
  undefined4 uVar6;
  CCSize *pCVar7;
  CCSpriteFrame *pCVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  code *pcVar13;
  CCNode **ppCVar14;
  int iVar15;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar16;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  undefined3 in_stack_00000009;
  undefined in_stack_0000000c;
  uint local_a4;
  CCPoint local_88;
  int local_84;
  CCPoint aCStack_80 [8];
  CCRect aCStack_78 [16];
  CCRect aCStack_68 [16];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [16];
  CCRect aCStack_38 [16];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  local_88 = param_3;
  local_84 = param_4;
  cocos2d::CCRect::CCRect(aCStack_78);
  cocos2d::CCRect::CCRect(aCStack_68);
  this = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  (**(code **)(*this + 0x3c))(this,&local_88);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,param_5,DAT_000f8bbc);
  iVar15 = DAT_000f8bc0;
  cocos2d::CCObject::release((CCObject *)this);
  ppCVar14 = *(CCNode ***)(iVar15 + 0xf8968);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar14,1000);
  this_00 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0xd);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this_00,0);
  pCVar4 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))();
  this_01 = (CCArray *)(**(code **)(*this_00 + 0x58))(this_00);
  for (local_a4 = 0; uVar11 = cocos2d::CCArray::count(this_01), local_a4 < uVar11;
      local_a4 = local_a4 + 1) {
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this_01,local_a4);
    iVar15 = piVar3[0x4b];
    pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
    __mulsf3(iVar15,uVar6);
    iVar15 = piVar3[0x4c];
    pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
    __mulsf3(iVar15,uVar6);
    iVar15 = piVar3[0x4d];
    pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
    __mulsf3(iVar15,uVar6);
    iVar15 = piVar3[0x4e];
    pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
    uVar16 = __mulsf3(iVar15,uVar6);
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_58,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),extraout_s2,
               extraout_s3);
    bVar1 = *(bool *)(piVar3 + 0x53);
    pCVar7 = (CCSize *)(**(code **)(*piVar3 + 0x7c))(piVar3);
    pCVar8 = (CCSpriteFrame *)
             cocos2d::CCSpriteFrame::frameWithTexture
                       (pCVar4,aCStack_58,bVar1,(CCPoint *)(piVar3 + 0x54),pCVar7);
    piVar9 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar8);
    pcVar13 = *(code **)(*piVar9 + 0x3c);
    puVar10 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
    __subsf3(*puVar10,DAT_000f8bc4);
    uVar16 = (**(code **)(*piVar3 + 0x38))(piVar3);
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar13)(piVar9,aCStack_80);
    pcVar13 = *(code **)(*piVar9 + 0xec);
    uVar6 = (**(code **)(*piVar3 + 0xe8))(piVar3);
    (*pcVar13)(piVar9,uVar6);
    pcVar13 = *(code **)(*piVar9 + 0x2c);
    uVar6 = (**(code **)(*piVar3 + 0x28))(piVar3);
    (*pcVar13)(piVar9,uVar6);
    pcVar13 = *(code **)(*piVar9 + 0x34);
    uVar6 = (**(code **)(*piVar3 + 0x30))(piVar3);
    (*pcVar13)(piVar9,uVar6);
    pcVar13 = *(code **)(*piVar9 + 0x24);
    uVar6 = (**(code **)(*piVar3 + 0x20))(piVar3);
    (*pcVar13)(piVar9,uVar6);
    (**(code **)(*this + 0xcc))(this,piVar9,local_a4,local_a4);
  }
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar14,1000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0xd);
  puVar10 = (undefined4 *)(**(code **)(*piVar3 + 0xa8))();
  ani_ani_test_R((CCSprite *)this_00,*(_KG_Anit **)*puVar10);
  puVar12 = (uint *)operator_new(0x78);
  cocos2d::CCRect::CCRect((CCRect *)(puVar12 + 0x16));
  cocos2d::CCRect::CCRect((CCRect *)(puVar12 + 0x1a));
  puVar12[5] = local_88;
  *puVar12 = (uint)(1000 < param_6);
  *(undefined *)(puVar12 + 7) = 1;
  *(undefined *)((int)puVar12 + 0x19) = 0;
  *(undefined *)(puVar12 + 6) = 0;
  *(undefined *)((int)puVar12 + 0x1b) = 0;
  *(undefined *)((int)puVar12 + 0x1a) = 0;
  *(undefined *)((int)puVar12 + 0x1e) = 0;
  uVar11 = __floatsisf(_param_7);
  puVar12[3] = DAT_000f8bc8;
  puVar12[4] = 0;
  puVar12[1] = uVar11;
  puVar12[2] = uVar11;
  *(undefined *)((int)puVar12 + 0x1d) = in_stack_0000000c;
  uVar16 = (**(code **)(*this + 0xac))(this,puVar12);
  cocos2d::CCRect::CCRect
            (aCStack_48,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20),extraout_s2_00,
             extraout_s3_00);
  memcpy(aCStack_78,aCStack_48,0x10);
  cocos2d::CCRect::CCRect(aCStack_38,extraout_s0,extraout_s1,extraout_s2_01,extraout_s3_01);
  memcpy(aCStack_68,aCStack_38,0x10);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,extraout_s0_00,extraout_s1_00,extraout_s2_02,extraout_s3_02);
  puVar12[0x16] = local_28;
  puVar12[0x17] = uStack_24;
  puVar12[0x18] = uStack_20;
  puVar12[0x19] = local_1c;
  return;
}


