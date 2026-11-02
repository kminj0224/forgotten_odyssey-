/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ebda8  Symbol: Set_ReSkillNumber */

/* Hero_HeroSkill::Set_ReSkillNumber() */

undefined8 __thiscall Hero_HeroSkill::Set_ReSkillNumber(Hero_HeroSkill *this)

{
  int *piVar1;
  N_Draw_Number *pNVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar5 = *(int **)(DAT_000ebe50 + 0xebdb8);
  piVar6 = *(int **)(DAT_000ebe54 + 0xebdba);
  if (**(int **)(DAT_000ebe4c + 0xebdb4) == 0x1a) {
    iVar3 = (int)*(char *)(*piVar5 + *piVar6 + DAT_000ebe58 + 4);
  }
  else {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x90))();
    iVar3 = (**(code **)(*piVar1 + 0x90))();
    iVar3 = *(int *)(iVar3 + 0x114);
  }
  iVar7 = 0;
  do {
    pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7 + 9);
    iVar4 = *piVar5 + *piVar6 * 0x6c + iVar3 * 0xc + iVar7;
    iVar7 = iVar7 + 1;
    N_Draw_Number::SetNumber_Re(pNVar2,(int)*(char *)(iVar4 + DAT_000ebe5c),2);
  } while (iVar7 != 0xc);
  pNVar2 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  N_Draw_Number::SetNumber_Re
            (pNVar2,*(int *)((*piVar6 * 9 + *(int *)(this + 0x110) + 0x910) * 4 + *piVar5),1);
  return CONCAT44(iVar3 * 0xc,this);
}


