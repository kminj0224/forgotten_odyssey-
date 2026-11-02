/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011aee4  Symbol: init_Notice_InAppItem */

/* UI_Notice::init_Notice_InAppItem(cocos2d::CCLayer*, char const*, int, int, int&, int) */

void UI_Notice::init_Notice_InAppItem
               (CCLayer *param_1,char *param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  CCArray *this;
  int iVar3;
  int iVar4;
  CCAction *pCVar5;
  code *pcVar6;
  uint uVar7;
  float in_s0;
  float fVar8;
  float in_s1;
  undefined8 uVar9;
  undefined4 in_stack_00000008;
  CCPoint local_30;
  int local_2c;
  CCSize aCStack_28 [2];
  CCPoint aCStack_20 [12];
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,in_s0,in_s1);
  uVar9 = vDrawScript_Lode((char *)(DAT_0011afdc + 0x11af0e),(char *)(DAT_0011afe0 + 0x11af10),
                           (CCNode *)param_2,local_30,local_2c,2000,true,true);
  fVar8 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011aff0 + 0x11af3a),aCStack_28,1,
                             (char *)(DAT_0011aff4 + 0x11af38),fVar8);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  this = (CCArray *)(**(code **)(*piVar2 + 0x58))();
  iVar3 = cocos2d::CCArray::count(this);
  for (uVar7 = 0; (int)uVar7 < iVar3; uVar7 = uVar7 + 1) {
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar7);
    iVar4 = (**(code **)(*piVar2 + 0xa0))();
    if (iVar4 != -1) {
      fVar8 = (float)(**(code **)(*piVar2 + 0xec))(piVar2,0);
      pCVar5 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar8);
      cocos2d::CCNode::runAction((CCNode *)piVar2,pCVar5);
    }
  }
  uVar9 = setString((CCLabelTTF *)param_1,(char *)piVar1);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar1,aCStack_20);
  *(undefined4 *)param_6 = in_stack_00000008;
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2000,0xffffffff);
  return;
}


