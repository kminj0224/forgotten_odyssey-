/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011e79c  Symbol: SkillReset */

/* New_Notice::SkillReset() */

void New_Notice::SkillReset(void)

{
  int *in_r0;
  int iVar1;
  Hero_HeroSkill *this;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  iVar5 = **(int **)(DAT_0011e85c + 0x11e7a8);
  if (*(int *)(iVar5 + DAT_0011e860) < 100) {
    (**(code **)(*in_r0 + 0xd4))(in_r0,1);
    go_CP((New_Notice *)in_r0);
  }
  else {
    *(int *)(iVar5 + DAT_0011e860) = *(int *)(iVar5 + DAT_0011e860) + -100;
    iVar6 = **(int **)(DAT_0011e868 + 0x11e7c0);
    iVar4 = **(int **)(DAT_0011e864 + 0x11e7be);
    iVar1 = *(int *)((iVar4 * 9 + iVar6 + 0x910) * 4 + iVar5);
    iVar3 = 0;
    do {
      iVar7 = iVar5 + iVar6 * 0xc + iVar4 * 0x6c + iVar3;
      iVar3 = iVar3 + 1;
      pcVar8 = (char *)(iVar7 + DAT_0011e86c);
      iVar1 = iVar1 + *pcVar8;
      *pcVar8 = '\0';
    } while (iVar3 != 0xc);
    *(int *)((iVar4 * 9 + iVar6 + 0x910) * 4 + iVar5) = iVar1;
    MarketLayer::reset(**(MarketLayer ***)(DAT_0011e870 + 0x11e812));
    this = (Hero_HeroSkill *)(**(code **)(*in_r0 + 0x90))(in_r0);
    Hero_HeroSkill::Set_ReSkillNumber(this);
    piVar2 = (int *)(**(code **)(*in_r0 + 0x90))(in_r0);
    (**(code **)(*piVar2 + 0x114))(piVar2,1);
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)in_r0,true);
    FileSave();
  }
  return;
}


