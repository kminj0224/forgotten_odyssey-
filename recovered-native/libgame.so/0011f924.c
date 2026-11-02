/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011f924  Symbol: TutorialWithLayrTouch */

/* Tutorial_Layer::TutorialWithLayrTouch(char const*, int, bool, bool, cocos2d::CCPoint) */

void Tutorial_Layer::TutorialWithLayrTouch
               (char *param_1,int param_2,bool param_3,bool param_4,CCPoint param_5)

{
  int *piVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  uint uVar4;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar5;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar4 = (uint)param_3;
  *(undefined4 *)(param_1 + 0x118) = in_stack_00000004;
  *(undefined4 *)(param_1 + 0x11c) = in_stack_00000008;
  if (uVar4 == 5) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011fa4c + 0x11f954));
    (**(code **)(*piVar1 + 0x3c))(piVar1,&stack0x00000004);
    uVar5 = (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,0,0);
    pCVar2 = (CCFiniteTimeAction *)
             cocos2d::CCScaleTo::actionWithDuration((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar3 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0,extraout_s1);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar2,uVar3,0);
  }
  if (uVar4 == 6) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011fa58 + 0x11f9b4));
    (**(code **)(*piVar1 + 0x3c))(piVar1,&stack0x00000004);
    uVar5 = (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,0,0);
    pCVar2 = (CCFiniteTimeAction *)
             cocos2d::CCScaleTo::actionWithDuration((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar3 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_00,extraout_s1_00);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar2,uVar3,0);
  }
  if (uVar4 == 7) {
    Draw_String((Tutorial_Layer *)param_1,(char *)param_2,param_4,SUB41(param_5,0));
  }
  else {
    Draw_String((Tutorial_Layer *)param_1,(char *)param_2,SUB41(param_5,0));
  }
  *(undefined4 *)(param_1 + 0x110) =
       *(undefined4 *)
        (**(int **)(DAT_0011fa5c + 0x11fa30) +
         (**(int **)(DAT_0011fa64 + 0x11fa38) + DAT_0011fa60) * 4 + 4);
  *(uint *)(param_1 + 0x114) = uVar4;
  return;
}


