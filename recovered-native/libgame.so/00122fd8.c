/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00122fd8  Symbol: RevivalCall */

/* GameScene::RevivalCall() */

void __thiscall GameScene::RevivalCall(GameScene *this)

{
  CCArray *this_00;
  int iVar1;
  uint uVar2;
  int *piVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  float fVar9;
  float extraout_s0;
  _ccColor4B local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  
  uVar8 = 0;
  this_00 = (CCArray *)(**(code **)(***(int ***)(DAT_00123138 + 0x122fe4) + 0x58))();
  if (this_00 != (CCArray *)0x0) {
    for (; uVar2 = cocos2d::CCArray::count(this_00), uVar8 < uVar2; uVar8 = uVar8 + 1) {
      piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this_00,uVar8);
      iVar1 = (**(code **)(*piVar3 + 0xa0))();
      if ((((((iVar1 != DAT_0012313c) && (iVar1 + DAT_00123140 != 0)) && (iVar1 != -0x1e)) &&
           (((iVar1 + DAT_00123144 != 0 && (iVar1 + DAT_00123148 != 0)) &&
            ((iVar1 + DAT_0012314c != 0 &&
             ((iVar1 + DAT_00123150 != 0 && (iVar1 + DAT_00123154 != 0)))))))) &&
          (iVar1 + DAT_00123158 != 0)) &&
         ((iVar1 + DAT_0012315c != 0 && (iVar1 + DAT_00123160 != 0)))) {
        iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3);
        piVar7 = *(int **)(iVar1 + 4);
        if (*piVar7 == 0) {
          piVar7[9] = piVar7[10];
          *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0xffffffff;
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x124) = 1;
          *(undefined *)(*(int *)(iVar1 + 4) + 0xd) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x2c) = 0;
          (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
        }
        else if (*piVar7 == 1) {
          iVar1 = *(int *)(**(int **)(DAT_00123164 + 0x1230aa) + 0x30);
          if (((*(int *)(**(int **)(DAT_00123164 + 0x1230aa) + 0x2c) != piVar7[1]) || (iVar1 != 0))
             && (iVar1 != piVar7[1])) {
            piVar7[9] = 0;
          }
        }
      }
    }
  }
  local_21 = 0;
  local_24 = (_ccColor4B)0xff;
  local_23 = 0xff;
  local_22 = 0xff;
  piVar3 = (int *)cocos2d::CCLayerColor::layerWithColor(&local_24);
  (**(code **)(*piVar3 + 0x134))(piVar3,0);
  fVar9 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar3,DAT_00123168,DAT_00123168);
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar9);
  uVar5 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0);
  uVar6 = cocos2d::CCCallFuncND::actionWithTarget
                    ((CCObject *)piVar3,
                     *(_func_void_CCNode_ptr_void_ptr **)(DAT_00123174 + 0x123118),(void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,uVar6,0);
}


