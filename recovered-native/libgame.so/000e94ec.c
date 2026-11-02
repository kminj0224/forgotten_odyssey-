/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e94ec  Symbol: Set_ReSkillNumber */

/* Hero_BaseSkill::Set_ReSkillNumber() */

void __thiscall Hero_BaseSkill::Set_ReSkillNumber(Hero_BaseSkill *this)

{
  N_Draw_Number *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    this_00 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar2 + 3);
    iVar1 = **(int **)(DAT_000e9528 + 0xe9504) + **(int **)(DAT_000e952c + 0xe950c) * 0x6c + iVar2;
    iVar2 = iVar2 + 1;
    N_Draw_Number::SetNumber_Re(this_00,(int)*(char *)(iVar1 + DAT_000e9530),2);
  } while (iVar2 != 9);
  return;
}


