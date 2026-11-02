/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ec90  Symbol: Set_Effect1 */

/* New_UI::Set_Effect1(void*) */

void __thiscall New_UI::Set_Effect1(New_UI *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x24);
  uVar6 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x28);
  uVar8 = __extendsfdf2(uVar6);
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_0010ed58,DAT_0010ed5c);
  uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar9 = __extendsfdf2(uVar5);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  iVar1 = __aeabi_dcmplt((int)uVar8,uVar2,(int)uVar9,uVar4);
  if (iVar1 != 0) {
    cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    uVar2 = __divsf3(uVar5,uVar6);
    uVar2 = __subsf3(0x3f800000,uVar2);
    __mulsf3(uVar2,DAT_0010ed60);
    fVar7 = (float)__fixunssfsi();
    pCVar3 = (CCFiniteTimeAction *)cocos2d::CCFadeTo::actionWithDuration(fVar7,(uchar)DAT_0010ed64);
    uVar2 = cocos2d::CCFadeTo::actionWithDuration(extraout_s0,(uchar)DAT_0010ed64);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar2,0);
  }
  iVar1 = __aeabi_dcmpgt((int)uVar8,uVar2,(int)uVar9,uVar4);
  if (iVar1 != 0) {
    fVar7 = (float)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    pCVar3 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar7);
    uVar2 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_00);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar2,0);
  }
  return;
}


