/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bab8e  Symbol: ani_Stop_ani */

/* ani_Stop_ani(cocos2d::CCLayer*) */

void ani_Stop_ani(CCLayer *param_1)

{
  int iVar1;
  int *piVar2;
  CCSprite *pCVar3;
  code *pcVar4;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if ((((**(uint **)(iVar1 + 4) < 2) &&
       (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
       *(int *)(*(int *)(iVar1 + 4) + 100) != 8)) &&
      (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
      *(int *)(*(int *)(iVar1 + 4) + 100) != 3)) &&
     (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
     *(int *)(*(int *)(iVar1 + 4) + 100) != 4)) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 8;
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined *)(*(int *)(iVar1 + 4) + 0x2c) = 0;
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    cocos2d::CCNode::stopAllActions();
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  pcVar4 = *(code **)(*(int *)param_1 + 0xa8);
  if (**(int **)(iVar1 + 4) != 2) {
    iVar1 = (*pcVar4)(param_1);
    if (**(int **)(iVar1 + 4) != 3) {
      return;
    }
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    if (*(int *)(*(int *)(iVar1 + 4) + 100) == -1) {
      return;
    }
    pcVar4 = *(code **)(*(int *)param_1 + 0xa8);
  }
  piVar2 = (int *)(*pcVar4)(param_1);
  if (*(int *)(*piVar2 + 8) != 0) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0xffffffff;
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    pCVar3 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
    ani_ani_test_Stop(pCVar3);
  }
  return;
}


