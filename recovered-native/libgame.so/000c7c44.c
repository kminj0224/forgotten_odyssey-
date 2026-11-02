/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7c44  Symbol: Get_Item_Upgrade_Count */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Get_Item_Upgrade_Count() */

int Get_Item_Upgrade_Count(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  for (iVar2 = 0;
      iVar2 < *(int *)((**(int **)(DAT_000c7c94 + 0xc7c5a) + DAT_000c7c90) * 4 +
                      **(int **)(DAT_000c7c8c + 0xc7c50)); iVar2 = iVar2 + 1) {
    iVar4 = **(int **)(DAT_000c7c8c + 0xc7c50) + **(int **)(DAT_000c7c94 + 0xc7c5a) * 2000 + iVar3;
    if (*(int *)(iVar4 + DAT_000c7c98) == 0xa9) {
      iVar1 = iVar1 + *(int *)(iVar4 + DAT_000c7c9c);
    }
    iVar3 = iVar3 + 0x14;
  }
  return iVar1;
}


