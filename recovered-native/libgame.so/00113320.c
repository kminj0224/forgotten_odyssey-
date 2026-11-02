/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00113320  Symbol: SetStun */

/* SetStun(cocos2d::CCLayer*, float) */

void SetStun(CCLayer *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  CCSpriteFrame *pCVar3;
  int *piVar4;
  CCActionInterval *this;
  CCAction *pCVar5;
  int in_r1;
  CCPoint *pCVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  piVar8 = *(int **)(iVar1 + 4);
  iVar7 = *piVar8;
  iVar10 = DAT_001134e8 + 0x11333c;
  if (iVar7 == 3) {
    return;
  }
  if (piVar8[1] == *(int *)(**(int **)(iVar10 + DAT_001134ec) + 0x2c)) {
    return;
  }
  if (piVar8[1] == DAT_001134f0) {
    return;
  }
  iVar2 = __aeabi_fcmpgt(piVar8[9],0);
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)((int)piVar8 + 0x93) != '\0') {
    iVar7 = __aeabi_fcmplt(piVar8[0x26],in_r1);
    if (iVar7 == 0) {
      return;
    }
    piVar8[0x26] = in_r1;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x94) = 0;
    return;
  }
  if (iVar7 - 4U < 2) {
    return;
  }
  if (iVar7 - 2U < 2) {
    param_1 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  }
  ani_Base_ani(param_1);
  *(undefined *)(*(int *)(iVar1 + 4) + 0x93) = 1;
  *(int *)(*(int *)(iVar1 + 4) + 0x98) = in_r1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x94) = 0;
  *(undefined *)(*(int *)(iVar1 + 4) + 0xd) = 0;
  *(undefined *)(*(int *)(iVar1 + 4) + 0x2c) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
  pCVar3 = (CCSpriteFrame *)
           cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                     (**(CCMutableArray<cocos2d::CCSpriteFrame*> ***)(iVar10 + DAT_001134f4),0);
  piVar8 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar3);
  if ((**(int **)(iVar1 + 4) == 2) || (**(int **)(iVar1 + 4) == 0)) {
    (**(code **)(*piVar8 + 0x2c))(piVar8,DAT_001134f8);
  }
  iVar7 = **(int **)(iVar1 + 4);
  if (iVar7 == 2) {
    pcVar9 = *(code **)(*piVar8 + 0x3c);
    uVar11 = __floatsisf(*(int *)(*(int *)(iVar10 + DAT_001134fc) +
                                  **(int **)(iVar10 + DAT_00113500) * 0x18 + 0x14) + 0x14);
    cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
    (*pcVar9)(piVar8,aCStack_38);
  }
  else {
    pcVar9 = *(code **)(*piVar8 + 0x3c);
    iVar10 = *(int *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      __floatsisf(*(int *)(iVar1 + 8) / 2 + 5);
      uVar11 = __floatsisf(iVar10 + 10);
      cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pCVar6 = aCStack_30;
    }
    else {
      if (iVar7 == 3) {
        uVar11 = __floatsisf(iVar10 + 10);
        cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
        (*pcVar9)(piVar8,aCStack_28);
        goto LAB_001134ae;
      }
      __floatsisf(*(int *)(iVar1 + 8) / 2 + 0x19);
      uVar11 = __floatsisf(iVar10 + 10);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pCVar6 = aCStack_20;
    }
    (*pcVar9)(piVar8,pCVar6);
  }
LAB_001134ae:
  piVar4 = *(int **)(*(int *)(iVar1 + 4) + 0x11c);
  (**(code **)(*piVar4 + 0xcc))(piVar4,piVar8,DAT_00113504,DAT_00113504);
  this = (CCActionInterval *)cocos2d::CCObject::copy();
  *(undefined4 *)(this + 0x20) = DAT_0011350c;
  pCVar5 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
  cocos2d::CCNode::runAction((CCNode *)piVar8,pCVar5);
  cocos2d::CCObject::release((CCObject *)this);
  return;
}


