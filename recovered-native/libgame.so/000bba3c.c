/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bba3c  Symbol: ani_KnockBack2_ani */

/* ani_KnockBack2_ani(cocos2d::CCLayer*, float, float) */

void ani_KnockBack2_ani(CCLayer *param_1,float param_2,float param_3)

{
  int **ppiVar1;
  CCObject *this;
  undefined4 *puVar2;
  int iVar3;
  CCFiniteTimeAction *pCVar4;
  CCAction *pCVar5;
  undefined4 in_r1;
  int iVar6;
  uint uVar7;
  CCNode *this_00;
  undefined4 uVar8;
  int *this_01;
  CCPoint *pCVar9;
  int **ppiVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar11;
  undefined8 uVar12;
  undefined4 local_40;
  CCActionInterval *local_3c;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar6 = DAT_000bbc70 + 0xbba4e;
  ppiVar1 = (int **)(**(code **)(*(int *)param_1 + 0xa8))();
  uVar7 = *ppiVar1[1];
  if (1 < uVar7) {
    if (1 < uVar7 - 2) {
      return;
    }
    uVar8 = 0;
    ppiVar10 = *(int ***)(iVar6 + DAT_000bbc8c);
    if (uVar7 == 2) {
      puVar2 = (undefined4 *)(**(code **)(**ppiVar10 + 0x38))();
      uVar8 = __subsf3(in_r1,DAT_000bbc7c);
      uVar8 = __addsf3(uVar8,*puVar2);
    }
    if (*ppiVar1[1] == 3) {
      puVar2 = (undefined4 *)(**(code **)(***(int ***)(iVar6 + DAT_000bbc90) + 0x38))();
      uVar8 = __subsf3(DAT_000bbc7c,in_r1);
      uVar8 = __addsf3(uVar8,*puVar2);
    }
    iVar3 = __aeabi_fcmplt(uVar8,0);
    if (iVar3 == 0) {
      __aeabi_fcmpgt(uVar8,DAT_000bbc80);
    }
    pCVar9 = *(CCPoint **)(**ppiVar1 + 0x294);
    if (*ppiVar1[1] == 2) {
      uVar12 = (**(code **)(**ppiVar10 + 0x38))();
      fVar11 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar11,pCVar9);
      this_01 = *ppiVar10;
    }
    else {
      uVar12 = (**(code **)(**ppiVar10 + 0x38))();
      fVar11 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar11,pCVar9);
      this_01 = **(int ***)(iVar6 + DAT_000bbc90);
    }
    pCVar5 = (CCAction *)cocos2d::CCSpawn::actions(pCVar4,0);
    cocos2d::CCNode::runAction((CCNode *)this_01,pCVar5);
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test((CCSprite *)param_1,*(_KG_Anit **)*puVar2);
    return;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  if (*(int *)(*(int *)(iVar3 + 4) + 100) == 7) {
    return;
  }
  iVar3 = __aeabi_fcmplt(in_r1,DAT_000bbc74);
  local_40 = in_r1;
  if (iVar3 != 0) {
    local_40 = DAT_000bbc74;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  *(undefined4 *)(*(int *)(iVar3 + 4) + 100) = 7;
  cocos2d::CCNode::stopAllActions();
  this_00 = **(CCNode ***)(iVar6 + DAT_000bbc78);
  iVar6 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  cocos2d::CCNode::getChildByTag(this_00,iVar6);
  this = (CCObject *)cocos2d::CCObject::copy();
  uVar8 = 0;
  if (*ppiVar1[1] == 0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar8 = __subsf3(local_40,DAT_000bbc7c);
    uVar8 = __addsf3(uVar8,*puVar2);
  }
  if (*ppiVar1[1] == 1) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar8 = __subsf3(DAT_000bbc7c,local_40);
    uVar8 = __addsf3(uVar8,*puVar2);
  }
  iVar6 = __aeabi_fcmplt(uVar8,0);
  fVar11 = extraout_s0;
  if (iVar6 == 0) {
    __aeabi_fcmpgt(uVar8,DAT_000bbc80);
    fVar11 = extraout_s0_00;
  }
  if (*ppiVar1[1] == 0) {
    pCVar9 = *(CCPoint **)(this + 0x20);
    uVar12 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
    fVar11 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  }
  else {
    if (*ppiVar1[1] != 1) goto LAB_000bbb68;
    pCVar9 = *(CCPoint **)(this + 0x20);
    uVar12 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
    fVar11 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_30,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  }
  local_3c = (CCActionInterval *)cocos2d::CCMoveTo::actionWithDuration(fVar11,pCVar9);
  fVar11 = extraout_s0_01;
LAB_000bbb68:
  uVar8 = cocos2d::CCEaseIn::actionWithAction(local_3c,fVar11);
  pCVar5 = (CCAction *)cocos2d::CCSpawn::actions((CCFiniteTimeAction *)this,uVar8,0);
  cocos2d::CCNode::runAction((CCNode *)param_1,pCVar5);
  cocos2d::CCObject::release(this);
  return;
}


