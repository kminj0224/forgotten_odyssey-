/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00129d3e  Symbol: FUN_00129d3e */

void FUN_00129d3e(void)

{
  uint uVar1;
  float extraout_s0;
  float fVar2;
  GameScene *in_stack_0000003c;
  int param_11;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  CCArray *in_stack_00000070;
  
  uVar1 = cocos2d::CCArray::count(in_stack_00000070);
  if (param_11 + 1U < uVar1) {
    FUN_00128df0();
  }
  uVar1 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar2 = extraout_s0;
  if (in_stack_00000068 + 1U < uVar1) {
    fVar2 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(in_stack_0000003c,fVar2);
  FUN_00129da2();
  return;
}


