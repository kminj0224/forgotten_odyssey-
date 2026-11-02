/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f56c  Symbol: FUN_0018f56c */

void FUN_0018f56c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = DAT_0018f5b4 + 0x18f576;
  piVar2 = (int *)(iVar3 + DAT_0018f5b8);
  if (*piVar2 == 0) {
    iVar1 = piVar2[1];
    if (iVar1 < 0xf) {
      piVar2[iVar1 * 4 + 2] = iVar3 + DAT_0018f5bc;
      piVar2[iVar1 * 4 + 3] = iVar3 + DAT_0018f5c0;
      piVar2[iVar1 * 4 + 4] = iVar3 + DAT_0018f5c4;
      piVar2[iVar1 * 4 + 5] = iVar3 + DAT_0018f5c8;
      *piVar2 = 1;
      piVar2[1] = iVar1 + 1;
    }
    *(undefined4 *)(iVar3 + DAT_0018f5b8) = 1;
  }
  return;
}


