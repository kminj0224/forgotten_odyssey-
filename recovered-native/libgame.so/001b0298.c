/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b0298  Symbol: FUN_001b0298 */

void FUN_001b0298(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  FUN_001afd80();
  FUN_001afd4c(0xff,param_1);
  FUN_001afd4c(param_2 + 0xd0,param_1);
  if (0 < *(int *)(param_1 + 0x120)) {
    piVar2 = (int *)(param_1 + 0x124);
    iVar5 = 0;
    iVar4 = iVar3;
    do {
      iVar1 = *piVar2;
      if ((*(int *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x170) == 0)) {
        memset(*(void **)(iVar3 + (*(int *)(iVar1 + 0x14) + 0x12) * 4 + 4),0,0x40);
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
      }
      if (*(int *)(param_1 + 0x16c) != 0) {
        memset(*(void **)(iVar3 + (*(int *)(iVar1 + 0x18) + 0x22) * 4 + 4),0,0x100);
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x120));
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0xb;
  *(undefined4 *)(iVar3 + 0x10) = 0x10000;
  *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
  return;
}


