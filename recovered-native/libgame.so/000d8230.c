/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d8230  Symbol: Cash_Buy_Item_Popup */

/* Market_Equip::Cash_Buy_Item_Popup(int) */

void __thiscall Market_Equip::Cash_Buy_Item_Popup(Market_Equip *this,int param_1)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  code *pcVar11;
  int *piVar12;
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
  
  piVar8 = *(int **)(DAT_000d8524 + 0xd823c);
  iVar1 = param_1 + 0x97;
  local_1c = *piVar8;
  iVar10 = *(int *)(DAT_000d8528 + 0xd8250);
  if (*(int *)(iVar1 * 0xc + iVar10) != 0) {
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d852c + 0xd8264));
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x68);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,1);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,param_1);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x38))();
    uVar6 = __addsf3(*puVar5,DAT_000d8530);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x68);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,1);
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,param_1);
    iVar7 = (**(code **)(*piVar4 + 0x38))();
    __addsf3(*(undefined4 *)(iVar7 + 4),DAT_000d8534);
    __aeabi_fcmpgt(uVar6,DAT_000d8538);
    pcVar11 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_108,extraout_s0,extraout_s1);
    (*pcVar11)(piVar2,aCStack_108);
    fVar14 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar2,0x69,0x69);
    piVar12 = (int *)(DAT_000d853c + 0xd8300);
    pcVar9 = (char *)(DAT_000d8540 + 0xd8302);
    piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (*(char **)(iVar10 + iVar1 * 0xc),pcVar9,fVar14);
    pcVar11 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_100,extraout_s0_00,extraout_s1_00);
    uVar15 = (*pcVar11)(piVar4,aCStack_100);
    pcVar11 = *(code **)(*piVar4 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_f8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar11)(piVar4,aCStack_f8);
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,0,0);
    memset(acStack_80,0,100);
    iVar10 = *(int *)(DAT_000d854c + 0xd835e);
    iVar7 = iVar10 + iVar1 * 0x18;
    iVar13 = *piVar12;
    strcpy(acStack_80,*(char **)(*(int *)(iVar7 + 0x14) * 0xc + iVar13));
    puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
    uVar15 = __subsf3(*puVar5,0x41000000);
    fVar14 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_f0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                              );
    piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_80,aCStack_f0,0,pcVar9,fVar14);
    pcVar11 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_e8,extraout_s0_01,extraout_s1_01);
    uVar15 = (*pcVar11)(piVar4,aCStack_e8);
    pcVar11 = *(code **)(*piVar4 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar11)(piVar4,aCStack_e0);
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,1,1);
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar7 != 0) {
      memset(acStack_a0,0,0x1e);
      sprintf(acStack_a0,(char *)(DAT_000d855c + 0xd8400),iVar7);
      uVar15 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      fVar14 = (float)cocos2d::CCSize::CCSize
                                ((CCSize *)aCStack_d8,(float)uVar15,
                                 (float)((ulonglong)uVar15 >> 0x20));
      piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_a0,aCStack_d8,0,pcVar9,fVar14);
      pcVar11 = *(code **)(*piVar4 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_d0,extraout_s0_02,extraout_s1_02);
      uVar15 = (*pcVar11)(piVar4,aCStack_d0);
      pcVar11 = *(code **)(*piVar4 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      (*pcVar11)(piVar4,aCStack_c8);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,2,2);
    }
    piVar4 = (int *)Draw_Number::node();
    pcVar11 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_c0,extraout_s0_03,extraout_s1_03);
    (*pcVar11)(piVar4,aCStack_c0);
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,3,3);
    Draw_Number::SetNumberFont((Draw_Number *)piVar4,0);
    Draw_Number::SetNumber((Draw_Number *)piVar4,*(int *)(iVar10 + iVar1 * 0x18),0);
    pcVar9 = *(char **)(iVar13 + *(int *)(iVar10 + iVar1 * 0x18 + 0x14) * 0xc + 8);
    uVar15 = (**(code **)(*piVar2 + 0x7c))(piVar2);
    fVar14 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)aCStack_b8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20)
                              );
    piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (pcVar9,aCStack_b8,2,(char *)(DAT_000d856c + 0xd84ce),fVar14);
    pcVar11 = *(code **)(*piVar4 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b0,extraout_s0_04,extraout_s1_04);
    uVar15 = (*pcVar11)(piVar4,aCStack_b0);
    pcVar11 = *(code **)(*piVar4 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar11)(piVar4,aCStack_a8);
    (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,4,4);
  }
  if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


