/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00129d54  Symbol: FUN_00129d54 */

void FUN_00129d54(void)

{
  uint uVar1;
  float extraout_s0;
  float fVar2;
  GameScene *in_stack_0000003c;
  int param_11;
  CCArray *in_stack_0000006c;
  
  uVar1 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar2 = extraout_s0;
  if (param_11 + 1U < uVar1) {
    fVar2 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(in_stack_0000003c,fVar2);
  FUN_00129da2();
  return;
}


