/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f2b4  Symbol: FUN_0018f2b4 */

int FUN_0018f2b4(int *param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  if ((param_1 == (int *)0x0) || (param_2 == (code *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0018f254(param_1[1]);
    if (*param_1 != 0) {
      iVar8 = 0;
      for (iVar9 = 0; iVar9 < param_1[1]; iVar9 = iVar9 + 1) {
        puVar7 = (undefined4 *)(*param_1 + iVar8);
        if (puVar7[5] != 0) {
          while (puVar7 != (undefined4 *)0x0) {
            puVar5 = (undefined4 *)*puVar7;
            uVar2 = puVar7[2];
            uVar4 = puVar7[3];
            uVar6 = puVar7[1];
            uVar3 = (*param_2)(puVar7[4],uVar6);
            FUN_0018f070(iVar1,uVar6,uVar2,uVar4,uVar3);
            puVar7 = puVar5;
          }
        }
        iVar8 = iVar8 + 0x18;
      }
    }
    *(int *)(iVar1 + 8) = param_1[2];
  }
  return iVar1;
}


