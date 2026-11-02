/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea358  Symbol: SetHeroState */

/* Hero_HeroEquip::SetHeroState() */

void __thiscall Hero_HeroEquip::SetHeroState(Hero_HeroEquip *this)

{
  N_Draw_Number *pNVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(DAT_000ea3a0 + 0xea364);
  iVar3 = *piVar2;
  if (iVar3 == 0) {
    N_Draw_Number::SetNumber_Re(*(N_Draw_Number **)(this + 0x128),0,2);
    pNVar1 = *(N_Draw_Number **)(this + 300);
    iVar3 = 0;
  }
  else {
    pNVar1 = *(N_Draw_Number **)(this + 0x128);
    iVar3 = GetHero_Attack(iVar3);
    N_Draw_Number::SetNumber_Re(pNVar1,iVar3,2);
    pNVar1 = *(N_Draw_Number **)(this + 300);
    iVar3 = GetHero_HP(*piVar2);
  }
  N_Draw_Number::SetNumber_Re(pNVar1,iVar3,2);
  return;
}


