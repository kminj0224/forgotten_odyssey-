/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9688  Symbol: SetUpgrade_Button */

/* Hero_BaseSkill::SetUpgrade_Button(int) */

void __thiscall Hero_BaseSkill::SetUpgrade_Button(Hero_BaseSkill *this,int param_1)

{
  int iVar1;
  CCNode *this_00;
  int *piVar2;
  N_Draw_Number *pNVar3;
  _ccColor3B *p_Var4;
  undefined uVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined local_40;
  undefined local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x15);
  if (iVar1 != 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x15);
    cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
  }
  piVar7 = *(int **)(DAT_000e9808 + 0xe96b2);
  piVar6 = *(int **)(DAT_000e980c + 0xe96b6);
  if (*(char *)(*piVar6 + *piVar7 * 0x6c + param_1 + DAT_000e9810) < '\n') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x17);
    iVar1 = DAT_000e9814;
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x16);
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
    pNVar3 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x17);
    iVar1 = *(int *)(iVar1 + 0xe96f2);
    uVar8 = N_Draw_Number::SetMoney_Re
                      (pNVar3,*(int *)((param_1 * 10 +
                                       (int)*(char *)(*piVar6 + *piVar7 * 0x6c + param_1 +
                                                     DAT_000e9810)) * 4 + iVar1),0);
    uVar8 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    vDrawFrame((CCNode *)this,(char *)(DAT_000e9820 + 0xe9752),local_38,local_34,local_30,local_2c);
    if (*(int *)(*piVar6 + (*piVar7 + DAT_000e9824) * 4 + 4) <
        *(int *)((param_1 * 10 + (int)*(char *)(*piVar6 + *piVar7 * 0x6c + param_1 + DAT_000e9810))
                 * 4 + iVar1)) {
      pNVar3 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x17);
      p_Var4 = (_ccColor3B *)&local_3c;
      local_3c = 0xff;
      uVar5 = 0x7f;
    }
    else {
      pNVar3 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x17);
      p_Var4 = (_ccColor3B *)&local_40;
      uVar5 = 0xff;
      local_40 = 0xff;
    }
    *(undefined *)((int)p_Var4 + 1) = uVar5;
    *(undefined *)((int)p_Var4 + 2) = uVar5;
    N_Draw_Number::SetColor(pNVar3,p_Var4);
  }
  else {
    piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x17);
    (**(code **)(*piVar6 + 0x6c))(piVar6,0);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x16);
    uVar8 = (**(code **)(*piVar6 + 0x6c))(piVar6,0);
    uVar8 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    vDrawFrame((CCNode *)this,(char *)(DAT_000e982c + 0xe97f4),local_28,local_24,local_20,local_1c);
  }
  return;
}


