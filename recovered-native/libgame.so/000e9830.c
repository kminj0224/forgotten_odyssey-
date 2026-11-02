/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9830  Symbol: Draw_Skill_Icon_Text */

/* Hero_BaseSkill::Draw_Skill_Icon_Text(int) */

void __thiscall Hero_BaseSkill::Draw_Skill_Icon_Text(Hero_BaseSkill *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  char *pcVar10;
  float extraout_s0;
  float fVar11;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  undefined8 uVar12;
  CCPoint local_a4;
  CCPoint local_a0;
  int local_9c;
  int local_98;
  CCPoint aCStack_94 [8];
  CCPoint aCStack_8c [8];
  CCPoint aCStack_84 [8];
  CCPoint aCStack_7c [8];
  CCPoint aCStack_74 [8];
  CCPoint aCStack_6c [8];
  char acStack_64 [20];
  char acStack_50 [52];
  int local_1c;
  
  iVar9 = DAT_000e9ac8 + 0xe983e;
  piVar7 = *(int **)(iVar9 + DAT_000e9acc);
  local_1c = *piVar7;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
  if (iVar1 != 0) {
    pcVar8 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xe);
    (*pcVar8)(this,uVar2,1);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x12);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x12);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x13);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x13);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x14);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x14);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
  }
  SetSkillLevel(this,param_1);
  memset(acStack_64,0,0x14);
  sprintf(acStack_64,(char *)(DAT_000e9ad0 + 0xe98d2),param_1 + 1);
  uVar12 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_a4,extraout_s0,extraout_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_9c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  fVar11 = (float)vDrawFrame((CCNode *)this,acStack_64,local_a4,local_a0,local_9c,local_98);
  piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(param_1 * 4 + *(int *)(iVar9 + DAT_000e9adc)),
                             (char *)(DAT_000e9ae0 + 0xe9912),fVar11);
  uVar12 = (**(code **)(*piVar4 + 0xf4))();
  pcVar8 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_94,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar12 = (*pcVar8)(piVar4,aCStack_94);
  pcVar8 = *(code **)(*piVar4 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_8c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar8)(piVar4,aCStack_8c);
  (**(code **)(*(int *)this + 0xcc))(this,piVar4,0x12,0x12);
  memset(acStack_50,0,0x32);
  iVar5 = *(int *)(iVar9 + DAT_000e9afc);
  iVar6 = (int)*(char *)(**(int **)(iVar9 + DAT_000e9af0) + **(int **)(iVar9 + DAT_000e9af8) * 0x6c
                         + param_1 + DAT_000e9af4);
  iVar1 = *(int *)(iVar9 + DAT_000e9b00);
  if (iVar6 < 10) {
    iVar6 = param_1 * 0xb + iVar6;
    sprintf(acStack_50,(char *)(DAT_000e9b04 + 0xe99c2),*(undefined4 *)(iVar5 + param_1 * 0x10 + 4),
            (int)*(short *)(iVar1 + iVar6 * 2),(int)*(short *)(iVar1 + (iVar6 + 1) * 2));
    fVar11 = extraout_s0_00;
  }
  else {
    sprintf(acStack_50,(char *)(DAT_000e9b08 + 0xe99e0),*(undefined4 *)(iVar5 + param_1 * 0x10 + 4),
            (int)*(short *)(iVar1 + (param_1 * 0xb + iVar6) * 2));
    fVar11 = extraout_s0_01;
  }
  pcVar10 = (char *)(DAT_000e9b0c + 0xe99f0);
  piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_50,pcVar10,fVar11);
  uVar12 = (**(code **)(*piVar4 + 0xf4))();
  pcVar8 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_84,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar12 = (*pcVar8)(piVar4,aCStack_84);
  pcVar8 = *(code **)(*piVar4 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_7c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar8)(piVar4,aCStack_7c);
  fVar11 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar4,0x13,0x13);
  piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(iVar5 + param_1 * 0x10 + 0xc),pcVar10,fVar11);
  uVar12 = (**(code **)(*piVar4 + 0xf4))();
  pcVar8 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_74,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar12 = (*pcVar8)(piVar4,aCStack_74);
  pcVar8 = *(code **)(*piVar4 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_6c,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar8)(piVar4,aCStack_6c);
  (**(code **)(*(int *)this + 0xcc))(this,piVar4,0x14,0x14);
  SetUpgrade_Button(this,param_1);
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


