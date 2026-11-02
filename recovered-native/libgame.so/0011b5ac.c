/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011b5ac  Symbol: Notice_Marget_Item_Buy_or_Sell */

/* UI_Notice::Notice_Marget_Item_Buy_or_Sell(cocos2d::CCLayer*, char const*, int, int, int) */

void UI_Notice::Notice_Marget_Item_Buy_or_Sell
               (CCLayer *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  undefined uVar1;
  int *piVar2;
  CCArray *this;
  int iVar3;
  int iVar4;
  CCAction *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined *puVar8;
  char *__format;
  undefined uVar9;
  int *piVar10;
  code *pcVar11;
  uint uVar12;
  float in_s0;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar13;
  float extraout_s0_01;
  float extraout_s0_02;
  float in_s1;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar14;
  float extraout_s1_02;
  int in_stack_00000004;
  undefined local_c8 [2];
  undefined local_c6 [10];
  CCPoint local_bc;
  int local_b8;
  CCSize aCStack_b4 [2];
  CCPoint aCStack_ac [8];
  CCSize aCStack_a4 [2];
  CCPoint aCStack_9c [8];
  char acStack_94 [20];
  char acStack_80 [100];
  int local_1c;
  
  piVar10 = *(int **)(DAT_0011b79c + 0x11b5b8);
  local_1c = *piVar10;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_bc,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_0011b7a8 + 0x11b5e4),(char *)(DAT_0011b7ac + 0x11b5e6),
                   (CCNode *)param_2,local_bc,local_b8,2000,true,true);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  this = (CCArray *)(**(code **)(*piVar2 + 0x58))();
  iVar3 = cocos2d::CCArray::count(this);
  uVar14 = CONCAT44(extraout_s1,extraout_s0);
  for (uVar12 = 0; (int)uVar12 < iVar3; uVar12 = uVar12 + 1) {
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar12);
    iVar4 = (**(code **)(*piVar2 + 0xa0))();
    uVar14 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar4 != -1) {
      fVar13 = (float)(**(code **)(*piVar2 + 0xec))(piVar2,0);
      pCVar5 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar13);
      uVar14 = cocos2d::CCNode::runAction((CCNode *)piVar2,pCVar5);
    }
  }
  fVar13 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_b4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  uVar7 = DAT_0011b7c4;
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011b7bc + 0x11b660),aCStack_b4,1,
                             (char *)(DAT_0011b7c0 + 0x11b65c),fVar13);
  pcVar11 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_ac,extraout_s0_01,extraout_s1_01);
  (*pcVar11)(piVar2,aCStack_ac);
  sprintf(acStack_94,(char *)(DAT_0011b7d0 + 0x11b684),param_3);
  iVar3 = *piVar2;
  if (in_stack_00000004 == 1) {
    puVar8 = local_c8;
    uVar9 = 0;
    pcVar11 = *(code **)(iVar3 + 0xf4);
    local_c8[0] = 0;
    uVar1 = 0xff;
LAB_0011b6c4:
    puVar8[1] = uVar1;
  }
  else {
    if (in_stack_00000004 != 2) {
      if (in_stack_00000004 != 3) goto LAB_0011b6cc;
      pcVar11 = *(code **)(iVar3 + 0xf4);
      puVar8 = local_c6 + 6;
      uVar9 = 0xff;
      local_c6[6] = 0xff;
      uVar1 = 0;
      goto LAB_0011b6c4;
    }
    puVar8 = local_c6 + 2;
    local_c6[2] = 0xff;
    local_c6[3] = 0xff;
    pcVar11 = *(code **)(iVar3 + 0xf4);
    uVar9 = 0;
  }
  puVar8[2] = uVar9;
  (*pcVar11)(piVar2);
LAB_0011b6cc:
  (**(code **)(*piVar2 + 0x11c))(piVar2,acStack_94);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  uVar14 = (**(code **)(*piVar6 + 0xcc))(piVar6,piVar2,DAT_0011b7d4,100);
  fVar13 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_a4,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011b7d8 + 0x11b706),aCStack_a4,1,
                             (char *)(DAT_0011b7dc + 0x11b704),fVar13);
  pcVar11 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_9c,extraout_s0_02,extraout_s1_02);
  (*pcVar11)(piVar6,aCStack_9c);
  if (param_4 == 0) {
    __format = (char *)(DAT_0011b7e4 + 0x11b72e);
    iVar3 = DAT_0011b7e8 + 0x11b730;
  }
  else {
    __format = (char *)(DAT_0011b7ec + 0x11b738);
    iVar3 = DAT_0011b7f0 + 0x11b73a;
  }
  sprintf(acStack_80,__format,param_3,iVar3,uVar7);
  pcVar11 = *(code **)(*piVar2 + 0x80);
  uVar7 = (**(code **)(*piVar6 + 0x7c))(piVar6);
  (*pcVar11)(piVar2,uVar7);
  if (param_5 - 5U < 2) {
    setString((CCLabelTTF *)param_1,(char *)piVar6);
    **(undefined4 **)(DAT_0011b7f4 + 0x11b76e) = 5;
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar6,2000,0xffffffff);
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


