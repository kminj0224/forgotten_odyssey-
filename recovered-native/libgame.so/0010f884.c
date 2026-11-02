/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010f884  Symbol: Skill_Loading */

/* New_UI::Skill_Loading(int) */

void __thiscall New_UI::Skill_Loading(New_UI *this,int param_1)

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
  CCPoint aCStack_28 [20];
  
  iVar9 = DAT_0010f97c + 0x10f894;
  *(undefined *)(*(int *)(iVar9 + DAT_0010f980) + param_1 + -2) = 1;
  pCVar1 = (CCTexture2D *)(**(code **)(**(int **)(this + 0x124) + 0x118))();
  this_00 = (int *)cocos2d::CCProgressTimer::progressWithTexture(pCVar1);
  cocos2d::CCProgressTimer::setPercentage(extraout_s0);
  pcVar7 = *(code **)(*this_00 + 0x3c);
  ppCVar8 = *(CCNode ***)(iVar9 + DAT_0010f988);
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
  uVar10 = __floatsisf(*(undefined4 *)
                        ((*(char *)(**(int **)(iVar9 + DAT_0010f990) +
                                    **(int **)(iVar9 + DAT_0010f994) + DAT_0010f998 + 4) * 5 +
                         param_1 + -2) * 4 + *(int *)(iVar9 + DAT_0010f98c)));
  pCVar5 = (CCFiniteTimeAction *)
           cocos2d::CCProgressFromTo::actionWithDuration
                     ((float)uVar10,(float)((ulonglong)uVar10 >> 0x20),extraout_s2);
  uVar6 = cocos2d::CCCallFuncND::actionWithTarget
                    ((CCObject *)this_00,*(_func_void_CCNode_ptr_void_ptr **)(iVar9 + DAT_0010f99c),
                     (void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar6,0);
}


