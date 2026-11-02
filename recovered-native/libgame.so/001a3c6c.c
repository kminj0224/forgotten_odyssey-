/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a3c6c  Symbol: FUN_001a3c6c */

void FUN_001a3c6c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code **ppcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  char local_80 [100];
  int local_1c;
  
  iVar6 = DAT_001a3d84;
  iVar2 = DAT_001a3d80;
  iVar9 = DAT_001a3d70 + 0x1a3c78;
  local_1c = **(int **)(iVar9 + DAT_001a3d74);
  if ((param_2 == 0) || (param_1 == 0)) {
LAB_001a3d58:
    uVar3 = 0xffffffff;
  }
  else {
    iVar5 = 0;
    iVar7 = **(int **)(iVar9 + DAT_001a3d78);
    do {
      cVar1 = *(char *)(iVar7 + (*(byte *)(param_2 + iVar5) + 1) * 2);
      local_80[iVar5] = cVar1;
      if (cVar1 == '\0') break;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 99);
    local_80[iVar5] = '\0';
    piVar8 = (int *)(iVar9 + DAT_001a3d7c);
    if (*piVar8 == 0) {
      piVar8[1] = 0;
      ppcVar4 = *(code ***)(iVar9 + iVar2);
      piVar8[2] = 0x14;
      iVar2 = (**ppcVar4)(0xa0);
      *piVar8 = iVar2;
      if (iVar2 == 0) goto LAB_001a3d58;
    }
    else {
      iVar2 = piVar8[2];
      if (iVar2 <= piVar8[1]) {
        piVar8[2] = iVar2 << 1;
        iVar2 = (***(code ***)(iVar9 + iVar6))(*piVar8,iVar2 << 4);
        *piVar8 = iVar2;
      }
    }
    piVar8 = (int *)(iVar9 + DAT_001a3d7c);
    for (iVar2 = 0; iVar6 = piVar8[1], iVar2 < iVar6; iVar2 = iVar2 + 1) {
      puVar10 = (undefined4 *)(*piVar8 + iVar2 * 8);
      iVar6 = strcmp((char *)puVar10[1],local_80);
      if (iVar6 == 0) {
        (***(code ***)(iVar9 + DAT_001a3d88))(*puVar10);
        iVar6 = *piVar8;
        uVar3 = (***(code ***)(iVar9 + DAT_001a3d8c))(param_1);
        *(undefined4 *)(iVar6 + iVar2 * 8) = uVar3;
        goto LAB_001a3d54;
      }
    }
    iVar2 = *piVar8;
    ppcVar4 = *(code ***)(iVar9 + DAT_001a3d8c);
    uVar3 = (**ppcVar4)(param_1);
    *(undefined4 *)(iVar2 + iVar6 * 8) = uVar3;
    iVar6 = piVar8[1];
    iVar2 = *piVar8;
    uVar3 = (**ppcVar4)(local_80);
    *(undefined4 *)(iVar2 + iVar6 * 8 + 4) = uVar3;
    piVar8[1] = piVar8[1] + 1;
LAB_001a3d54:
    uVar3 = 0;
  }
  if (local_1c == **(int **)(iVar9 + DAT_001a3d74)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


