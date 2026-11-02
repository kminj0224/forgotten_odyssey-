/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012a850  Symbol: BG_Loding */

/* GameScene::BG_Loding() */

void __thiscall GameScene::BG_Loding(GameScene *this)

{
  int *piVar1;
  int *piVar2;
  _ccTexParams *p_Var3;
  int iVar4;
  undefined4 uVar5;
  CCNode *this_00;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar10;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  CCPoint aCStack_114 [8];
  CCPoint aCStack_10c [8];
  CCPoint aCStack_104 [8];
  CCPoint aCStack_fc [8];
  CCPoint aCStack_f4 [8];
  CCPoint aCStack_ec [8];
  CCPoint aCStack_e4 [8];
  CCPoint aCStack_dc [8];
  CCPoint aCStack_d4 [8];
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  char acStack_bc [40];
  char acStack_94 [40];
  char acStack_6c [40];
  char acStack_44 [40];
  int local_1c;
  
  iVar9 = DAT_0012ab10 + 0x12a85c;
  piVar7 = *(int **)(iVar9 + DAT_0012ab14);
  local_1c = *piVar7;
  piVar1 = (int *)cocos2d::CCLayer::node();
  pcVar8 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_114,extraout_s0,extraout_s1);
  (*pcVar8)(piVar1,aCStack_114);
  (**(code **)(*(int *)this + 0xcc))(this,piVar1,0,0);
  uVar6 = *(undefined4 *)
           (((**(int **)(iVar9 + DAT_0012ab20) + -1) * 10 + **(int **)(iVar9 + DAT_0012ab28) + -1) *
            4 + *(int *)(iVar9 + DAT_0012ab24));
  memset(acStack_bc,0,0x28);
  sprintf(acStack_bc,(char *)(DAT_0012ab2c + 0x12a8c4),uVar6);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_bc);
  pcVar8 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_10c,extraout_s0_00,extraout_s1_00);
  (*pcVar8)(piVar2,aCStack_10c);
  local_cc = *(undefined4 *)(DAT_0012ab30 + 0x12a8f0);
  uStack_c8 = *(undefined4 *)(DAT_0012ab30 + 0x12a8f4);
  uStack_c4 = *(undefined4 *)(DAT_0012ab30 + 0x12a8f8);
  local_c0 = *(undefined4 *)(DAT_0012ab30 + 0x12a8fc);
  p_Var3 = (_ccTexParams *)(**(code **)(*piVar2 + 0x118))(piVar2);
  cocos2d::CCTexture2D::setTexParameters(p_Var3);
  pcVar8 = *(code **)(*piVar2 + 0x3c);
  iVar4 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar10 = __subsf3(DAT_0012ab34,*(undefined4 *)(iVar4 + 4));
  cocos2d::CCPoint::CCPoint(aCStack_104,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar8)(piVar2,aCStack_104);
  (**(code **)(*piVar2 + 0x108))(piVar2,0x3f800000);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,2,2);
  memset(acStack_94,0,0x28);
  sprintf(acStack_94,(char *)(DAT_0012ab3c + 0x12a95c),uVar6);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_94);
  if (piVar2 != (int *)0x0) {
    pcVar8 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_fc,extraout_s0_01,extraout_s1_01);
    (*pcVar8)(piVar2,aCStack_fc);
    p_Var3 = (_ccTexParams *)(**(code **)(*piVar2 + 0x118))(piVar2);
    cocos2d::CCTexture2D::setTexParameters(p_Var3);
    pcVar8 = *(code **)(*piVar2 + 0x3c);
    iVar4 = (**(code **)(*piVar2 + 0x7c))(piVar2);
    uVar10 = __subsf3(DAT_0012ab34,*(undefined4 *)(iVar4 + 4));
    cocos2d::CCPoint::CCPoint(aCStack_f4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar8)(piVar2,aCStack_f4);
    (**(code **)(*piVar2 + 0x108))(piVar2,0x3f800000);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,1,1);
  }
  memset(acStack_6c,0,0x28);
  sprintf(acStack_6c,(char *)(DAT_0012ab40 + 0x12a9e4),uVar6);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_6c);
  if (piVar2 != (int *)0x0) {
    pcVar8 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_ec,extraout_s0_02,extraout_s1_02);
    (*pcVar8)(piVar2,aCStack_ec);
    p_Var3 = (_ccTexParams *)(**(code **)(*piVar2 + 0x118))(piVar2);
    uVar10 = cocos2d::CCTexture2D::setTexParameters(p_Var3);
    pcVar8 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_e4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar8)(piVar2,aCStack_e4);
    (**(code **)(*piVar2 + 0x108))(piVar2,0x3f800000);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,4,4);
    uVar5 = cocos2d::CCLayer::node();
    cocos2d::CCNode::setPosition(extraout_s0_03,extraout_s1_03);
    (**(code **)(*piVar1 + 0xcc))(piVar1,uVar5,5,5);
  }
  memset(acStack_44,0,0x28);
  sprintf(acStack_44,(char *)(DAT_0012ab4c + 0x12aa7a),uVar6);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_44);
  if (piVar2 != (int *)0x0) {
    pcVar8 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_dc,extraout_s0_04,extraout_s1_04);
    (*pcVar8)(piVar2,aCStack_dc);
    p_Var3 = (_ccTexParams *)(**(code **)(*piVar2 + 0x118))(piVar2);
    uVar10 = cocos2d::CCTexture2D::setTexParameters(p_Var3);
    pcVar8 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_d4,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar8)(piVar2,aCStack_d4);
    (**(code **)(*piVar2 + 0x108))(piVar2,0x3f800000);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,6,6);
  }
  Stage_Settring(**(_Stage_UI ***)(iVar9 + DAT_0012ab54));
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  uVar6 = cocos2d::CCNode::getChildByTag(this_00,5);
  **(undefined4 **)(iVar9 + DAT_0012ab58) = uVar6;
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


