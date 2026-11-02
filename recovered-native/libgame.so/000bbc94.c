/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bbc94  Symbol: ani_Base_ani */

/* ani_Base_ani(cocos2d::CCLayer*) */

undefined8 ani_Base_ani(CCLayer *param_1)

{
  int iVar1;
  CCActionInterval *this;
  CCAction *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  CCArray *this_00;
  int *piVar6;
  int **ppiVar7;
  uint uVar8;
  code *in_r1;
  CCNode *this_01;
  CCLayer *local_20;
  code *local_1c;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  local_20 = param_1;
  local_1c = in_r1;
  if (**(uint **)(iVar1 + 4) < 2) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    if ((((*(int *)(*(int *)(iVar1 + 4) + 100) != 0) &&
         (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
         *(int *)(*(int *)(iVar1 + 4) + 100) != 3)) &&
        (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
        *(int *)(*(int *)(iVar1 + 4) + 100) != 4)) &&
       (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
       *(char *)(*(int *)(iVar1 + 4) + 0x90) == '\0')) {
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0;
      this_01 = **(CCNode ***)(DAT_000bbe18 + 0xbbd10);
      iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
      cocos2d::CCNode::getChildByTag(this_01,iVar1);
      this = (CCActionInterval *)cocos2d::CCObject::copy();
      pCVar2 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
      cocos2d::CCNode::runAction((CCNode *)param_1,pCVar2);
      cocos2d::CCObject::release((CCObject *)this);
    }
  }
  else if ((*(uint **)(iVar1 + 4))[0x19] != 0) {
    iVar3 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    iVar1 = DAT_000bbe1c;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 100) = 0;
    ani_ani_test_Stop((CCSprite *)param_1);
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test_R((CCSprite *)param_1,*(_KG_Anit **)*puVar4);
    uVar5 = CocosDenshion::SimpleAudioEngine::sharedEngine();
    puVar4 = *(undefined4 **)(iVar1 + 0xbbd66);
    CocosDenshion::SimpleAudioEngine::stopEffect(uVar5);
    *puVar4 = 0;
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    if (*(int *)(*(int *)(iVar1 + 4) + 4) == 0x82) {
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000bbe20 + 0xbbda6),*(undefined4 *)(*(int *)(iVar1 + 4) + 4));
    }
    this_00 = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
    if (this_00 != (CCArray *)0x0) {
      iVar1 = cocos2d::CCArray::count(this_00);
      uVar5 = 0;
      if (iVar1 != 0) {
        for (; uVar8 = cocos2d::CCArray::count(this_00), uVar5 < uVar8; uVar5 = uVar5 + 1) {
          piVar6 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar5);
          ppiVar7 = (int **)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
          local_20 = (CCLayer *)(uVar5 * 4);
          if (*(int *)(local_20 + **ppiVar7) != 0) {
            local_1c = *(code **)(*piVar6 + 0x3c);
            ppiVar7 = (int **)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
            (*local_1c)(piVar6,*(int *)(local_20 + **ppiVar7) + 8);
          }
        }
      }
    }
  }
  return CONCAT44(local_1c,local_20);
}


