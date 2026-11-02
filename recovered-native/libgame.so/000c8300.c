/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8300  Symbol: KG_Get_Item_Rinforcement_Lv */

/* KG_Get_Item_Rinforcement_Lv(int, void*, int) */

int KG_Get_Item_Rinforcement_Lv(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = 0;
  piVar2 = *(int **)(DAT_000c8348 + 0xc831c);
  if (param_3 == 0) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(DAT_000c8344 + 0xc830e) + *param_2 * 0x18 + 8) <= *piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 != 0xb);
  }
  else {
    do {
      if (*(int *)((int)param_2 + 8) <= *piVar2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 != 0xb);
  }
  return 0;
}


