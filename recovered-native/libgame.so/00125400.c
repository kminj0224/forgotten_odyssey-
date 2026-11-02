/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125400  Symbol: Game_Hero_Die */

/* GameScene::Game_Hero_Die() */

undefined8 __thiscall GameScene::Game_Hero_Die(GameScene *this)

{
  CCArray *this_00;
  int *this_01;
  int iVar1;
  CCActionInterval *this_02;
  CCAction *pCVar2;
  uint uVar3;
  uint uVar4;
  CCNode *this_03;
  
  uVar4 = 0;
  this_00 = (CCArray *)(**(code **)(***(int ***)(DAT_001254f0 + 0x12540c) + 0x58))();
  if (this_00 != (CCArray *)0x0) {
    for (; uVar3 = cocos2d::CCArray::count(this_00), uVar4 < uVar3; uVar4 = uVar4 + 1) {
      this_01 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar4);
      iVar1 = (**(code **)(*this_01 + 0xa0))();
      if (((((((iVar1 != DAT_001254f4) && (iVar1 + DAT_001254f8 != 0)) && (iVar1 != -0x1e)) &&
            ((iVar1 + DAT_001254fc != 0 && (iVar1 + DAT_00125500 != 0)))) &&
           ((iVar1 + DAT_00125504 != 0 &&
            ((iVar1 + DAT_00125508 != 0 && (iVar1 + DAT_0012550c != 0)))))) &&
          (iVar1 + DAT_00125510 != 0)) &&
         ((iVar1 + DAT_00125514 != 0 && (iVar1 + DAT_00125518 != 0)))) {
        iVar1 = (**(code **)(*this_01 + 0xa8))(this_01);
        if ((**(int **)(iVar1 + 4) == 1) && ((*(int **)(iVar1 + 4))[0x19] != 0)) {
          this_03 = **(CCNode ***)(DAT_0012551c + 0x1254a2);
          iVar1 = (**(code **)(*this_01 + 0xa0))(this_01);
          cocos2d::CCNode::getChildByTag(this_03,iVar1);
          this_02 = (CCActionInterval *)cocos2d::CCObject::copy();
          pCVar2 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_02);
          cocos2d::CCNode::runAction((CCNode *)this_01,pCVar2);
          cocos2d::CCObject::release((CCObject *)this_02);
        }
      }
    }
  }
  **(undefined **)(DAT_00125520 + 0x1254e6) = 1;
  GameEnd();
  return CONCAT44(this,this);
}


