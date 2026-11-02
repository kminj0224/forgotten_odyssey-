/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d05f8  Symbol: Set_Lv */

/* Item_Text_View_Layer::Set_Lv(int, int) */

void Item_Text_View_Layer::Set_Lv(int param_1,int param_2)

{
  int iVar1;
  CCNode *this;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  float extraout_s0;
  float fVar6;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar7;
  CCSize aCStack_54 [2];
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000d0704 + 0xd0604);
  local_1c = *piVar3;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
  if (iVar1 != 0) {
    this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
    cocos2d::CCNode::removeFromParentAndCleanup(this,true);
  }
  iVar5 = *(int *)(DAT_000d0708 + 0xd0630);
  iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x110) * 0x18 + 8);
  if (iVar1 != 0) {
    memset(acStack_3c,0,0x1e);
    sprintf(acStack_3c,(char *)(DAT_000d070c + 0xd064e),iVar1);
    fVar6 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_54,extraout_s0,extraout_s1);
    piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (acStack_3c,aCStack_54,0,(char *)(DAT_000d071c + 0xd0666),fVar6);
    pcVar4 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_4c,extraout_s0_00,extraout_s1_00);
    uVar7 = (*pcVar4)(piVar2,aCStack_4c);
    pcVar4 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    (*pcVar4)(piVar2,aCStack_44);
    if (*(int *)(**(int **)(DAT_000d0724 + 0xd06a0) +
                 (**(int **)(DAT_000d0728 + 0xd06a8) * 9 + *(int *)(param_1 + 0x124) + DAT_000d072c)
                 * 4 + 4) < *(int *)(iVar5 + *(int *)(param_1 + 0x110) * 0x18 + 8)) {
      (**(code **)(*piVar2 + 0xf4))(piVar2);
    }
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,4,4);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


