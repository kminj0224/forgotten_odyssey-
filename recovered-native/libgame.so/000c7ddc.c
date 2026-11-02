/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7ddc  Symbol: Rmove_Item */

/* Rmove_Item(int) */

void Rmove_Item(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = **(int **)(DAT_000c7e18 + 0xc7de6) +
          param_1 * 0x14 + **(int **)(DAT_000c7e20 + 0xc7dee) * 2000;
  puVar2 = (undefined4 *)(iVar1 + DAT_000c7e1c);
  puVar3 = (undefined4 *)(iVar1 + DAT_000c7e24);
  *puVar3 = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(iVar1 + DAT_000c7e28) = 0;
  return;
}


