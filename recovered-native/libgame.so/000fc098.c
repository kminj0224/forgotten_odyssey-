/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fc098  Symbol: Bullet_18000_Draw */

/* Bullet_18000_Draw(cocos2d::CCNode*, cocos2d::CCSprite*, cocos2d::CCPoint, int, int, int, bool) */

void Bullet_18000_Draw(CCNode *param_1,CCSprite *param_2,CCPoint param_3,int param_4,int param_5,
                      int param_6,bool param_7)

{
  bool bVar1;
  uint uVar2;
  int *this;
  CCNode *this_00;
  int *piVar3;
  CCTexture2D *pCVar4;
  CCDirector *pCVar5;
  undefined4 uVar6;
  CCSize *pCVar7;
  CCSpriteFrame *pCVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar14;
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
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,param_5,DAT_000fc28c);
  cocos2d::CCObject::release((CCObject *)this);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000fc290 + 0xfc0ec),1000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(this_00,DAT_000fc294);
  pCVar4 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))();
  iVar13 = piVar3[0x4b];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  __mulsf3(iVar13,uVar6);
  iVar13 = piVar3[0x4c];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  __mulsf3(iVar13,uVar6);
  iVar13 = piVar3[0x4d];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  __mulsf3(iVar13,uVar6);
  iVar13 = piVar3[0x4e];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  uVar14 = __mulsf3(iVar13,uVar6);
  cocos2d::CCRect::CCRect
            ((CCRect *)aCStack_58,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),extraout_s2,
             extraout_s3);
  bVar1 = *(bool *)(piVar3 + 0x53);
  pCVar7 = (CCSize *)(**(code **)(*piVar3 + 0x7c))(piVar3);
  pCVar8 = (CCSpriteFrame *)
           cocos2d::CCSpriteFrame::frameWithTexture
                     (pCVar4,aCStack_58,bVar1,(CCPoint *)(piVar3 + 0x54),pCVar7);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar8);
  pcVar12 = *(code **)(*piVar3 + 0x3c);
  uVar14 = (**(code **)(*piVar3 + 0x7c))();
  cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  (*pcVar12)(piVar3,aCStack_80);
  (**(code **)(*this + 0xcc))(this,piVar3,0,0);
  puVar9 = (uint *)operator_new(0x78);
  cocos2d::CCRect::CCRect((CCRect *)(puVar9 + 0x16));
  cocos2d::CCRect::CCRect((CCRect *)(puVar9 + 0x1a));
  puVar9[5] = local_88;
  *puVar9 = (uint)(1000 < param_6);
  *(undefined *)((int)puVar9 + 0x1a) = 1;
  *(undefined *)(puVar9 + 7) = 0;
  *(undefined *)((int)puVar9 + 0x19) = 0;
  *(undefined *)(puVar9 + 6) = 0;
  *(undefined *)((int)puVar9 + 0x1b) = 0;
  uVar10 = __floatsisf(_param_7);
  uVar2 = DAT_000fc298;
  puVar9[1] = uVar10;
  puVar9[3] = uVar2;
  uVar2 = DAT_000fc29c;
  puVar9[2] = uVar10;
  *(undefined *)((int)puVar9 + 0x1e) = 0;
  puVar9[4] = uVar2;
  puVar9[8] = 0;
  *(undefined *)((int)puVar9 + 0x1d) = in_stack_0000000c;
  iVar13 = 0;
  do {
    iVar11 = iVar13 + 4;
    *(undefined4 *)((int)puVar9 + iVar13 + 0x24) = 0;
    iVar13 = iVar11;
  } while (iVar11 != 0x28);
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  uVar14 = (**(code **)(*this + 0xac))(this,puVar9);
  cocos2d::CCRect::CCRect
            (aCStack_48,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),extraout_s2_00,
             extraout_s3_00);
  memcpy(aCStack_78,aCStack_48,0x10);
  cocos2d::CCRect::CCRect(aCStack_38,extraout_s0,extraout_s1,extraout_s2_01,extraout_s3_01);
  memcpy(aCStack_68,aCStack_38,0x10);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,extraout_s0_00,extraout_s1_00,extraout_s2_02,extraout_s3_02);
  puVar9[0x16] = local_28;
  puVar9[0x17] = uStack_24;
  puVar9[0x18] = uStack_20;
  puVar9[0x19] = local_1c;
  return;
}


