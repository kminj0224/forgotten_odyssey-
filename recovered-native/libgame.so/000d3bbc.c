/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3bbc  Symbol: STEP_CASH_BEGAN */

/* In_App_Layer::STEP_CASH_BEGAN(cocos2d::CCPoint) */

void In_App_Layer::STEP_CASH_BEGAN(CCPoint param_1)

{
  int iVar1;
  CCNode *pCVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  CCPoint in_r1;
  undefined4 in_r2;
  code *pcVar6;
  float extraout_s0;
  float extraout_s1;
  CCPoint aCStack_20 [12];
  
  cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d3cd0);
  if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(in_r1,DAT_000d3cd4), iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpgt(in_r2,DAT_000d3cd8), iVar1 == 0)) ||
     (iVar1 = __aeabi_fcmplt(in_r2,DAT_000d3cdc), iVar1 == 0)) {
    iVar1 = __aeabi_fcmpgt(in_r1,DAT_000d3ce0);
    if (((iVar1 != 0) && (iVar1 = __aeabi_fcmplt(in_r1,DAT_000d3ce4), iVar1 != 0)) &&
       ((iVar1 = __aeabi_fcmpgt(in_r2,DAT_000d3cd8), iVar1 != 0 &&
        (iVar1 = __aeabi_fcmplt(in_r2,DAT_000d3cdc), iVar1 != 0)))) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000d3ce8 + 0xd3c38));
    }
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
    iVar1 = Sprite_Touch2(pCVar2,in_r1);
    if (iVar1 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
      pcVar6 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
      (*pcVar6)(piVar3,aCStack_20);
    }
  }
  iVar1 = 5;
  do {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
    iVar4 = Sprite_Touch2(pCVar2,in_r1);
    pcVar6 = *(code **)(*(int *)param_1 + 0xd8);
    if (iVar4 == 0) {
      uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
      (*pcVar6)(param_1,uVar5,iVar1);
    }
    else {
      uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
      (*pcVar6)(param_1,uVar5,0xb);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
      (**(code **)(*piVar3 + 0x108))(piVar3,DAT_000d3cf0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xb);
  return;
}


