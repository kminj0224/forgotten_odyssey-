/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b576c  Symbol: FUN_001b576c */

void FUN_001b576c(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar13 = *(int *)(param_1 + 0x14c);
  iVar10 = *(int *)(param_1 + 0x1dc);
  uVar12 = *(uint *)(param_1 + 0x70);
  iVar2 = *(int *)(iVar10 + 8);
  param_3 = param_3 << 2;
  iVar14 = *(int *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  iVar10 = *(int *)(iVar10 + 0x14);
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    iVar4 = *(int *)(*param_2 + param_3);
    iVar5 = *(int *)(param_2[1] + param_3);
    iVar6 = *(int *)(param_2[2] + param_3);
    iVar15 = *(int *)(param_2[3] + param_3);
    puVar7 = (undefined *)*param_4;
    param_4 = param_4 + 1;
    if (uVar12 != 0) {
      uVar11 = 0;
      do {
        iVar8 = (uint)*(byte *)(iVar5 + uVar11) * 4;
        iVar9 = 0xff - (uint)*(byte *)(iVar4 + uVar11);
        iVar16 = (uint)*(byte *)(iVar6 + uVar11) * 4;
        *puVar7 = *(undefined *)(iVar13 + (iVar9 - *(int *)(iVar2 + iVar16)));
        puVar7[1] = *(undefined *)
                     (iVar13 + (iVar9 - (*(int *)(iVar3 + iVar16) + *(int *)(iVar10 + iVar8) >> 0x10
                                        )));
        puVar7[2] = *(undefined *)(iVar13 + (iVar9 - *(int *)(iVar14 + iVar8)));
        puVar1 = (undefined *)(iVar15 + uVar11);
        uVar11 = uVar11 + 1;
        puVar7[3] = *puVar1;
        puVar7 = puVar7 + 4;
      } while (uVar11 < uVar12);
    }
    param_3 = param_3 + 4;
  }
  return;
}


