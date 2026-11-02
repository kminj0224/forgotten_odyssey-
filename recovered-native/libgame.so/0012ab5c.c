/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ab5c  Symbol: BG_ReLode */

/* GameScene::BG_ReLode() */

void GameScene::BG_ReLode(void)

{
  CCNode *in_r0;
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  _ccTexParams *p_Var5;
  int *piVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float in_s1;
  undefined8 uVar10;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s2;
  float extraout_s3;
  undefined4 local_104;
  undefined4 local_100;
  CCPoint aCStack_fc [8];
  CCPoint aCStack_f4 [8];
  CCPoint aCStack_ec [8];
  CCPoint aCStack_e4 [8];
  CCRect local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  char acStack_bc [40];
  char acStack_94 [40];
  char acStack_6c [40];
  char acStack_44 [40];
  int local_1c;
  
  piVar9 = *(int **)(DAT_0012af2c + 0x12ab6c);
  local_1c = *piVar9;
  uVar7 = *(undefined4 *)
           (((**(int **)(DAT_0012af28 + 0x12ab68) + -1) * 10 + **(int **)(DAT_0012af30 + 0x12ab80) +
            -1) * 4 + *(int *)(DAT_0012af34 + 0x12ab8a));
  uVar10 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_104,in_s0,in_s1);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_dc,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20),extraout_s2,
             extraout_s3);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,2);
  local_dc = *(CCRect *)(iVar2 + 300);
  uStack_d8 = *(undefined4 *)(iVar2 + 0x130);
  uStack_d4 = *(undefined4 *)(iVar2 + 0x134);
  local_d0 = *(undefined4 *)(iVar2 + 0x138);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
  local_104 = *puVar4;
  local_100 = puVar4[1];
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
  memset(acStack_bc,0,0x28);
  sprintf(acStack_bc,(char *)(DAT_0012af38 + 0x12ac10),uVar7);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_bc);
  pcVar8 = *(code **)(*piVar3 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_fc,extraout_s0,extraout_s1);
  (*pcVar8)(piVar3,aCStack_fc);
  (**(code **)(*piVar3 + 0x3c))(piVar3,&local_104);
  local_cc = *(undefined4 *)(DAT_0012af3c + 0x12ac46);
  uStack_c8 = *(undefined4 *)(DAT_0012af3c + 0x12ac4a);
  uStack_c4 = *(undefined4 *)(DAT_0012af3c + 0x12ac4e);
  local_c0 = *(undefined4 *)(DAT_0012af3c + 0x12ac52);
  p_Var5 = (_ccTexParams *)(**(code **)(*piVar3 + 0x118))(piVar3);
  cocos2d::CCTexture2D::setTexParameters(p_Var5);
  cocos2d::CCSprite::setTextureRect((CCSprite *)piVar3,&local_dc);
  (**(code **)(*piVar3 + 0x108))(piVar3,0x3f800000);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
  (**(code **)(*piVar6 + 0xcc))(piVar6,piVar3,2,2);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,1);
  if (iVar2 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    local_104 = *puVar4;
    local_100 = puVar4[1];
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,1);
    local_dc = *(CCRect *)(iVar2 + 300);
    uStack_d8 = *(undefined4 *)(iVar2 + 0x130);
    uStack_d4 = *(undefined4 *)(iVar2 + 0x134);
    local_d0 = *(undefined4 *)(iVar2 + 0x138);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
  }
  memset(acStack_94,0,0x28);
  sprintf(acStack_94,(char *)(DAT_0012af40 + 0x12acfc),uVar7);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_94);
  if (piVar3 != (int *)0x0) {
    pcVar8 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_f4,extraout_s0_00,extraout_s1_00);
    (*pcVar8)(piVar3,aCStack_f4);
    p_Var5 = (_ccTexParams *)(**(code **)(*piVar3 + 0x118))(piVar3);
    cocos2d::CCTexture2D::setTexParameters(p_Var5);
    (**(code **)(*piVar3 + 0x3c))(piVar3,&local_104);
    cocos2d::CCSprite::setTextureRect((CCSprite *)piVar3,&local_dc);
    (**(code **)(*piVar3 + 0x108))(piVar3,0x3f800000);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
    (**(code **)(*piVar6 + 0xcc))(piVar6,piVar3,1,1);
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,4);
  if (iVar2 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,4);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    local_104 = *puVar4;
    local_100 = puVar4[1];
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,4);
    local_dc = *(CCRect *)(iVar2 + 300);
    uStack_d8 = *(undefined4 *)(iVar2 + 0x130);
    uStack_d4 = *(undefined4 *)(iVar2 + 0x134);
    local_d0 = *(undefined4 *)(iVar2 + 0x138);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,4);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
  }
  memset(acStack_6c,0,0x28);
  sprintf(acStack_6c,(char *)(DAT_0012af44 + 0x12add8),uVar7);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_6c);
  if (piVar3 != (int *)0x0) {
    pcVar8 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_ec,extraout_s0_01,extraout_s1_01);
    (*pcVar8)(piVar3,aCStack_ec);
    p_Var5 = (_ccTexParams *)(**(code **)(*piVar3 + 0x118))(piVar3);
    cocos2d::CCTexture2D::setTexParameters(p_Var5);
    cocos2d::CCSprite::setTextureRect((CCSprite *)piVar3,&local_dc);
    (**(code **)(*piVar3 + 0x3c))(piVar3,&local_104);
    (**(code **)(*piVar3 + 0x108))(piVar3,0x3f800000);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
    (**(code **)(*piVar6 + 0xcc))(piVar6,piVar3,4,4);
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,6);
  if (iVar2 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,6);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    local_104 = *puVar4;
    local_100 = puVar4[1];
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,6);
    local_dc = *(CCRect *)(iVar2 + 300);
    uStack_d8 = *(undefined4 *)(iVar2 + 0x130);
    uStack_d4 = *(undefined4 *)(iVar2 + 0x134);
    local_d0 = *(undefined4 *)(iVar2 + 0x138);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,6);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar1,true);
  }
  memset(acStack_44,0,0x28);
  sprintf(acStack_44,(char *)(DAT_0012af48 + 0x12aeb4),uVar7);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_44);
  if (piVar3 != (int *)0x0) {
    pcVar8 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_e4,extraout_s0_02,extraout_s1_02);
    (*pcVar8)(piVar3,aCStack_e4);
    p_Var5 = (_ccTexParams *)(**(code **)(*piVar3 + 0x118))(piVar3);
    cocos2d::CCTexture2D::setTexParameters(p_Var5);
    cocos2d::CCSprite::setTextureRect((CCSprite *)piVar3,&local_dc);
    (**(code **)(*piVar3 + 0x3c))(piVar3,&local_104);
    (**(code **)(*piVar3 + 0x108))(piVar3,0x3f800000);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0);
    (**(code **)(*piVar6 + 0xcc))(piVar6,piVar3,6,6);
  }
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


