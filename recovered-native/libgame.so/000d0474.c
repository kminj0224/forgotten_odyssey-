/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d0474  Symbol: Set_String */

/* Item_Text_View_Layer::Set_String(int, int) */

void __thiscall Item_Text_View_Layer::Set_String(Item_Text_View_Layer *this,int param_1,int param_2)

{
  int iVar1;
  CCNode *this_00;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float fVar13;
  float extraout_s1_01;
  undefined8 uVar12;
  CCSize aCStack_160 [2];
  CCPoint aCStack_158 [8];
  CCPoint aCStack_150 [8];
  char acStack_148 [300];
  int local_1c;
  
  piVar8 = *(int **)(DAT_000d05c8 + 0xd0480);
  local_1c = *piVar8;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  if (iVar1 != 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
  }
  memset(acStack_148,0,300);
  if (param_2 == 4) {
    pcVar3 = *(char **)(*(int *)(DAT_000d05cc + 0xd04c2) + (*(int *)(this + 0x110) + -1) * 0xc + 4);
  }
  else {
    iVar4 = *(int *)(this + 0x110);
    iVar1 = *(int *)(DAT_000d05d0 + 0xd04d4);
    iVar6 = *(int *)(DAT_000d05d4 + 0xd04d6);
    if (0x13 < iVar4 - 0x97U) {
      if ((iVar4 < 0x51) || (iVar9 = iVar6 + iVar4 * 0x18, *(int *)(iVar9 + 0xc) != 2)) {
        if ((iVar4 - 0x5bU < 10) || (iVar4 - 0x33U < 0x1e)) {
          iVar4 = *(int *)(iVar6 + iVar4 * 0x18 + 0x14);
          pcVar3 = (char *)(DAT_000d05dc + 0xd053a);
        }
        else {
          iVar4 = *(int *)(iVar6 + iVar4 * 0x18 + 0x14);
          pcVar3 = (char *)(DAT_000d05e0 + 0xd0548);
        }
        iVar4 = iVar4 * 0xc;
        uVar7 = *(undefined4 *)(this + 0x11c);
        uVar5 = *(undefined4 *)(iVar1 + iVar4);
      }
      else {
        iVar4 = *(int *)(iVar9 + 0x14) * 0xc;
        pcVar3 = (char *)(DAT_000d05d8 + 0xd050e);
        uVar5 = *(undefined4 *)(iVar1 + iVar4);
        uVar7 = *(undefined4 *)(iVar9 + 0x10);
      }
      sprintf(acStack_148,pcVar3,uVar5,uVar7,*(undefined4 *)(iVar1 + iVar4 + 4));
      fVar11 = extraout_s0_00;
      fVar13 = extraout_s1_00;
      goto LAB_000d055e;
    }
    pcVar3 = *(char **)(iVar1 + *(int *)(iVar6 + iVar4 * 0x18 + 0x14) * 0xc);
  }
  strcpy(acStack_148,pcVar3);
  fVar11 = extraout_s0;
  fVar13 = extraout_s1;
LAB_000d055e:
  fVar11 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_160,fVar11,fVar13);
  piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (acStack_148,aCStack_160,0,(char *)(DAT_000d05f0 + 0xd0574),fVar11);
  pcVar10 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_158,extraout_s0_01,extraout_s1_01);
  uVar12 = (*pcVar10)(piVar2,aCStack_158);
  pcVar10 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_150,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar10)(piVar2,aCStack_150);
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,2,2);
  if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


