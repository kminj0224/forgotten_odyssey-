/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e3474  Symbol: Item_Buy_Call */

/* Market_Store::Item_Buy_Call() */

void __thiscall Market_Store::Item_Buy_Call(Market_Store *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  InventoryLayer::reset(*(InventoryLayer **)(this + 0x128));
  iVar2 = DAT_000e34cc;
  iVar1 = (**(code **)(*(int *)this + 0x90))(this);
  piVar3 = *(int **)(iVar2 + 0xe3494);
  N_Draw_Number::SetMoney_Re
            (*(N_Draw_Number **)(iVar1 + 0x114),
             *(int *)(*piVar3 + (**(int **)(DAT_000e34d0 + 0xe3498) + DAT_000e34d4) * 4 + 4),2);
  iVar2 = (**(code **)(*(int *)this + 0x90))(this);
  N_Draw_Number::SetNumber_Re(*(N_Draw_Number **)(iVar2 + 0x118),*(int *)(*piVar3 + DAT_000e34d8),2)
  ;
  return;
}


