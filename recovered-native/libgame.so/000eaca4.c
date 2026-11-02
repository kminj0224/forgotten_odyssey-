/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eaca4  Symbol: Item_Buy_Call */

/* Hero_HeroEquip::Item_Buy_Call() */

void __thiscall Hero_HeroEquip::Item_Buy_Call(Hero_HeroEquip *this)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  
  if (this != (Hero_HeroEquip *)0x0) {
    ppiVar1 = (int **)(DAT_000eacfc + 0xeacb6);
    InventoryLayer::reset(*(InventoryLayer **)(this + 0x114));
    piVar2 = *ppiVar1;
    piVar3 = *(int **)(DAT_000ead00 + 0xeacc4);
    N_Draw_Number::SetMoney_Re
              (*(N_Draw_Number **)(*piVar2 + 0x114),
               *(int *)(*piVar3 + (**(int **)(DAT_000ead08 + 0xeacd0) + DAT_000ead04) * 4 + 4),2);
    N_Draw_Number::SetNumber_Re
              (*(N_Draw_Number **)(*piVar2 + 0x118),*(int *)(*piVar3 + DAT_000ead0c),2);
    SetHeroState(this);
  }
  return;
}


