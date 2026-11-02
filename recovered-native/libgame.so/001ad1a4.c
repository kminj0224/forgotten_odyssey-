/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad1a4  Symbol: FUN_001ad1a4 */

void FUN_001ad1a4(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *param_4;
  if (0 < *(int *)(param_1 + 0x13c)) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      puVar4 = *(undefined **)(iVar3 + iVar6);
      puVar2 = *(undefined **)(param_3 + iVar6);
      puVar5 = puVar4 + *(int *)(param_1 + 0x70);
      for (; puVar4 < puVar5; puVar4 = puVar4 + 2) {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < *(int *)(param_1 + 0x13c));
  }
  return;
}


