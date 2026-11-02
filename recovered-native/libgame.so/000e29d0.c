/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e29d0  Symbol: MARKET_REINFOR_END_CALL */

/* Market_Store::MARKET_REINFOR_END_CALL() */

undefined8 Market_Store::MARKET_REINFOR_END_CALL(void)

{
  int in_r0;
  undefined4 in_r1;
  int iVar1;
  undefined4 local_c;
  
  iVar1 = *(int *)(in_r0 + 0x194);
  local_c = in_r1;
  if (iVar1 != -1) {
    local_c = 0;
    Inventory_Item_Popup_re
              (in_r0,*(int *)(**(int **)(DAT_000e2a20 + 0xe29fa) +
                             iVar1 * 0x14 + **(int **)(DAT_000e2a18 + 0xe29e6) * 2000 + DAT_000e2a1c
                             ),*(int *)(in_r0 + 0x1a8),*(int *)(in_r0 + 0x1ac),iVar1);
    in_r0 = iVar1;
  }
  return CONCAT44(local_c,in_r0);
}


