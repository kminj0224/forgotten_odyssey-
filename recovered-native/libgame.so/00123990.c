/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123990  Symbol: Unit_Loading */

/* GameScene::Unit_Loading(int) */

void __thiscall GameScene::Unit_Loading(GameScene *this,int param_1)

{
  CCTexture2D *pCVar1;
  int *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CCFiniteTimeAction *pCVar5;
  undefined4 uVar6;
  code *pcVar7;
  CCNode **ppCVar8;
  int iVar9;
  float extraout_s0;
  undefined8 uVar10;
  float extraout_s2;
  undefined8 uVar11;
  CCPoint aCStack_28 [20];
  
  iVar9 = DAT_00123ab8 + 0x1239a0;
  *(undefined *)(*(int *)(iVar9 + DAT_00123abc) + param_1 + -6) = 1;
  ppCVar8 = *(CCNode ***)(iVar9 + DAT_00123ac0);
  pCVar1 = (CCTexture2D *)(**(code **)(**(int **)(*ppCVar8 + 0x124) + 0x118))();
  this_00 = (int *)cocos2d::CCProgressTimer::progressWithTexture(pCVar1);
  cocos2d::CCProgressTimer::setPercentage(extraout_s0);
  pcVar7 = *(code **)(*this_00 + 0x3c);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar8,param_1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  __mulsf3(*puVar3,0x3f000000);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar8,param_1);
  iVar4 = (**(code **)(*piVar2 + 0x7c))();
  uVar10 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar7)(this_00,aCStack_28);
  cocos2d::CCProgressTimer::setType((CCProgressTimer *)this_00,0);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar8,param_1);
  (**(code **)(*piVar2 + 0xcc))(piVar2,this_00,1,1);
  uVar10 = __floatsidf(*(undefined4 *)((param_1 + -6) * 4 + *(int *)(iVar9 + DAT_00123ac8)));
  uVar11 = __floatsidf((int)*(short *)(*(char *)(**(int **)(iVar9 + DAT_00123ad0) +
                                                 **(int **)(iVar9 + DAT_00123acc) * 0x6c +
                                                DAT_00123ad8) * 2 + *(int *)(iVar9 + DAT_00123ad4)))
  ;
  uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_00123ab0,DAT_00123ab4);
  __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,(int)((ulonglong)uVar11 >> 0x20)
          );
  uVar10 = __truncdfsf2();
  pCVar5 = (CCFiniteTimeAction *)
           cocos2d::CCProgressFromTo::actionWithDuration
                     ((float)uVar10,(float)((ulonglong)uVar10 >> 0x20),extraout_s2);
  uVar6 = cocos2d::CCCallFuncND::actionWithTarget
                    ((CCObject *)this_00,*(_func_void_CCNode_ptr_void_ptr **)(iVar9 + DAT_00123adc),
                     (void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar6,0);
}


