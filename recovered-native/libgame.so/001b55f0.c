/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b55f0  Symbol: FUN_001b55f0 */

void FUN_001b55f0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  iVar14 = *(int *)(param_1 + 0x14c);
  iVar12 = *(int *)(param_1 + 0x1dc);
  uVar11 = *(uint *)(param_1 + 0x70);
  iVar3 = *(int *)(iVar12 + 8);
  param_3 = param_3 << 2;
  iVar4 = *(int *)(iVar12 + 0xc);
  iVar5 = *(int *)(iVar12 + 0x10);
  iVar12 = *(int *)(iVar12 + 0x14);
  for (param_5 = param_5 + -1; -1 < param_5; param_5 = param_5 + -1) {
    iVar6 = *(int *)(*param_2 + param_3);
    iVar15 = *(int *)(param_2[1] + param_3);
    iVar13 = *(int *)(param_2[2] + param_3);
    puVar7 = (undefined *)*param_4;
    param_4 = param_4 + 1;
    if (uVar11 != 0) {
      uVar8 = 0;
      do {
        bVar2 = *(byte *)(iVar15 + uVar8);
        uVar16 = (uint)*(byte *)(iVar6 + uVar8);
        pbVar1 = (byte *)(iVar13 + uVar8);
        uVar8 = uVar8 + 1;
        iVar9 = (uint)*pbVar1 * 4;
        *puVar7 = *(undefined *)(iVar14 + *(int *)(iVar3 + iVar9) + uVar16);
        iVar10 = (uint)bVar2 * 4;
        puVar7[1] = *(undefined *)
                     (iVar14 + uVar16 +
                     (*(int *)(iVar5 + iVar9) + *(int *)(iVar12 + iVar10) >> 0x10));
        puVar7[2] = *(undefined *)(iVar14 + *(int *)(iVar4 + iVar10) + uVar16);
        puVar7 = puVar7 + 3;
      } while (uVar8 < uVar11);
    }
    param_3 = param_3 + 4;
  }
  return;
}


