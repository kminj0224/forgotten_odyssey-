/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad460  Symbol: FUN_001ad460 */

void FUN_001ad460(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  undefined uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_4;
  if (0 < *(int *)(param_1 + 0x13c)) {
    iVar6 = 0;
    do {
      puVar5 = *(undefined **)(iVar7 + iVar6 * 4);
      iVar3 = *(int *)(param_1 + 0x70);
      puVar4 = (undefined *)*param_3;
      puVar2 = puVar5 + iVar3;
      if (puVar5 < puVar2) {
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar5 = uVar1;
          puVar5[1] = uVar1;
          puVar5 = puVar5 + 2;
        } while (puVar5 < puVar2);
        iVar3 = *(int *)(param_1 + 0x70);
      }
      jcopy_sample_rows(iVar7,iVar6,iVar7,iVar6 + 1,1,iVar3);
      iVar6 = iVar6 + 2;
      param_3 = param_3 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x13c));
  }
  return;
}


