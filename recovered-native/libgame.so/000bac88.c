/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bac88  Symbol: ani_attack_ani */

/* ani_attack_ani(cocos2d::CCLayer*) */

undefined8 ani_attack_ani(CCLayer *param_1)

{
  int iVar1;
  int iVar2;
  CCFiniteTimeAction *pCVar3;
  CCActionInterval *this;
  CCAction *pCVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 in_r1;
  CCSpriteFrame *pCVar8;
  int iVar9;
  _KG_Anit *p_Var10;
  CCNode *pCVar11;
  float fVar12;
  CCLayer *local_20;
  
  iVar9 = DAT_000bafc4;
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  iVar9 = iVar9 + 0xbac9c;
  local_20 = param_1;
  if (**(uint **)(iVar1 + 4) < 2) {
    iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    if (((*(int *)(*(int *)(iVar2 + 4) + 100) != 2) &&
        (iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
        *(int *)(*(int *)(iVar2 + 4) + 100) != 3)) &&
       (iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
       *(int *)(*(int *)(iVar2 + 4) + 100) != 4)) {
      iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      local_20 = (CCLayer *)(uint)*(byte *)(*(int *)(iVar2 + 4) + 0x90);
      if (local_20 == (CCLayer *)0x0) {
        iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
        *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 2;
        cocos2d::CCNode::stopAllActions();
        pCVar11 = **(CCNode ***)(iVar9 + DAT_000bafc8);
        if (*(int *)(*(int *)(iVar1 + 4) + 4) != 0x96) {
          iVar9 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
          cocos2d::CCNode::getChildByTag(pCVar11,iVar9);
          this = (CCActionInterval *)cocos2d::CCObject::copy();
          pCVar4 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
          cocos2d::CCNode::runAction((CCNode *)param_1,pCVar4);
          cocos2d::CCObject::release((CCObject *)this);
          iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
          *(undefined4 *)(*(int *)(iVar9 + 4) + 100) = 2;
          pCVar3 = (CCFiniteTimeAction *)cocos2d::CCObject::copy();
          fVar12 = (float)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
          uVar5 = cocos2d::CCDelayTime::actionWithDuration(fVar12);
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar3,uVar5,0);
        }
        iVar9 = (**(code **)(*(int *)param_1 + 0xa0))();
        cocos2d::CCNode::getChildByTag(pCVar11,iVar9);
        iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
        *(undefined4 *)(*(int *)(iVar9 + 4) + 100) = 2;
        pCVar3 = (CCFiniteTimeAction *)cocos2d::CCObject::copy();
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar3,0);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    if ((*(int *)(*(int *)(iVar1 + 4) + 100) == 2) &&
       (iVar1 = cocos2d::CCNode::numberOfRunningActions(), iVar1 == 0)) {
      pCVar11 = **(CCNode ***)(iVar9 + DAT_000bafc8);
      iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
      iVar1 = cocos2d::CCNode::getChildByTag(pCVar11,iVar1);
      iVar2 = *(int *)(*(int *)(iVar1 + 0x128) + 0x14);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x128) + 0x18) - iVar2 >> 2;
      pCVar8 = (CCSpriteFrame *)0x0;
      if (iVar1 != 0) {
        pCVar8 = *(CCSpriteFrame **)((iVar1 + -1) * 4 + iVar2);
      }
      cocos2d::CCSprite::setDisplayFrame((CCSprite *)param_1,pCVar8);
    }
  }
  else if (((**(uint **)(iVar1 + 4) == 3) &&
           (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
           *(int *)(*(int *)(iVar1 + 4) + 100) != 2)) &&
          ((iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
           *(int *)(*(int *)(iVar1 + 4) + 100) != 3 &&
           ((iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
            *(int *)(*(int *)(iVar1 + 4) + 100) != 4 &&
            (iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
            *(char *)(*(int *)(iVar1 + 4) + 0x90) == '\0')))))) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 2;
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    ani_ani_test_Stop((CCSprite *)param_1);
    piVar6 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test_Hero((CCSprite *)param_1,*(_KG_Anit **)(*piVar6 + 8));
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  if (**(int **)(iVar1 + 4) == 2) {
    piVar6 = (int *)(**(code **)(*(int *)param_1 + 0xa8))();
    if (*(int *)(*piVar6 + 8) != 0) {
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 2;
      iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
      ani_ani_test_Stop((CCSprite *)param_1);
      piVar6 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
      ani_ani_test_Hero((CCSprite *)param_1,*(_KG_Anit **)(*piVar6 + 8));
      (**(code **)(***(int ***)(iVar9 + DAT_000bafcc) + 0x2c))
                (**(int ***)(iVar9 + DAT_000bafcc),0x3f800000);
    }
  }
  else {
    iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    if (((**(int **)(iVar9 + 4) == 3) &&
        (iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1),
        *(int *)(*(int *)(iVar9 + 4) + 100) != 2)) &&
       (piVar6 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1), *(int *)(*piVar6 + 8) != 0))
    {
      iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar9 + 4) + 100) = 2;
      iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      *(undefined4 *)(*(int *)(iVar9 + 4) + 0x3c) = 0;
      ani_ani_test_Stop((CCSprite *)param_1);
      puVar7 = (undefined4 *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
      ani_ani_test_R((CCSprite *)param_1,*(_KG_Anit **)*puVar7);
      piVar6 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
      p_Var10 = *(_KG_Anit **)(*piVar6 + 8);
      fVar12 = (float)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
      ani_ani_test_R_D((CCSprite *)param_1,p_Var10,fVar12);
      iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
      if (*(int *)(*(int *)(iVar9 + 4) + 4) == 0x82) {
        iVar9 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000bafd0 + 0xbafa4),*(undefined4 *)(*(int *)(iVar9 + 4) + 4));
      }
    }
  }
  return CONCAT44(in_r1,local_20);
}


