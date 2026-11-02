/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b44a4  Symbol: FUN_001b44a4 */

undefined4 FUN_001b44a4(int param_1,ushort **param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1d0);
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar2 = *(int *)(iVar4 + 0x34);
    if (iVar2 == 0) {
      FUN_001b3f2c();
      iVar2 = *(int *)(iVar4 + 0x34);
    }
    *(int *)(iVar4 + 0x34) = iVar2 + -1;
  }
  uVar3 = *(uint *)(param_1 + 0x1a4);
  if (0 < *(int *)(param_1 + 0x16c)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_001b39c8(param_1,iVar4 + 0xb8);
      if (iVar1 != 0) {
        **param_2 = **param_2 | (ushort)(1 << (uVar3 & 0xff));
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x16c));
  }
  return 1;
}


