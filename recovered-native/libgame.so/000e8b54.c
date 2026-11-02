/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8b54  Symbol: Lode_File4 */

/* ReinforcementLayer::Lode_File4(int, void*) */

void __thiscall ReinforcementLayer::Lode_File4(ReinforcementLayer *this,int param_1,void *param_2)

{
  int *piVar1;
  CCArray *this_00;
  int iVar2;
  int iVar3;
  CCAction *pCVar4;
  CCNode *pCVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar10;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  CCPoint local_bc;
  int local_b8;
  CCPoint aCStack_b4 [8];
  CCSize aCStack_ac [2];
  CCPoint aCStack_a4 [8];
  CCSize aCStack_9c [2];
  CCPoint aCStack_94 [8];
  char acStack_8c [12];
  char acStack_80 [100];
  int local_1c;
  
  piVar7 = *(int **)(DAT_000e8cf4 + 0xe8b60);
  local_1c = *piVar7;
  memset(acStack_80,0,100);
  memset(acStack_8c,0,10);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_bc,extraout_s0,extraout_s1);
  vDrawScript_Lode((char *)(DAT_000e8cfc + 0xe8b94),(char *)(DAT_000e8d00 + 0xe8b96),(CCNode *)this,
                   local_bc,local_b8,1,true,false);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  this_00 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = cocos2d::CCArray::count(this_00);
  for (uVar9 = 0; (int)uVar9 < iVar2; uVar9 = uVar9 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar9);
    iVar3 = (**(code **)(*piVar1 + 0xa0))();
    if (iVar3 != -1) {
      fVar10 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0);
      pCVar4 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar10);
      cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar4);
    }
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  pcVar8 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_b4,extraout_s0_00,extraout_s1_00);
  (*pcVar8)(piVar1,aCStack_b4);
  iVar2 = DAT_000e8d18;
                    /* WARNING: Load size is inaccurate */
  sprintf(acStack_80,(char *)(DAT_000e8d14 + 0xe8c2c),
          *(undefined4 *)(*param_2 * 0xc + *(int *)(DAT_000e8d10 + 0xe8c22)),
          *(undefined4 *)((int)param_2 + 8));
  fVar10 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_ac,extraout_s0_01,extraout_s1_01);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_80,aCStack_ac,1,(char *)(iVar2 + 0xe8c42),fVar10);
  pcVar8 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a4,extraout_s0_02,extraout_s1_02);
  (*pcVar8)(piVar1,aCStack_a4);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,0);
  (**(code **)(*piVar6 + 0xc4))(piVar6,piVar1);
  sprintf(acStack_8c,(char *)(DAT_000e8d30 + 0xe8c96),
          *(undefined4 *)
           (*(int *)(DAT_000e8d2c + 0xe8c8a) + *(int *)((int)param_2 + 8) * 0x1c + 0x10));
  fVar10 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_9c,extraout_s0_03,extraout_s1_03);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_8c,aCStack_9c,1,(char *)(iVar2 + 0xe8c42),fVar10);
  pcVar8 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_94,extraout_s0_04,extraout_s1_04);
  (*pcVar8)(piVar1,aCStack_94);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,0);
  (**(code **)(*piVar6 + 0xc4))(piVar6,piVar1);
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


