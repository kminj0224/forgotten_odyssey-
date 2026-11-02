/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00122c04  Symbol: Game_Boss_Join */

/* GameScene::Game_Boss_Join(float) */

void GameScene::Game_Boss_Join(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  CCArray *this;
  uint uVar2;
  int *piVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  int iVar6;
  CCNode *pCVar7;
  int *piVar8;
  CCNode **ppCVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  float extraout_s0;
  float fVar13;
  float extraout_s0_00;
  _ccColor4B local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  _func_void_CCNode_ptr_void_ptr *local_20;
  undefined4 local_1c;
  
  uVar1 = __addsf3(*(undefined4 *)(in_r0 + 0x550));
  iVar6 = DAT_00122e1c;
  *(undefined4 *)(in_r0 + 0x550) = uVar1;
  iVar11 = DAT_00122e20 + 0x122c20;
  if (*(char *)(in_r0 + iVar6) == '\0') {
    this = (CCArray *)(**(code **)(***(int ***)(iVar11 + DAT_00122e24) + 0x58))();
    uVar10 = 0;
    if (this != (CCArray *)0x0) {
      for (; uVar2 = cocos2d::CCArray::count(this), uVar10 < uVar2; uVar10 = uVar10 + 1) {
        piVar8 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar10);
        iVar6 = (**(code **)(*piVar8 + 0xa0))();
        if ((((((iVar6 + DAT_00122e28 != 0) && (iVar6 + DAT_00122e2c != 0)) &&
              (iVar6 + DAT_00122e30 != 0)) &&
             ((iVar6 + DAT_00122e34 != 0 && (iVar6 + DAT_00122e38 != 0)))) &&
            (((iVar6 + DAT_00122e3c != 0 &&
              ((iVar6 + DAT_00122e40 != 0 && (iVar6 + DAT_00122e44 != 0)))) && (iVar6 != -0x1e))))
           && (((iVar6 + DAT_00122e48 != 0 &&
                (iVar6 = (**(code **)(*piVar8 + 0xa8))(piVar8), iVar6 != 0)) &&
               ((**(int **)(iVar6 + 4) == 2 || (**(int **)(iVar6 + 4) == 0)))))) {
          SetStun((CCLayer *)piVar8,extraout_s0);
        }
      }
    }
    local_2c = (_ccColor4B)0xff;
    local_2b = 0xff;
    local_2a = 0xff;
    local_29 = 0;
    piVar8 = (int *)cocos2d::CCLayerColor::layerWithColor(&local_2c);
    (**(code **)(*piVar8 + 0x134))(piVar8,0);
    piVar3 = **(int ***)(iVar11 + DAT_00122e4c);
    fVar13 = (float)(**(code **)(*piVar3 + 0xcc))
                              (piVar3,piVar8,DAT_00122e50,DAT_00122e50,
                               *(int ***)(iVar11 + DAT_00122e4c));
    pCVar4 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar13);
    uVar1 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_00);
    local_20 = *(_func_void_CCNode_ptr_void_ptr **)(iVar11 + DAT_00122e5c);
    local_1c = 0;
    uVar5 = cocos2d::CCCallFuncND::actionWithTarget((CCObject *)piVar8,local_20,(void *)0x0);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar4,uVar1,uVar5,0);
  }
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(in_r0 + 0x550),0x40800000);
  if (iVar6 != 0) {
    **(undefined4 **)(iVar11 + DAT_00122e68) = 0xb;
    *(undefined *)(in_r0 + DAT_00122e1c) = 0;
    *(undefined4 *)(in_r0 + 0x550) = 0;
    ppCVar9 = *(CCNode ***)(iVar11 + DAT_00122e60);
    pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
    iVar6 = cocos2d::CCNode::getChildByTag(pCVar7,DAT_00122e6c);
    if (iVar6 != 0) {
      piVar8 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
      pcVar12 = *(code **)(*piVar8 + 0xd0);
      pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
      uVar1 = cocos2d::CCNode::getChildByTag(pCVar7,DAT_00122e6c);
      (*pcVar12)(piVar8,uVar1,1);
    }
    piVar8 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
    iVar6 = (**(code **)(*piVar8 + 0xa8))();
    *(undefined *)(*(int *)(iVar6 + 4) + 0x84) = 0;
  }
  return;
}


