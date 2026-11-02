/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aad80  Symbol: FUN_001aad80 */

void FUN_001aad80(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  int iVar12;
  byte local_3c [16];
  int local_2c;
  
  iVar2 = DAT_001aaebc;
  iVar12 = DAT_001aaeb8 + 0x1aad98;
  local_2c = **(int **)(iVar12 + DAT_001aaebc);
  ppbVar11 = (byte **)param_1[6];
  pbVar9 = ppbVar11[1];
  pbVar6 = *ppbVar11;
  if (pbVar9 == (byte *)0x0) {
    iVar3 = (*(code *)ppbVar11[3])();
    if (iVar3 != 0) {
      pbVar6 = *ppbVar11;
      pbVar9 = ppbVar11[1];
      goto LAB_001aadac;
    }
LAB_001aae7e:
    uVar4 = 0;
    goto LAB_001aae4c;
  }
LAB_001aadac:
  pbVar9 = pbVar9 + -1;
  bVar1 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (pbVar9 == (byte *)0x0) {
    iVar3 = (*(code *)ppbVar11[3])(param_1);
    if (iVar3 == 0) goto LAB_001aae7e;
    pbVar6 = *ppbVar11;
    pbVar9 = ppbVar11[1];
  }
  pbVar10 = pbVar6 + 1;
  uVar7 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar6;
  pbVar9 = pbVar9 + -1;
  if ((int)uVar7 < 0xe) {
    uVar5 = uVar7;
    if (0 < (int)uVar7) goto LAB_001aadcc;
    uVar5 = 0;
  }
  else {
    uVar5 = 0xe;
LAB_001aadcc:
    uVar8 = 0;
    do {
      while (pbVar9 == (byte *)0x0) {
        iVar3 = (*(code *)ppbVar11[3])(param_1);
        if (iVar3 == 0) goto LAB_001aae7e;
        pbVar9 = ppbVar11[1] + -1;
        pbVar10 = *ppbVar11 + 1;
        local_3c[uVar8] = **ppbVar11;
        uVar8 = uVar8 + 1;
        if (uVar5 <= uVar8) goto LAB_001aae06;
      }
      pbVar9 = pbVar9 + -1;
      local_3c[uVar8] = *pbVar10;
      uVar8 = uVar8 + 1;
      pbVar10 = pbVar10 + 1;
    } while (uVar8 < uVar5);
  }
LAB_001aae06:
  iVar3 = uVar7 - uVar5;
  if (param_1[0x6d] == 0xe0) {
    FUN_001aab5c(param_1,local_3c,uVar5,iVar3);
  }
  else if (param_1[0x6d] == 0xee) {
    FUN_001aacf4(param_1,local_3c,uVar5,iVar3);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    *(int *)(*param_1 + 0x18) = param_1[0x6d];
    (**(code **)*param_1)(param_1);
  }
  *ppbVar11 = pbVar10;
  ppbVar11[1] = pbVar9;
  uVar4 = 1;
  if (0 < iVar3) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar3);
    uVar4 = 1;
  }
LAB_001aae4c:
  if (local_2c == **(int **)(iVar12 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


