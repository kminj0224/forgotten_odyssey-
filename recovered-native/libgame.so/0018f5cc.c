/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f5cc  Symbol: FUN_0018f5cc */

void FUN_0018f5cc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0018f61c + 0x18f5d6;
  iVar3 = iVar4 + DAT_0018f620;
  if (*(int *)(iVar3 + 0x78) == 0) {
    iVar2 = *(int *)(iVar3 + 0x7c);
    if (iVar2 < 0xf) {
      iVar1 = iVar4 + DAT_0018f624;
      *(int *)(iVar2 * 0x10 + iVar1) = iVar4 + DAT_0018f628;
      *(int *)(iVar1 + iVar2 * 0x10 + 4) = iVar4 + DAT_0018f62c;
      iVar5 = iVar2 * 0x10 + 8;
      *(int *)(iVar5 + iVar1) = iVar4 + DAT_0018f630;
      *(int *)(iVar1 + iVar5 + 4) = iVar4 + DAT_0018f634;
      *(undefined4 *)(iVar3 + 0x78) = 1;
      *(int *)(iVar3 + 0x7c) = iVar2 + 1;
    }
    *(undefined4 *)(iVar4 + DAT_0018f620 + 0x78) = 1;
  }
  return;
}


