/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b0940  Symbol: FUN_001b0940 */

undefined4 FUN_001b0940(int param_1,short **param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar1 = *(int *)(iVar4 + 0x44);
    if (iVar1 == 0) {
      FUN_001b0298(param_1,*(undefined4 *)(iVar4 + 0x48));
      iVar1 = *(int *)(param_1 + 0xec);
      *(int *)(iVar4 + 0x44) = iVar1;
      *(uint *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1U & 7;
    }
    *(int *)(iVar4 + 0x44) = iVar1 + -1;
  }
  uVar2 = *(uint *)(param_1 + 0x174);
  if (0 < *(int *)(param_1 + 0x13c)) {
    iVar1 = 0;
    do {
      psVar3 = *param_2;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + 1;
      FUN_001afee4(param_1,iVar4 + 0xcc,(int)*psVar3 >> (uVar2 & 0xff) & 1);
    } while (iVar1 < *(int *)(param_1 + 0x13c));
  }
  return 1;
}


