/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4128  Symbol: Buy_Item_Popup */

/* In_App_Layer::Buy_Item_Popup(int) */

void __thiscall In_App_Layer::Buy_Item_Popup(In_App_Layer *this,int param_1)

{
  int *piVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  float extraout_s0;
  float fVar14;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar15;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  CCPoint aCStack_108 [8];
  CCPoint aCStack_100 [8];
  CCPoint aCStack_f8 [8];
  CCSize aCStack_f0 [2];
  CCPoint aCStack_e8 [8];
  CCPoint aCStack_e0 [8];
  CCSize aCStack_d8 [2];
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCSize aCStack_b8 [2];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  char acStack_a0 [32];
  char acStack_80 [100];
  int local_1c;
  
  piVar8 = *(int **)(DAT_000d443c + 0xd4134);
  iVar7 = param_1 + 0x97;
  local_1c = *piVar8;
  *(int *)(this + 0x118) = param_1;
  iVar10 = *(int *)(DAT_000d4440 + 0xd4152);
  if (*(int *)(iVar7 * 0xc + iVar10) != 0) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d4444 + 0xd4164));
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,1);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,param_1);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    uVar5 = __addsf3(*puVar4,DAT_000d4448);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,1);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,param_1);
    iVar6 = (**(code **)(*piVar3 + 0x38))();
    __addsf3(*(undefined4 *)(iVar6 + 4),DAT_000d444c);
    __aeabi_fcmpgt(uVar5,DAT_000d4450);
    pcVar12 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_108,extraout_s0,extraout_s1);
    (*pcVar12)(piVar1,aCStack_108);
    iVar6 = DAT_000d4454;
    fVar14 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    pcVar9 = (char *)(DAT_000d4458 + 0xd4206);
    piVar3 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (*(char **)(iVar10 + iVar7 * 0xc),pcVar9,fVar14);
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_100,extraout_s0_00,extraout_s1_00);
    uVar15 = (*pcVar12)(piVar3,aCStack_100);
    pcVar12 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_f8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar3,aCStack_f8);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,0,0);
    memset(acStack_80,0,100);
    iVar10 = *(int *)(DAT_000d4464 + 0xd4260);
    iVar11 = iVar10 + iVar7 * 0x18;
    iVar13 = *(int *)(iVar6 + 0xd4204);
    strcpy(acStack_80,*(char **)(*(int *)(iVar11 + 0x14) * 0xc + iVar13));
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar15 = __subsf3(*puVar4,0x41000000);
    fVar14 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_f0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                              );
    piVar3 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_80,aCStack_f0,0,pcVar9,fVar14);
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_e8,extraout_s0_01,extraout_s1_01);
    uVar15 = (*pcVar12)(piVar3,aCStack_e8);
    pcVar12 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar3,aCStack_e0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,1,1);
    iVar6 = *(int *)(iVar11 + 8);
    if (iVar6 != 0) {
      memset(acStack_a0,0,0x1e);
      sprintf(acStack_a0,(char *)(DAT_000d4474 + 0xd4302),iVar6);
      uVar15 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      fVar14 = (float)cocos2d::CCSize::CCSize
                                ((CCSize *)aCStack_d8,(float)uVar15,
                                 (float)((ulonglong)uVar15 >> 0x20));
      piVar3 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_a0,aCStack_d8,0,pcVar9,fVar14);
      pcVar12 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_d0,extraout_s0_02,extraout_s1_02);
      uVar15 = (*pcVar12)(piVar3,aCStack_d0);
      pcVar12 = *(code **)(*piVar3 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      (*pcVar12)(piVar3,aCStack_c8);
      (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,2,2);
    }
    piVar3 = (int *)Draw_Number::node();
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_c0,extraout_s0_03,extraout_s1_03);
    (*pcVar12)(piVar3,aCStack_c0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,3,3);
    Draw_Number::SetNumberFont((Draw_Number *)piVar3,0);
    Draw_Number::SetNumber((Draw_Number *)piVar3,*(int *)(iVar10 + iVar7 * 0x18),0);
    pcVar9 = *(char **)(iVar13 + *(int *)(iVar10 + iVar7 * 0x18 + 0x14) * 0xc + 8);
    uVar15 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    fVar14 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_b8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                              );
    piVar3 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (pcVar9,aCStack_b8,2,(char *)(DAT_000d4484 + 0xd43d0),fVar14);
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b0,extraout_s0_04,extraout_s1_04);
    uVar15 = (*pcVar12)(piVar3,aCStack_b0);
    pcVar12 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar12)(piVar3,aCStack_a8);
    (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,4,4);
    Draw_Money_Icon((CCNode *)this,SUB41(piVar1,0));
  }
  if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


