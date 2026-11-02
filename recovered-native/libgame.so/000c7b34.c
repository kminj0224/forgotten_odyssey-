/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7b34  Symbol: Item_Upgrade_Count_Num */

/* Item_Upgrade_Count_Num(int, void*) */

int Item_Upgrade_Count_Num(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar4 = 0;
  piVar2 = *(int **)(DAT_000c7b80 + 0xc7b50);
  piVar3 = piVar2;
  do {
    if (*(int *)(*(int *)(DAT_000c7b7c + 0xc7b40) + *param_2 * 0x18 + 8) <= *piVar3) {
      iVar1 = __divsi3(*(undefined4 *)((int)param_2 + 8),10);
      return piVar2[iVar4 * 3 + 2] * piVar2[iVar1 * 3 + 1];
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar4 != 10);
  return 0;
}


