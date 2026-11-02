/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f9238  Symbol: Kris_Bullet_Draw */

/* Kris_Bullet_Draw(cocos2d::CCNode*, cocos2d::CCSprite*, cocos2d::CCPoint, int, int, int, bool,
   bool) */

void Kris_Bullet_Draw(CCNode *param_1,CCSprite *param_2,CCPoint param_3,int param_4,int param_5,
                     int param_6,bool param_7,bool param_8)

{
  bool bVar1;
  uint uVar2;
  CCNode *this;
  int *piVar3;
  CCTexture2D *pCVar4;
  CCDirector *pCVar5;
  undefined4 uVar6;
  CCSize *pCVar7;
  CCSpriteFrame *pCVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar13;
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
  undefined in_stack_00000010;
  CCPoint local_80;
  int local_7c;
  CCRect aCStack_78 [16];
  CCRect aCStack_68 [16];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [16];
  CCRect aCStack_38 [16];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  local_80 = param_3;
  local_7c = param_4;
  cocos2d::CCRect::CCRect(aCStack_78);
  cocos2d::CCRect::CCRect(aCStack_68);
  this = (CCNode *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000f93f0 + 0xf9264),1000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(this,0xf);
  pCVar4 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))();
  iVar12 = piVar3[0x4b];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  __mulsf3(iVar12,uVar6);
  iVar12 = piVar3[0x4c];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  __mulsf3(iVar12,uVar6);
  iVar12 = piVar3[0x4d];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  __mulsf3(iVar12,uVar6);
  iVar12 = piVar3[0x4e];
  pCVar5 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar5);
  uVar13 = __mulsf3(iVar12,uVar6);
  cocos2d::CCRect::CCRect
            ((CCRect *)aCStack_58,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2,
             extraout_s3);
  bVar1 = *(bool *)(piVar3 + 0x53);
  pCVar7 = (CCSize *)(**(code **)(*piVar3 + 0x7c))(piVar3);
  pCVar8 = (CCSpriteFrame *)
           cocos2d::CCSpriteFrame::frameWithTexture
                     (pCVar4,aCStack_58,bVar1,(CCPoint *)(piVar3 + 0x54),pCVar7);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar8);
  (**(code **)(*piVar3 + 0x3c))(piVar3,&local_80);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar3,param_5,DAT_000f93f4);
  puVar9 = (uint *)operator_new(0x78);
  cocos2d::CCRect::CCRect((CCRect *)(puVar9 + 0x16));
  cocos2d::CCRect::CCRect((CCRect *)(puVar9 + 0x1a));
  puVar9[5] = local_80;
  *puVar9 = (uint)(1000 < param_6);
  *(undefined *)(puVar9 + 7) = 0;
  *(undefined *)((int)puVar9 + 0x19) = 0;
  *(undefined *)(puVar9 + 6) = 0;
  *(undefined *)((int)puVar9 + 0x1b) = 0;
  *(undefined *)((int)puVar9 + 0x1a) = 0;
  uVar10 = __floatsisf(_param_7);
  puVar9[4] = 0;
  uVar2 = DAT_000f93f8;
  puVar9[8] = 3;
  *(bool *)((int)puVar9 + 0x1d) = param_8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar10;
  puVar9[3] = uVar2;
  *(undefined *)((int)puVar9 + 0x1e) = in_stack_00000010;
  iVar12 = 0;
  do {
    iVar11 = iVar12 + 4;
    *(undefined4 *)((int)puVar9 + iVar12 + 0x24) = 0;
    iVar12 = iVar11;
  } while (iVar11 != 0x28);
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  uVar13 = (**(code **)(*piVar3 + 0xac))(piVar3,puVar9);
  cocos2d::CCRect::CCRect
            (aCStack_48,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2_00,
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


