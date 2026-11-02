/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001afd80  Symbol: FUN_001afd80 */

void FUN_001afd80(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  uVar2 = (*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10)) - 1U & DAT_001afedc;
  if ((int)uVar2 < *(int *)(iVar3 + 0xc)) {
    uVar2 = uVar2 + 0x8000;
    *(uint *)(iVar3 + 0xc) = uVar2;
  }
  else {
    *(uint *)(iVar3 + 0xc) = uVar2;
  }
  uVar2 = uVar2 << (*(uint *)(iVar3 + 0x1c) & 0xff);
  *(uint *)(iVar3 + 0xc) = uVar2;
  if ((uVar2 & 0xf8000000) == 0) {
    iVar1 = *(int *)(iVar3 + 0x20);
    if (iVar1 == 0) {
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
    }
    else if (-1 < iVar1) {
      if (*(int *)(iVar3 + 0x18) != 0) {
        do {
          FUN_001afd4c(0,param_1);
          iVar1 = *(int *)(iVar3 + 0x18) + -1;
          *(int *)(iVar3 + 0x18) = iVar1;
        } while (iVar1 != 0);
        iVar1 = *(int *)(iVar3 + 0x20);
      }
      FUN_001afd4c(iVar1,param_1);
    }
    if (*(int *)(iVar3 + 0x14) != 0) {
      iVar1 = *(int *)(iVar3 + 0x18);
      while (iVar1 != 0) {
        FUN_001afd4c(0,param_1);
        iVar1 = *(int *)(iVar3 + 0x18) + -1;
        *(int *)(iVar3 + 0x18) = iVar1;
      }
      do {
        FUN_001afd4c(0xff,param_1);
        FUN_001afd4c(0,param_1);
        iVar1 = *(int *)(iVar3 + 0x14) + -1;
        *(int *)(iVar3 + 0x14) = iVar1;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x20);
    if (-1 < iVar1) {
      if (*(int *)(iVar3 + 0x18) != 0) {
        do {
          FUN_001afd4c(0,param_1);
          iVar1 = *(int *)(iVar3 + 0x18) + -1;
          *(int *)(iVar3 + 0x18) = iVar1;
        } while (iVar1 != 0);
        iVar1 = *(int *)(iVar3 + 0x20);
      }
      FUN_001afd4c(iVar1 + 1,param_1);
      if (*(int *)(iVar3 + 0x20) == 0xfe) {
        FUN_001afd4c(0,param_1);
      }
    }
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  uVar2 = *(uint *)(iVar3 + 0xc);
  if ((uVar2 & DAT_001afee0) != 0) {
    if (*(int *)(iVar3 + 0x18) != 0) {
      do {
        FUN_001afd4c(0,param_1);
        iVar1 = *(int *)(iVar3 + 0x18) + -1;
        *(int *)(iVar3 + 0x18) = iVar1;
      } while (iVar1 != 0);
      uVar2 = *(uint *)(iVar3 + 0xc);
    }
    FUN_001afd4c((int)uVar2 >> 0x13 & 0xff,param_1);
    uVar2 = *(uint *)(iVar3 + 0xc);
    if (((int)uVar2 >> 0x13 & 0xffU) == 0xff) {
      FUN_001afd4c(0,param_1);
      uVar2 = *(uint *)(iVar3 + 0xc);
    }
    if (((uVar2 & 0x7f800) != 0) &&
       (FUN_001afd4c((int)uVar2 >> 0xb & 0xff,param_1),
       (*(int *)(iVar3 + 0xc) >> 0xb & 0xffU) == 0xff)) {
      FUN_001afd4c(0,param_1);
    }
  }
  return;
}


