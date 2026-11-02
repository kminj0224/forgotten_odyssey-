/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d9e18  Symbol: MARKET_REINFOR1_END_CALL */

/* Market_Equip::MARKET_REINFOR1_END_CALL() */

undefined8 Market_Equip::MARKET_REINFOR1_END_CALL(void)

{
  Market_Equip *in_r0;
  undefined4 in_r1;
  int iVar1;
  int iVar2;
  int *piVar3;
  Market_Equip *pMVar4;
  
  pMVar4 = *(Market_Equip **)(in_r0 + 0x134);
  iVar2 = DAT_000d9e98 + 0xd9e26;
  if (pMVar4 == (Market_Equip *)0xffffffff) {
    iVar1 = *(int *)(in_r0 + 0x138);
    pMVar4 = in_r0;
    if (iVar1 != -1) {
      piVar3 = (int *)(**(int **)(iVar2 + DAT_000d9ea4) +
                      iVar1 * 0x14 + (*(int *)(in_r0 + 0x110) + -8) * 0x50 +
                      **(int **)(iVar2 + DAT_000d9e9c) * 0x2d0 + DAT_000d9ea8);
      pMVar4 = (Market_Equip *)piVar3[1];
      in_r1 = 1;
      Inventory_Item_Popup(in_r0,*piVar3,iVar1,0,(int)pMVar4,1);
    }
  }
  else {
    in_r1 = 0;
    Inventory_Item_Popup_re
              (in_r0,*(int *)(**(int **)(iVar2 + DAT_000d9ea4) +
                             (int)pMVar4 * 0x14 + **(int **)(iVar2 + DAT_000d9e9c) * 2000 +
                             DAT_000d9ea0),*(int *)(in_r0 + 0x148),*(int *)(in_r0 + 0x14c),
               (int)pMVar4,0);
  }
  return CONCAT44(in_r1,pMVar4);
}


