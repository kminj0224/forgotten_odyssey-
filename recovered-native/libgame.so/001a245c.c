/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a245c  Symbol: FUN_001a245c */

int FUN_001a245c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_001a24bc;
  iVar2 = DAT_001a24b8;
  if ((param_1 == 0) ||
     (iVar3 = *(int *)(param_1 + 0x2c), uVar1 = DAT_001a24c4, iVar2 = DAT_001a24c0, iVar3 == 0)) {
    FUN_001a1b94(uVar1,DAT_001a24b4 + 0x1a2466 + iVar2);
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_001a23b8(iVar3);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x14) = iVar3;
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
      if (*(int *)(iVar3 + 0x10) == 0) {
        *(int *)(iVar3 + 0x10) = iVar2;
        *(int *)(iVar3 + 0xc) = iVar2;
      }
      else {
        *(int *)(*(int *)(iVar3 + 0x10) + 0x18) = iVar2;
        *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar3 + 0x10);
        *(int *)(iVar3 + 0x10) = iVar2;
      }
    }
  }
  return iVar2;
}


