/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7618  Symbol: reset */

/* MarketLayer::reset() */

void __thiscall MarketLayer::reset(MarketLayer *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_000e7654 + 0xe7628);
  N_Draw_Number::SetMoney_Re
            (*(N_Draw_Number **)(this + 0x114),
             *(int *)(*piVar1 + (**(int **)(DAT_000e7650 + 0xe7624) + DAT_000e7658) * 4 + 4),2);
  N_Draw_Number::SetNumber_Re(*(N_Draw_Number **)(this + 0x118),*(int *)(*piVar1 + DAT_000e765c),2);
  return;
}


