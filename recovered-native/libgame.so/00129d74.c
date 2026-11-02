/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00129d74  Symbol: FUN_00129d74 */

void FUN_00129d74(void)

{
  uint uVar1;
  int unaff_r5;
  float extraout_s0;
  float fVar2;
  int in_stack_0000002c;
  GameScene *in_stack_0000003c;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  
  if (**(int **)(unaff_r5 + 4) != 3) {
    FUN_001284ce();
  }
  FUN_001284bc();
  if (**(char **)(in_stack_0000002c + DAT_00129ddc) == '\0') {
    FUN_00128d5a();
    if (iRam00000004 != 0) {
      FUN_00128500();
    }
    FUN_00128c4a();
    return;
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


