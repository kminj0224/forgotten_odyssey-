/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a0b58  Symbol: FUN_001a0b58 */

void FUN_001a0b58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_001a0bd0;
  iVar4 = DAT_001a0bc8 + 0x1a0b64;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    iVar2 = iVar4 + DAT_001a0bcc;
    do {
      if (((*(int *)(param_1 + 0x28) != 0) && (**(int **)(iVar4 + iVar1) != 0)) &&
         (*(int *)(param_2 + 4) == 1)) {
        iVar3 = *(int *)(param_1 + 0x6c);
        if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x6c)) {
          iVar3 = *(int *)(param_1 + 0x24);
        }
        FUN_00190950(uVar5,iVar3 * *(int *)(param_1 + 0x70),param_1 + 0x2c);
      }
      FUN_001a0604(param_1,param_2);
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_00190950(uVar5,1,iVar2);
      }
      param_2 = *(int *)(param_2 + 0x18);
    } while (param_2 != 0);
  }
  return;
}


