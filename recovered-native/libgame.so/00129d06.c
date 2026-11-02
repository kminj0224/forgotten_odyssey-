/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00129d06  Symbol: FUN_00129d06 */

void FUN_00129d06(void)

{
  uint uVar1;
  void *unaff_r5;
  undefined4 unaff_r7;
  float extraout_s0;
  float fVar2;
  void *param_11;
  int param_12;
  int param_13;
  GameScene *param_14;
  int in_stack_0000005c;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  CCArray *in_stack_00000070;
  
  if (**(int **)((int)unaff_r5 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(param_14 + 0x120),unaff_r5);
  }
  if (param_13 != 0) {
    operator_delete(param_11);
    (**(code **)(***(int ***)(param_12 + DAT_00129dd8) + 0xd0))
              (**(int ***)(param_12 + DAT_00129dd8),unaff_r7,1);
  }
  uVar1 = cocos2d::CCArray::count(in_stack_00000070);
  if (in_stack_0000005c + 1U < uVar1) {
    FUN_00128df0();
  }
  uVar1 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar2 = extraout_s0;
  if (in_stack_00000068 + 1U < uVar1) {
    fVar2 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(param_14,fVar2);
  FUN_00129da2();
  return;
}


