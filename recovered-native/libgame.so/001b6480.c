/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b6480  Symbol: FUN_001b6480 */

undefined4 FUN_001b6480(int param_1,ushort **param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 0x1d0);
  uVar6 = *(uint *)(param_1 + 0x1a4);
  if (((*(int *)(param_1 + 0x118) == 0) || (*(int *)(iVar5 + 0x28) != 0)) ||
     (iVar3 = FUN_001b6048(param_1), iVar3 != 0)) {
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    local_3c = *puVar7;
    local_38 = puVar7[1];
    iVar3 = *(int *)(iVar5 + 8);
    uVar4 = *(uint *)(iVar5 + 0xc);
    if (0 < *(int *)(param_1 + 0x16c)) {
      iVar9 = 0;
      local_2c = param_1;
      do {
        puVar8 = *param_2;
        if (((int)uVar4 < 1) &&
           (iVar1 = FUN_001b5e98(&local_3c,iVar3,uVar4,1), iVar3 = local_34, uVar4 = local_30,
           iVar1 == 0)) goto LAB_001b654c;
        uVar4 = uVar4 - 1;
        if ((iVar3 >> (uVar4 & 0xff)) << 0x1f < 0) {
          *puVar8 = *puVar8 | (ushort)(1 << (uVar6 & 0xff));
        }
        iVar9 = iVar9 + 1;
        param_2 = param_2 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x16c));
      puVar7 = *(undefined4 **)(param_1 + 0x18);
    }
    *puVar7 = local_3c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_38;
    *(int *)(iVar5 + 8) = iVar3;
    *(uint *)(iVar5 + 0xc) = uVar4;
    *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + -1;
    uVar2 = 1;
  }
  else {
LAB_001b654c:
    uVar2 = 0;
  }
  return uVar2;
}


