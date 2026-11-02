/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9b1c  Symbol: Touch_Upgrade_Button */

/* Hero_BaseSkill::Touch_Upgrade_Button(int) */

void __thiscall Hero_BaseSkill::Touch_Upgrade_Button(Hero_BaseSkill *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  New_Notice *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = *(int **)(DAT_000e9c00 + 0xe9b28);
  iVar4 = *piVar8;
  piVar7 = *(int **)(DAT_000e9c04 + 0xe9b2e);
  pcVar2 = (char *)(*piVar7 + iVar4 * 0x6c + param_1 + DAT_000e9c08);
  cVar1 = *pcVar2;
  if (cVar1 < 10) {
    iVar4 = *piVar7 + (iVar4 + DAT_000e9c0c) * 4;
    iVar5 = *(int *)(iVar4 + 4);
    iVar6 = *(int *)(((int)cVar1 + param_1 * 10) * 4 + *(int *)(DAT_000e9c10 + 0xe9b6c));
    if (iVar5 < iVar6) {
      this_00 = (New_Notice *)New_Notice::node();
      (**(code **)(*(int *)this + 0xcc))(this,this_00,0x19,0x19);
      New_Notice::go_CP_Item(this_00);
    }
    else {
      *(int *)(iVar4 + 4) = iVar5 - iVar6;
      *pcVar2 = cVar1 + '\x01';
      piVar3 = (int *)(**(code **)(*(int *)this + 0x90))(this);
      piVar3 = (int *)(**(code **)(*piVar3 + 0x90))();
      iVar4 = (**(code **)(*piVar3 + 0x90))();
      N_Draw_Number::SetMoney_Re
                (*(N_Draw_Number **)(iVar4 + 0x114),
                 *(int *)(*piVar7 + (*piVar8 + DAT_000e9c0c) * 4 + 4),2);
      Draw_Skill_Icon_Text(this,param_1);
      Set_ReSkillNumber(this);
      if (*(char *)(*piVar7 + 1) != '\0') {
        pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000e9c14 + -0x26));
      }
    }
  }
  return;
}


