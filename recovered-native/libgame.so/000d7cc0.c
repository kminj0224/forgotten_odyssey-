/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d7cc0  Symbol: Reinforcement_Item_View */

/* Market_Equip::Reinforcement_Item_View(int, int, void*) */

void __thiscall
Market_Equip::Reinforcement_Item_View(Market_Equip *this,int param_1,int param_2,void *param_3)

{
  int *piVar1;
  int *piVar2;
  CCNode *pCVar3;
  int *piVar4;
  CCTexture2D *pCVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  char *__format;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar15;
  undefined8 uVar16;
  float extraout_s1;
  undefined8 uVar17;
  undefined local_c8;
  undefined local_c7;
  undefined local_c6;
  undefined local_c4;
  undefined local_c3;
  undefined local_c2;
  undefined local_c0;
  undefined local_bf;
  undefined local_be;
  undefined local_bc;
  undefined local_bb;
  undefined local_ba;
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [12];
  char acStack_74 [12];
  char acStack_68 [12];
  char acStack_5c [12];
  char acStack_50 [52];
  int local_1c;
  
  piVar14 = *(int **)(DAT_000d8028 + 0xd7ccc);
  local_1c = *piVar14;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d802c + 0xd7cd6));
  memset(acStack_50,0,0x32);
  sprintf(acStack_50,(char *)(DAT_000d8034 + 0xd7cfc),DAT_000d8038 + 0xd7cfe,
          *(undefined4 *)(*(int *)(DAT_000d8030 + 0xd7cf2) + param_1 * 0xc + 4));
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
  uVar16 = (**(code **)(*piVar2 + 0x108))(piVar2,DAT_000d803c);
  pcVar11 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar11)(piVar2,aCStack_b8);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x178),1);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
  (**(code **)(*piVar4 + 0xcc))(piVar4,piVar2,0,0);
  if (*(int *)((int)param_3 + 8) != 0) {
    pCVar5 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
    piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,0,0);
    Draw_Number::node();
    piVar4 = (int *)Draw_Number::node();
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,1,1);
    uVar16 = Draw_Number::SetNumberFont((Draw_Number *)piVar4,8);
    iVar12 = *(int *)((int)param_3 + 8);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    uVar16 = (*pcVar11)(piVar1,aCStack_b0);
    pcVar11 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar11)(piVar4,aCStack_a8);
    Draw_Number::SetNumber((Draw_Number *)piVar4,iVar12,0);
  }
  iVar12 = *(int *)((int)param_3 + 8);
  uVar13 = *(undefined4 *)((int)param_3 + 0xc);
  iVar7 = *(int *)(DAT_000d8054 + 0xd7dd6);
  uVar16 = __floatsidf(*(undefined4 *)((int)param_3 + 0x10));
  uVar17 = __floatsidf(*(undefined4 *)(iVar7 + iVar12 * 0x1c + 0x18));
  uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000d8020,DAT_000d8024);
  __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,(int)((ulonglong)uVar17 >> 0x20)
          );
  uVar6 = __fixdfsi();
  __format = (char *)(DAT_000d8058 + 0xd7e18);
  memset(acStack_80,0,10);
  sprintf(acStack_80,__format,uVar13);
  pcVar9 = (char *)(DAT_000d805c + 0xd7e30);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_80,pcVar9,extraout_s0);
  pcVar11 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a0,extraout_s0_00,extraout_s1);
  (*pcVar11)(piVar1,aCStack_a0);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x178),1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,1,1);
  memset(acStack_74,0,10);
  sprintf(acStack_74,__format,uVar6);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_74,pcVar9,extraout_s0_01);
  local_c8 = 0xff;
  local_c7 = 0xba;
  local_c6 = 0;
  uVar16 = (**(code **)(*piVar1 + 0xf4))(piVar1,&local_c8);
  pcVar11 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar11)(piVar1,aCStack_98);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x178),1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,1,1);
  memset(acStack_68,0,10);
  iVar12 = Get_Item_Upgrade_Count();
  sprintf(acStack_68,__format,iVar12);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_68,pcVar9,extraout_s0_02);
  local_c4 = 0xff;
  local_c3 = 0xba;
  local_c2 = 0;
  uVar16 = (**(code **)(*piVar1 + 0xf4))();
  pcVar11 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar11)(piVar1,aCStack_90);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x178),1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2,2);
  memset(acStack_5c,0,10);
  uVar8 = *(uint *)((int)param_3 + 4);
  iVar10 = *(int *)((int)param_3 + 8);
  if (uVar8 < 2) {
    uVar6 = *(undefined4 *)(iVar7 + iVar10 * 0x1c + 4);
  }
  else if (uVar8 == 2) {
    uVar6 = *(undefined4 *)(iVar7 + iVar10 * 0x1c + 8);
  }
  else {
    fVar15 = extraout_s0_03;
    if (uVar8 != 3) goto LAB_000d7f8c;
    uVar6 = *(undefined4 *)(iVar7 + iVar10 * 0x1c + 0xc);
  }
  sprintf(acStack_5c,__format,uVar6);
  fVar15 = extraout_s0_04;
LAB_000d7f8c:
  iVar7 = *(int *)(iVar7 + *(int *)((int)param_3 + 8) * 0x1c + 4);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_5c,(char *)(DAT_000d8074 + 0xd7fa6),fVar15);
  local_bf = 0xba;
  local_c0 = 0xff;
  local_be = 0;
  uVar16 = (**(code **)(*piVar1 + 0xf4))();
  pcVar11 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar11)(piVar1,aCStack_88);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x178),1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,3,3);
  if (iVar12 < iVar7) {
    local_bc = 0xff;
    local_bb = 0;
    local_ba = 0;
    (**(code **)(*piVar1 + 0xf4))(piVar1);
  }
  if (local_1c != *piVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


