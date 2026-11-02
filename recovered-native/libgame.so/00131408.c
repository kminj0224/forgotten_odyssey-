/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00131408  Symbol: update */

/* Ending_ani::update(float) */

float Ending_ani::update(float param_1)

{
  CCNode *in_r0;
  int iVar1;
  CCNode *pCVar2;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  
  if (*(int *)(in_r0 + 0x110) == 1) {
    iVar1 = cocos2d::CCNode::getChildByTag(in_r0,0);
    param_1 = extraout_s0;
    if (iVar1 != 0) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
      iVar1 = cocos2d::CCNode::getChildByTag(pCVar2,2);
      param_1 = extraout_s0_00;
      if (iVar1 != 0) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
        cocos2d::CCNode::getChildByTag(pCVar2,2);
        iVar1 = cocos2d::CCNode::numberOfRunningActions();
        param_1 = extraout_s0_01;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_001314ac + 0x13144e));
        }
      }
    }
  }
  else if ((*(int *)(in_r0 + 0x110) == 2) &&
          (iVar1 = cocos2d::CCNode::getChildByTag(in_r0,1), param_1 = extraout_s0_02, iVar1 != 0)) {
    cocos2d::CCNode::getChildByTag(in_r0,1);
    iVar1 = cocos2d::CCNode::numberOfRunningActions();
    param_1 = extraout_s0_03;
    if (iVar1 == 0) {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,1);
      cocos2d::CCNode::removeFromParentAndCleanup(pCVar2,true);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
      KG_removeChild(pCVar2,true);
      param_1 = (float)Fin_Lode((Ending_ani *)in_r0);
    }
  }
  return param_1;
}


