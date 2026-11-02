/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012519c  Symbol: Game_Boss_Die */

/* GameScene::Game_Boss_Die() */

void __thiscall GameScene::Game_Boss_Die(GameScene *this)

{
  CCArray *this_00;
  int *this_01;
  int iVar1;
  void *pvVar2;
  CCNode *pCVar3;
  CCActionInterval *this_02;
  CCAction *pCVar4;
  uint uVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  float extraout_s0;
  uint local_28;
  
  iVar8 = DAT_001253b8 + 0x1251aa;
  ppiVar7 = *(int ***)(iVar8 + DAT_001253bc);
  this_00 = (CCArray *)(**(code **)(**ppiVar7 + 0x58))();
  local_28 = 0;
  if (this_00 != (CCArray *)0x0) {
    for (; uVar5 = cocos2d::CCArray::count(this_00), local_28 < uVar5; local_28 = local_28 + 1) {
      this_01 = (int *)cocos2d::CCArray::objectAtIndex(this_00,local_28);
      iVar1 = (**(code **)(*this_01 + 0xa0))();
      if (((((((iVar1 != DAT_001253c0) && (iVar1 + DAT_001253c4 != 0)) && (iVar1 != -0x1e)) &&
            ((iVar1 + DAT_001253c8 != 0 && (iVar1 + DAT_001253cc != 0)))) &&
           ((iVar1 + DAT_001253d0 != 0 &&
            ((iVar1 + DAT_001253d4 != 0 && (iVar1 + DAT_001253d8 != 0)))))) &&
          (iVar1 + DAT_001253dc != 0)) &&
         (((iVar1 + DAT_001253e0 != 0 && (iVar1 + DAT_001253e4 != 0)) &&
          (pvVar2 = (void *)(**(code **)(*this_01 + 0xa8))(this_01), pvVar2 != (void *)0x0)))) {
        *(undefined4 *)(*(int *)((int)pvVar2 + 4) + 0x24) = 0;
        if (**(int **)((int)pvVar2 + 4) == 1) {
          iVar1 = (*(int **)((int)pvVar2 + 4))[0x19];
          if (iVar1 - 3U < 2) {
            if (iVar1 == 3) {
              cocos2d::CCNode::getChildByTag((CCNode *)this_01,1);
              iVar1 = cocos2d::CCNode::numberOfRunningActions();
              if (iVar1 == 0) {
                ani_Die_ani2((CCLayer *)this_01);
              }
            }
            else {
              iVar1 = cocos2d::CCNode::numberOfRunningActions();
              if (iVar1 == 0) {
                piVar6 = *(int **)((int)pvVar2 + 4);
                iVar1 = piVar6[1];
                if ((*(int *)(**(int **)(iVar8 + DAT_001253ec) + 0x2c) == iVar1) &&
                   (*(int *)(**(int **)(iVar8 + DAT_001253ec) + 0x30) == 0)) {
                  **(undefined **)(iVar8 + DAT_001253f0) = 1;
                }
                if ((*piVar6 == 1) && (1000 < iVar1)) {
                  *(int *)(**(int **)(iVar8 + DAT_001253f4) + 0x28) =
                       *(int *)(**(int **)(iVar8 + DAT_001253f4) + 0x28) + -1;
                }
                Monster_die(pvVar2,*(CCLayer **)(this + 0x120));
                (**(code **)(**ppiVar7 + 0xd0))
                          (*ppiVar7,*(undefined4 *)(*(int *)((int)pvVar2 + 4) + 0x128),1);
                (**(code **)(**ppiVar7 + 0xd0))
                          (*ppiVar7,*(undefined4 *)(*(int *)((int)pvVar2 + 4) + 0x118),1);
                ani_remove_data((CCSprite *)this_01);
                (**(code **)(**ppiVar7 + 0xd0))(*ppiVar7,this_01,1);
              }
            }
          }
          else {
            ani_Die_ani((CCLayer *)this_01,extraout_s0);
            iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this_01,DAT_001253e8);
            if (iVar1 != 0) {
              pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this_01,DAT_001253e8);
              cocos2d::CCNode::removeFromParentAndCleanup(pCVar3,true);
            }
          }
        }
        else {
          iVar1 = (**(code **)(*this_01 + 0xa0))(this_01);
          if (((iVar1 != DAT_001253f8) && (**(int **)((int)pvVar2 + 4) == 0)) &&
             ((*(int **)((int)pvVar2 + 4))[0x19] != 0)) {
            pCVar3 = **(CCNode ***)(iVar8 + DAT_001253fc);
            iVar1 = (**(code **)(*this_01 + 0xa0))(this_01);
            cocos2d::CCNode::getChildByTag(pCVar3,iVar1);
            this_02 = (CCActionInterval *)cocos2d::CCObject::copy();
            pCVar4 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_02);
            cocos2d::CCNode::runAction((CCNode *)this_01,pCVar4);
            cocos2d::CCObject::release((CCObject *)this_02);
          }
        }
      }
    }
  }
  if (*(int *)(**(int **)(iVar8 + DAT_001253f4) + 0x28) < 1) {
    **(undefined **)(iVar8 + DAT_001253f0) = 1;
    GameEnd();
  }
  return;
}


