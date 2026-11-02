/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ebe60  Symbol: Skill_Button_Data */

/* Hero_HeroSkill::Skill_Button_Data() */

undefined8 Hero_HeroSkill::Skill_Button_Data(void)

{
  CCNode *in_r0;
  int *piVar1;
  undefined4 in_r1;
  undefined4 *puVar2;
  undefined uVar3;
  undefined4 in_r2;
  code *pcVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar2 = &local_1c;
  local_1c = in_r1;
  local_18 = in_r2;
  if (*(char *)(**(int **)(DAT_000ebee8 + 0xebe6c) +
                **(int **)(DAT_000ebeec + 0xebe7c) * 0x6c + *(int *)(in_r0 + 0x110) * 0xc +
                *(int *)(in_r0 + 0x114) + DAT_000ebef0) == '\n') {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0x2b);
    pcVar4 = *(code **)(*piVar1 + 0xf4);
  }
  else {
    if (*(int *)((**(int **)(DAT_000ebeec + 0xebe7c) * 9 + *(int *)(in_r0 + 0x110) + 0x910) * 4 +
                **(int **)(DAT_000ebee8 + 0xebe6c)) == 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0x2b);
      puVar2 = &local_18;
      pcVar4 = *(code **)(*piVar1 + 0xf4);
      local_18 = CONCAT31(local_18._1_3_,0xff);
      uVar3 = 0x7f;
      goto LAB_000ebee0;
    }
    piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,0x2b);
    puVar2 = &uStack_14;
    pcVar4 = *(code **)(*piVar1 + 0xf4);
  }
  uVar3 = 0xff;
  *(undefined *)puVar2 = 0xff;
LAB_000ebee0:
  *(undefined *)((int)puVar2 + 1) = uVar3;
  *(undefined *)((int)puVar2 + 2) = uVar3;
  (*pcVar4)();
  return CONCAT44(local_1c,in_r0);
}


