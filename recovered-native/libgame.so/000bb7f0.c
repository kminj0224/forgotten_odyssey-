/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bb7f0  Symbol: ani_KnockBack_ani */

/* ani_KnockBack_ani(cocos2d::CCLayer*, float, float) */

void ani_KnockBack_ani(CCLayer *param_1,float param_2,float param_3)

{
  int *piVar1;
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
  CCPoint *pCVar9;
  int **ppiVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 local_40;
  undefined4 local_3c;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar6 = DAT_000bba1c + 0xbb802;
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0xa8))();
  uVar7 = *(uint *)piVar1[1];
  if (1 < uVar7) {
    if (1 < uVar7 - 2) {
      return;
    }
    uVar8 = 0;
    ppiVar10 = *(int ***)(iVar6 + DAT_000bba34);
    if (uVar7 == 2) {
      puVar2 = (undefined4 *)(**(code **)(**ppiVar10 + 0x38))();
      uVar8 = __subsf3(in_r1,DAT_000bba28);
      uVar8 = __addsf3(uVar8,*puVar2);
    }
    if (*(int *)piVar1[1] == 3) {
      puVar2 = (undefined4 *)(**(code **)(***(int ***)(iVar6 + DAT_000bba38) + 0x38))();
      uVar8 = __subsf3(DAT_000bba28,in_r1);
      uVar8 = __addsf3(uVar8,*puVar2);
    }
    iVar3 = __aeabi_fcmplt(uVar8,0);
    if (iVar3 == 0) {
      __aeabi_fcmpgt(uVar8,DAT_000bba2c);
    }
    pCVar9 = *(CCPoint **)(*(int *)(*piVar1 + 0x1c) + 0x294);
    if (*(int *)piVar1[1] == 2) {
      uVar12 = (**(code **)(**ppiVar10 + 0x38))();
      fVar11 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar11,pCVar9);
      piVar1 = *ppiVar10;
    }
    else {
      uVar12 = (**(code **)(**ppiVar10 + 0x38))();
      fVar11 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar11,pCVar9);
      piVar1 = **(int ***)(iVar6 + DAT_000bba38);
    }
    pCVar5 = (CCAction *)cocos2d::CCSpawn::actions(pCVar4,0);
    cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar5);
    piVar1 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test((CCSprite *)param_1,*(_KG_Anit **)(*piVar1 + 0x1c));
    return;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  if (*(int *)(*(int *)(iVar3 + 4) + 100) == 6) {
    return;
  }
  iVar3 = __aeabi_fcmplt(in_r1,DAT_000bba20);
  local_40 = in_r1;
  if (iVar3 != 0) {
    local_40 = DAT_000bba20;
  }
  iVar3 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  *(undefined4 *)(*(int *)(iVar3 + 4) + 100) = 6;
  cocos2d::CCNode::stopAllActions();
  this_00 = **(CCNode ***)(iVar6 + DAT_000bba24);
  iVar6 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  cocos2d::CCNode::getChildByTag(this_00,iVar6);
  this = (CCObject *)cocos2d::CCObject::copy();
  uVar8 = 0;
  if (*(int *)piVar1[1] == 0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar8 = __subsf3(local_40,DAT_000bba28);
    uVar8 = __addsf3(uVar8,*puVar2);
  }
  if (*(int *)piVar1[1] == 1) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar8 = __subsf3(DAT_000bba28,local_40);
    uVar8 = __addsf3(uVar8,*puVar2);
  }
  iVar6 = __aeabi_fcmplt(uVar8,0);
  if (iVar6 == 0) {
    __aeabi_fcmpgt(uVar8,DAT_000bba2c);
  }
  if (*(int *)piVar1[1] == 0) {
    pCVar9 = *(CCPoint **)(this + 0x20);
    uVar12 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
    fVar11 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  }
  else {
    if (*(int *)piVar1[1] != 1) goto LAB_000bb91c;
    pCVar9 = *(CCPoint **)(this + 0x20);
    uVar12 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
    fVar11 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_30,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  }
  local_3c = cocos2d::CCMoveTo::actionWithDuration(fVar11,pCVar9);
LAB_000bb91c:
  pCVar5 = (CCAction *)cocos2d::CCSpawn::actions((CCFiniteTimeAction *)this,local_3c,0);
  cocos2d::CCNode::runAction((CCNode *)param_1,pCVar5);
  cocos2d::CCObject::release(this);
  return;
}


