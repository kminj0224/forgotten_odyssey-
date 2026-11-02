/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9474  Symbol: SetSkillNumber */

/* Hero_BaseSkill::SetSkillNumber() */

void __thiscall Hero_BaseSkill::SetSkillNumber(Hero_BaseSkill *this)

{
  int *this_00;
  int iVar1;
  undefined8 uVar2;
  CCPoint local_20;
  int local_1c;
  
  iVar1 = 0;
  do {
    this_00 = (int *)N_Draw_Number::node();
    (**(code **)(*this_00 + 0x3c))(this_00,iVar1 * 8 + *(int *)(DAT_000e94e0 + 0xe948a));
    (**(code **)(*(int *)this + 0xcc))(this,this_00,iVar1 + 3);
    N_Draw_Number::SetNumberFont((N_Draw_Number *)this_00,0);
    iVar1 = iVar1 + 1;
    uVar2 = N_Draw_Number::SetNumber((N_Draw_Number *)this_00,10,2);
  } while (iVar1 != 9);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawMoney((CCNode *)this,0,local_20,local_1c,1,0,0x17);
  return;
}


