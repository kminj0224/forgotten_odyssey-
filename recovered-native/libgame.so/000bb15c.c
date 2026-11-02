/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bb15c  Symbol: ani_Move_ani */

/* ani_Move_ani(cocos2d::CCLayer*) */

void ani_Move_ani(CCLayer *param_1)

{
  int iVar1;
  CCActionInterval *this;
  CCAction *pCVar2;
  int *piVar3;
  uint uVar4;
  CCNode *this_00;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  uVar4 = **(uint **)(iVar1 + 4);
  if (1 < uVar4 - 4) {
    if (uVar4 < 2) {
      if (((*(char *)(*(uint **)(iVar1 + 4) + 0x21) == '\0') &&
          (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
          *(int *)(*(int *)(iVar1 + 4) + 100) != 1)) &&
         ((iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
          *(int *)(*(int *)(iVar1 + 4) + 100) != 3 &&
          (((iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
            *(int *)(*(int *)(iVar1 + 4) + 100) != 4 &&
            (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
            *(char *)(*(int *)(iVar1 + 4) + 0x90) == '\0')) &&
           (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
           *(char *)(*(int *)(iVar1 + 4) + 0x93) == '\0')))))) {
        iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
        *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 1;
        this_00 = **(CCNode ***)(DAT_000bb304 + 0xbb202);
        iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
        cocos2d::CCNode::getChildByTag(this_00,iVar1);
        this = (CCActionInterval *)cocos2d::CCObject::copy();
        pCVar2 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
        cocos2d::CCNode::runAction((CCNode *)param_1,pCVar2);
        cocos2d::CCObject::release((CCObject *)this);
      }
    }
    else if (uVar4 == 3) {
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      if ((*(int *)(*(int *)(iVar1 + 4) + 100) != 1) &&
         (piVar3 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1), *(int *)(*piVar3 + 4) != 0
         )) {
        iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
        *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 1;
        ani_ani_test_Stop((CCSprite *)param_1);
        piVar3 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
        ani_ani_test_R((CCSprite *)param_1,*(_KG_Anit **)(*piVar3 + 4));
      }
    }
    else if (((uVar4 == 2) &&
             (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
             *(int *)(*(int *)(iVar1 + 4) + 100) != 1)) &&
            (piVar3 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1),
            *(int *)(*piVar3 + 4) != 0)) {
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 1;
      ani_ani_test_Stop((CCSprite *)param_1);
      piVar3 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
      ani_ani_test_R((CCSprite *)param_1,*(_KG_Anit **)(*piVar3 + 4));
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      if (*(int *)(*(int *)(iVar1 + 4) + 4) == 0x82) {
        iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000bb308 + 0xbb2fc),*(undefined4 *)(*(int *)(iVar1 + 4) + 4));
      }
    }
  }
  return;
}


