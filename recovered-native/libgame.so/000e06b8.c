/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e06b8  Symbol: Reinforcement_Item_View */

/* Market_Store::Reinforcement_Item_View(int, int) */

void __thiscall Market_Store::Reinforcement_Item_View(Market_Store *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  CCNode *pCVar4;
  int *piVar5;
  CCTexture2D *pCVar6;
  int *this_00;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  code *pcVar11;
  char *__format;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar17;
  undefined8 uVar18;
  float extraout_s1;
  undefined8 uVar19;
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
  
  iVar1 = DAT_000e0a38 + 0xe06c8;
  piVar10 = *(int **)(iVar1 + DAT_000e0a3c);
  local_1c = *piVar10;
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e0a40 + 0xe06d6));
  memset(acStack_50,0,0x32);
  sprintf(acStack_50,(char *)(DAT_000e0a48 + 0xe06fe),DAT_000e0a4c + 0xe06fc,
          *(undefined4 *)(*(int *)(iVar1 + DAT_000e0a44) + param_1 * 0xc + 4));
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
  uVar18 = (**(code **)(*piVar3 + 0x108))(piVar3,DAT_000e0a50);
  pcVar11 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar11)(piVar3,aCStack_b8);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x1b4),1);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  (**(code **)(*piVar5 + 0xcc))(piVar5,piVar3,0,0);
  piVar5 = *(int **)(iVar1 + DAT_000e0a5c);
  piVar8 = *(int **)(iVar1 + DAT_000e0a60);
  if (*(int *)(param_2 * 0x14 + *piVar8 * 2000 + *piVar5 + DAT_000e0a64) != 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,0,0);
    Draw_Number::node();
    this_00 = (int *)Draw_Number::node();
    (**(code **)(*piVar3 + 0xcc))(piVar3,this_00,1,1);
    uVar18 = Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
    iVar15 = *(int *)(*piVar5 + param_2 * 0x14 + *piVar8 * 2000 + DAT_000e0a64);
    pcVar11 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    uVar18 = (*pcVar11)(piVar2,aCStack_b0);
    pcVar11 = *(code **)(*this_00 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    (*pcVar11)(this_00,aCStack_a8);
    Draw_Number::SetNumber((Draw_Number *)this_00,iVar15,0);
  }
  __format = (char *)(DAT_000e0a74 + 0xe081a);
  memset(acStack_80,0,10);
  iVar12 = param_2 * 0x14;
  pcVar13 = (char *)(DAT_000e0a78 + 0xe0846);
  sprintf(acStack_80,__format,*(undefined4 *)(*piVar5 + iVar12 + *piVar8 * 2000 + DAT_000e0a64 + 4))
  ;
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_80,pcVar13,extraout_s0);
  pcVar11 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a0,extraout_s0_00,extraout_s1);
  (*pcVar11)(piVar2,aCStack_a0);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x1b4),1);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,1,1);
  memset(acStack_74,0,10);
  iVar16 = *piVar5;
  iVar14 = *piVar8;
  uVar18 = __floatsidf(*(undefined4 *)(iVar16 + iVar12 + iVar14 * 2000 + DAT_000e0a84));
  iVar15 = *(int *)(iVar1 + DAT_000e0a88);
  uVar19 = __floatsidf(*(undefined4 *)
                        (iVar15 + *(int *)(iVar16 + *(int *)(this + 0x194) * 0x14 + iVar14 * 2000 +
                                          DAT_000e0a64) * 0x1c + 0x18));
  uVar19 = __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000e0a30,DAT_000e0a34);
  __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar19,(int)((ulonglong)uVar19 >> 0x20)
          );
  uVar7 = __fixdfsi();
  sprintf(acStack_74,__format,uVar7);
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_74,pcVar13,extraout_s0_01);
  local_c8 = 0xff;
  local_c7 = 0xba;
  local_c6 = 0;
  uVar18 = (**(code **)(*piVar2 + 0xf4))(piVar2,&local_c8);
  pcVar11 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar11)(piVar2,aCStack_98);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x1b4),1);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,1,1);
  iVar1 = Get_Item_Upgrade_Count();
  memset(acStack_68,0,10);
  sprintf(acStack_68,__format,iVar1);
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_68,pcVar13,extraout_s0_02);
  local_c4 = 0xff;
  local_c3 = 0xba;
  local_c2 = 0;
  uVar18 = (**(code **)(*piVar2 + 0xf4))();
  pcVar11 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar11)(piVar2,aCStack_90);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x1b4),1);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,2,2);
  memset(acStack_5c,0,10);
  iVar12 = *piVar5 + iVar12 + *piVar8 * 2000;
  uVar9 = *(uint *)(iVar12 + DAT_000e0a98 + 4);
  if (uVar9 < 2) {
    uVar7 = *(undefined4 *)(iVar15 + *(int *)(iVar12 + DAT_000e0a64) * 0x1c + 4);
  }
  else if (uVar9 == 2) {
    uVar7 = *(undefined4 *)(iVar15 + *(int *)(iVar12 + DAT_000e0a64) * 0x1c + 8);
  }
  else {
    fVar17 = extraout_s0_03;
    if (uVar9 != 3) goto LAB_000e0ab6;
    uVar7 = *(undefined4 *)(iVar15 + *(int *)(iVar12 + DAT_000e0b64) * 0x1c + 0xc);
  }
  sprintf(acStack_5c,__format,uVar7);
  fVar17 = extraout_s0_04;
LAB_000e0ab6:
  iVar15 = *(int *)(iVar15 + *(int *)(*piVar5 + param_2 * 0x14 + *piVar8 * 2000 + DAT_000e0b64) *
                             0x1c + 4);
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_5c,(char *)(DAT_000e0b68 + 0xe0ae2),fVar17);
  local_bf = 0xba;
  local_c0 = 0xff;
  local_be = 0;
  uVar18 = (**(code **)(*piVar2 + 0xf4))();
  pcVar11 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar11)(piVar2,aCStack_88);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)(this + 0x1b4),1);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,3,3);
  if (iVar1 < iVar15) {
    local_bc = 0xff;
    local_bb = 0;
    local_ba = 0;
    (**(code **)(*piVar2 + 0xf4))(piVar2);
  }
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


