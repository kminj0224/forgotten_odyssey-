/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e354c  Symbol: Inventory_Is_Full */

/* Market_Store::Inventory_Is_Full() */

undefined4 Market_Store::Inventory_Is_Full(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)((**(int **)(DAT_000e3594 + 0xe3562) + DAT_000e3590) * 4 +
                **(int **)(DAT_000e358c + 0xe3558)) <= iVar1) {
      return 1;
    }
    iVar2 = iVar2 + 0x14;
    if (*(int *)(**(int **)(DAT_000e358c + 0xe3558) + **(int **)(DAT_000e3594 + 0xe3562) * 2000 +
                 iVar2 + DAT_000e3598) == 0) break;
    iVar1 = iVar1 + 1;
  }
  return 0;
}


