/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bb30c  Symbol: ani_Die_ani */

/* ani_Die_ani(cocos2d::CCLayer*, float) */

void ani_Die_ani(CCLayer *param_1,float param_2)

{
  int *piVar1;
  CCObject *this;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CCAction *pCVar5;
  undefined4 in_r1;
  CCPoint *pCVar6;
  int iVar7;
  uint uVar8;
  CCPoint *pCVar9;
  int **ppiVar10;
  CCNode *this_00;
  int **ppiVar11;
  float fVar12;
  undefined8 uVar13;
  code *local_5c;
  CCFiniteTimeAction *local_58;
  _ccColor4B local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  _ccColor4B local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar7 = DAT_000bb56c + 0xbb31a;
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0xa8))();
  uVar8 = *(uint *)piVar1[1];
  if (1 < uVar8) {
    if (uVar8 == 2) {
      iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      if (*(int *)(*(int *)(iVar2 + 4) + 100) == 7) {
        return;
      }
      iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 7;
      iVar2 = cocos2d::CCScheduler::sharedScheduler();
      *(undefined4 *)(iVar2 + 0x14) = 0x3f000000;
      pCVar9 = *(CCPoint **)(*(int *)(*piVar1 + 0x1c) + 0x294);
      ppiVar11 = *(int ***)(iVar7 + DAT_000bb580);
      puVar3 = (undefined4 *)(**(code **)(**ppiVar11 + 0x38))();
      uVar4 = __subsf3(in_r1,DAT_000bb57c);
      __addsf3(uVar4,*puVar3);
      uVar13 = (**(code **)(**ppiVar11 + 0x38))();
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_38,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      local_58 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,pCVar9);
      (**(code **)(***(int ***)(iVar7 + DAT_000bb584) + 0xd8))
                (**(int ***)(iVar7 + DAT_000bb584),*ppiVar11,2000);
      local_50 = (_ccColor4B)0x0;
      local_4f = 0;
      local_4e = 0;
      local_4d = 0;
      puVar3 = *(undefined4 **)(iVar7 + DAT_000bb588);
      __mulsf3(*puVar3,DAT_000bb58c);
      uVar13 = __mulsf3(puVar3[1],0x3fc00000);
      piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                                (&local_50,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      ppiVar10 = *(int ***)(iVar7 + DAT_000bb590);
      *ppiVar10 = piVar1;
      local_5c = *(code **)(*piVar1 + 0x3c);
      piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))();
      __mulsf3(*piVar1 + -0x80000000,0x3f000000);
      piVar1 = *ppiVar10;
      iVar7 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar13 = __mulsf3(*(int *)(iVar7 + 4) + -0x80000000,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar6 = aCStack_30;
    }
    else {
      if (uVar8 != 3) {
        return;
      }
      iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      if (*(int *)(*(int *)(iVar2 + 4) + 100) == 7) {
        return;
      }
      iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 7;
      iVar2 = cocos2d::CCScheduler::sharedScheduler();
      *(undefined4 *)(iVar2 + 0x14) = 0x3f000000;
      pCVar9 = *(CCPoint **)(*(int *)(*piVar1 + 0x1c) + 0x294);
      ppiVar11 = *(int ***)(iVar7 + DAT_000bb700);
      puVar3 = (undefined4 *)(**(code **)(**ppiVar11 + 0x38))();
      uVar4 = __addsf3(in_r1,DAT_000bb704);
      __addsf3(uVar4,*puVar3);
      uVar13 = (**(code **)(**ppiVar11 + 0x38))();
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      local_58 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,pCVar9);
      (**(code **)(***(int ***)(iVar7 + DAT_000bb708) + 0xd8))
                (**(int ***)(iVar7 + DAT_000bb708),*ppiVar11,2000);
      local_4c = (_ccColor4B)0x0;
      local_4b = 0;
      local_4a = 0;
      local_49 = 0;
      puVar3 = *(undefined4 **)(iVar7 + DAT_000bb70c);
      __mulsf3(*puVar3,DAT_000bb710);
      uVar13 = __mulsf3(puVar3[1],0x3fc00000);
      piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                                (&local_4c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      ppiVar10 = *(int ***)(iVar7 + DAT_000bb714);
      *ppiVar10 = piVar1;
      local_5c = *(code **)(*piVar1 + 0x3c);
      piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))();
      __mulsf3(*piVar1 + -0x80000000,0x3f000000);
      piVar1 = *ppiVar10;
      iVar7 = (**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar13 = __mulsf3(*(int *)(iVar7 + 4) + -0x80000000,0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar6 = aCStack_20;
    }
    (*local_5c)(piVar1,pCVar6);
    fVar12 = (float)(**(code **)(**ppiVar11 + 0xcc))(*ppiVar11,*ppiVar10,0xffffffff,0xffffffff);
    piVar1 = *ppiVar10;
    pCVar5 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar12);
    cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar5);
    piVar1 = *ppiVar11;
    pCVar5 = (CCAction *)cocos2d::CCSpawn::actions(local_58,0);
    cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar5);
    piVar1 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test((CCSprite *)param_1,*(_KG_Anit **)(*piVar1 + 0x1c));
    return;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  if (*(int *)(*(int *)(iVar2 + 4) + 100) == 3) {
    return;
  }
  iVar2 = __aeabi_fcmplt(in_r1,DAT_000bb570);
  if (iVar2 != 0) {
    in_r1 = DAT_000bb570;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 3;
  if (*(char *)(piVar1[1] + 0xcc) == '\0') {
    iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    iVar2 = ani_Die_Sound(*(int *)(*(int *)(iVar2 + 4) + 4));
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      ani_Die_Sound(*(int *)(*(int *)(iVar2 + 4) + 4) + DAT_000bb574);
    }
  }
  cocos2d::CCNode::stopAllActions();
  this_00 = **(CCNode ***)(iVar7 + DAT_000bb578);
  iVar7 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  cocos2d::CCNode::getChildByTag(this_00,iVar7);
  this = (CCObject *)cocos2d::CCObject::copy();
  if (*(int *)piVar1[1] == 0) {
    pCVar9 = *(CCPoint **)(this + 0x20);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar4 = __subsf3(in_r1,DAT_000bb57c);
    __addsf3(uVar4,*puVar3);
    uVar13 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
    fVar12 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_48,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  }
  else {
    if (*(int *)piVar1[1] != 1) goto LAB_000bb43c;
    pCVar9 = *(CCPoint **)(this + 0x20);
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar4 = __subsf3(DAT_000bb57c,in_r1);
    __addsf3(uVar4,*puVar3);
    uVar13 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
    fVar12 = (float)cocos2d::CCPoint::CCPoint
                              (aCStack_40,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  }
  local_58 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,pCVar9);
LAB_000bb43c:
  pCVar5 = (CCAction *)cocos2d::CCSpawn::actions((CCFiniteTimeAction *)this,local_58,0);
  cocos2d::CCNode::runAction((CCNode *)param_1,pCVar5);
  cocos2d::CCObject::release(this);
  return;
}


