/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f49c  Symbol: FUN_0018f49c */

void FUN_0018f49c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = DAT_0018f4d8 + 0x18f4a4;
  if (*(int *)(iVar3 + DAT_0018f4dc + 0x78) != 0) {
    iVar1 = *(int *)(iVar3 + DAT_0018f4dc + 0x7c) + -1;
    puVar2 = (undefined4 *)(iVar3 + DAT_0018f4e0 + iVar1 * 0x10);
    for (; -1 < iVar1; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + -4;
    }
    iVar3 = iVar3 + DAT_0018f4dc;
    *(undefined4 *)(iVar3 + 0x7c) = 0;
    *(undefined4 *)(iVar3 + 0x78) = 0;
  }
  return;
}


