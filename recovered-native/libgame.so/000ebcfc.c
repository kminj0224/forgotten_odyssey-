/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ebcfc  Symbol: SetSkillNumber */

/* Hero_HeroSkill::SetSkillNumber() */

void __thiscall Hero_HeroSkill::SetSkillNumber(Hero_HeroSkill *this)

{
  int *this_00;
  int iVar1;
  undefined8 uVar2;
  CCPoint local_20;
  int local_1c;
  
  iVar1 = 0;
  do {
    this_00 = (int *)N_Draw_Number::node();
    (**(code **)(*this_00 + 0x3c))(this_00,iVar1 * 8 + *(int *)(DAT_000ebd94 + 0xebd12));
    (**(code **)(*(int *)this + 0xcc))(this,this_00,iVar1 + 9);
    N_Draw_Number::SetNumberFont((N_Draw_Number *)this_00,0);
    iVar1 = iVar1 + 1;
    uVar2 = N_Draw_Number::SetNumber((N_Draw_Number *)this_00,10,2);
  } while (iVar1 != 0xc);
  iVar1 = *(int *)((**(int **)(DAT_000ebd9c + 0xebd54) * 9 + *(int *)(this + 0x110) + 0x910) * 4 +
                  **(int **)(DAT_000ebd98 + 0xebd4c));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawNumber((CCNode *)this,iVar1,local_20,local_1c,0,1,8);
  return;
}


