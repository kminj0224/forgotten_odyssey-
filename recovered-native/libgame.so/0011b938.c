/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011b938  Symbol: init_Remove_Slot */

/* UI_Notice::init_Remove_Slot() */

CCNode * UI_Notice::init_Remove_Slot(void)

{
  CCNode *in_r0;
  int *piVar1;
  CCArray *this;
  int iVar2;
  int iVar3;
  CCAction *pCVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  float in_s0;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar8;
  float extraout_s0_01;
  float in_s1;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar9;
  float extraout_s1_01;
  CCPoint local_30;
  int local_2c;
  CCSize aCStack_28 [2];
  CCPoint aCStack_20 [12];
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_0011ba28 + 0x11b95e),(char *)(DAT_0011ba2c + 0x11b960),in_r0,
                   local_30,local_2c,2000,true,true);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0xd);
  this = (CCArray *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = cocos2d::CCArray::count(this);
  uVar9 = CONCAT44(extraout_s1,extraout_s0);
  for (uVar7 = 0; (int)uVar7 < iVar2; uVar7 = uVar7 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar7);
    iVar3 = (**(code **)(*piVar1 + 0xa0))();
    uVar9 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar3 != -1) {
      fVar8 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0);
      pCVar4 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar8);
      uVar9 = cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar4);
    }
  }
  fVar8 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011ba40 + 0x11b9da),aCStack_28,1,
                             (char *)(DAT_0011ba44 + 0x11b9d6),fVar8);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_01,extraout_s1_01);
  (*pcVar6)(piVar1,aCStack_20);
  setString((CCLabelTTF *)in_r0,(char *)piVar1);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0xd);
  (**(code **)(*piVar5 + 0xcc))(piVar5,piVar1,2000,0xffffffff);
  return in_r0;
}


