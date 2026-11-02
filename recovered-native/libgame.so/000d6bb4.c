/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d6bb4  Symbol: SetHeroState */

/* Market_Equip::SetHeroState() */

void __thiscall Market_Equip::SetHeroState(Market_Equip *this)

{
  int iVar1;
  Draw_Number *pDVar2;
  
  pDVar2 = *(Draw_Number **)(this + 0x160);
  iVar1 = GetHero_Attack(*(int *)(this + 0x114) + -8);
  Draw_Number::SetNumber_Re(pDVar2,iVar1,2);
  pDVar2 = *(Draw_Number **)(this + 0x168);
  iVar1 = GetHero_HP(*(int *)(this + 0x114) + -8);
  Draw_Number::SetNumber_Re(pDVar2,iVar1,2);
  return;
}


