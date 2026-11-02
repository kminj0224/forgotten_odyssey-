/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00129d5a  Symbol: FUN_00129d5a */

void FUN_00129d5a(void)

{
  uint uVar1;
  float extraout_s0;
  float fVar2;
  GameScene *param_11;
  uint param_13;
  CCArray *param_14;
  
  uVar1 = cocos2d::CCArray::count(param_14);
  fVar2 = extraout_s0;
  if (param_13 < uVar1) {
    fVar2 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(param_11,fVar2);
  FUN_00129da2();
  return;
}


