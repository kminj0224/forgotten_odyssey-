/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020ee48  Symbol: FUN_0020ee48 */

void FUN_0020ee48(uint *param_1,undefined4 *param_2,int param_3)

{
  undefined uVar1;
  char cVar2;
  size_t sVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  size_t sVar9;
  undefined *puVar10;
  uint uVar11;
  undefined *puVar12;
  char local_44 [32];
  
  if ((param_2 == (undefined4 *)0x0) || (param_1[0x47] != 0)) {
    return;
  }
  do {
    if ((param_2[2] == 0) && ((piVar4 = (int *)param_2[1], param_3 != 0 || (2 < *piVar4 - 0x1aU))))
    {
      iVar6 = *piVar4;
      param_2[2] = 1;
      uVar7 = param_1[0x45];
      param_1[0x45] = param_2[3];
      if (iVar6 == 0x25) {
        FUN_0020eb90(param_1,piVar4,*param_2);
        param_1[0x45] = uVar7;
        return;
      }
      if (iVar6 == 0x26) {
        FUN_0020f1d8(param_1,piVar4,*param_2);
        param_1[0x45] = uVar7;
        return;
      }
      if (iVar6 == 2) {
        uVar11 = param_1[0x46];
        param_1[0x46] = 0;
        FUN_0020e41c(param_1,piVar4[1]);
        param_1[0x46] = uVar11;
        uVar11 = param_1[0x41];
        if ((*param_1 & 4) == 0) {
          puVar12 = (undefined *)(DAT_0020f1c8 + 0x20ef5a);
          puVar10 = (undefined *)(DAT_0020f1c8 + 0x20ef58);
          do {
            puVar8 = puVar10 + 1;
            uVar1 = *puVar10;
            if (uVar11 == 0xff) {
              *(undefined *)((int)param_1 + 0x103) = 0;
              (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
              uVar5 = 1;
              uVar11 = 0;
              param_1[0x49] = param_1[0x49] + 1;
            }
            else {
              uVar5 = uVar11 + 1;
            }
            *(undefined *)((int)param_1 + uVar11 + 4) = uVar1;
            param_1[0x41] = uVar5;
            *(undefined *)(param_1 + 0x42) = uVar1;
            uVar11 = uVar5;
            puVar10 = puVar8;
          } while (puVar8 != puVar12);
        }
        else {
          if (uVar11 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar5 = 1;
            uVar11 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar5 = uVar11 + 1;
          }
          *(undefined *)((int)param_1 + uVar11 + 4) = 0x2e;
          param_1[0x41] = uVar5;
          *(undefined *)(param_1 + 0x42) = 0x2e;
        }
        piVar4 = *(int **)(param_2[1] + 8);
        iVar6 = *piVar4;
        if (iVar6 != 0x3f) goto LAB_0020f01c;
        puVar12 = (undefined *)(DAT_0020f1cc + 0x20f059);
        uVar11 = param_1[0x41];
        puVar10 = (undefined *)(DAT_0020f1cc + 0x20f04c);
        do {
          puVar8 = puVar10 + 1;
          uVar1 = *puVar10;
          if (uVar11 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar5 = 1;
            uVar11 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar5 = uVar11 + 1;
          }
          *(undefined *)((int)param_1 + uVar11 + 4) = uVar1;
          param_1[0x41] = uVar5;
          *(undefined *)(param_1 + 0x42) = uVar1;
          uVar11 = uVar5;
          puVar10 = puVar8;
        } while (puVar8 != puVar12);
        sprintf(local_44,(char *)(DAT_0020f1d0 + 0x20f0c4),piVar4[2] + 1);
        sVar3 = strlen(local_44);
        if (sVar3 == 0) {
          uVar11 = param_1[0x41];
        }
        else {
          sVar9 = 0;
          uVar5 = param_1[0x41];
          do {
            cVar2 = local_44[sVar9];
            if (uVar5 == 0xff) {
              *(undefined *)((int)param_1 + 0x103) = 0;
              (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
              uVar11 = 1;
              uVar5 = 0;
              param_1[0x49] = param_1[0x49] + 1;
            }
            else {
              uVar11 = uVar5 + 1;
            }
            sVar9 = sVar9 + 1;
            *(char *)((int)param_1 + uVar5 + 4) = cVar2;
            param_1[0x41] = uVar11;
            *(char *)(param_1 + 0x42) = cVar2;
            uVar5 = uVar11;
          } while (sVar9 != sVar3);
        }
        puVar12 = (undefined *)(DAT_0020f1d4 + 0x20f16b);
        puVar10 = (undefined *)(DAT_0020f1d4 + 0x20f168);
        do {
          puVar8 = puVar10 + 1;
          uVar1 = *puVar10;
          if (uVar11 == 0xff) {
            *(undefined *)((int)param_1 + 0x103) = 0;
            (*(code *)param_1[0x43])(param_1 + 1,0xff,param_1[0x44]);
            uVar5 = 1;
            uVar11 = 0;
            param_1[0x49] = param_1[0x49] + 1;
          }
          else {
            uVar5 = uVar11 + 1;
          }
          *(undefined *)((int)param_1 + uVar11 + 4) = uVar1;
          param_1[0x41] = uVar5;
          *(undefined *)(param_1 + 0x42) = uVar1;
          uVar11 = uVar5;
          puVar10 = puVar8;
        } while (puVar8 != puVar12);
        do {
          piVar4 = (int *)piVar4[1];
          iVar6 = *piVar4;
LAB_0020f01c:
        } while (iVar6 - 0x1aU < 3);
        FUN_0020e41c(param_1,piVar4);
        param_1[0x45] = uVar7;
        return;
      }
      FUN_0020e4f8(param_1);
      param_1[0x45] = uVar7;
    }
    param_2 = (undefined4 *)*param_2;
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
  } while (param_1[0x47] == 0);
  return;
}


