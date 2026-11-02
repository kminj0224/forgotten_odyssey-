/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ce68  Symbol: FUN_0019ce68 */

undefined4 FUN_0019ce68(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *__dest;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 local_40;
  int local_38;
  int local_34;
  undefined4 *local_28;
  
  iVar5 = DAT_0019d038;
  iVar10 = DAT_0019d034 + 0x19ce74;
  if (((param_1 != 0) && (7 < param_2)) && (param_2 < 0x4001)) {
    iVar2 = *(int *)(param_1 + 8);
    puVar3 = *(undefined4 **)(param_1 + 4);
    if (puVar3 != (undefined4 *)0x0) {
      pvVar1 = (void *)(***(code ***)(iVar10 + DAT_0019d038))(param_2 * 0x14);
      *(void **)(param_1 + 4) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        memset(pvVar1,0,param_2 * 0x14);
        *(int *)(param_1 + 8) = param_2;
        uVar9 = 0;
        puVar8 = puVar3;
        for (local_34 = 0; iVar6 = DAT_0019d03c, local_34 < iVar2; local_34 = local_34 + 1) {
          if (puVar8[3] != 0) {
            if (iVar2 == 0x80) {
              if (*(int *)(param_1 + 8) == 0x80) {
                local_40 = FUN_0019cb90();
              }
              else {
                local_40 = FUN_0019cb5c(puVar8[1],puVar8[2]);
              }
            }
            else {
              local_40 = puVar8[4];
            }
            __aeabi_uidivmod(local_40,*(undefined4 *)(param_1 + 8));
            iVar6 = extraout_r1 * 0x14;
            pvVar1 = (void *)(*(int *)(param_1 + 4) + iVar6);
            if (*(int *)((int)pvVar1 + 0xc) == 0) {
              memcpy(pvVar1,puVar8,0x14);
              *(undefined4 *)(*(int *)(param_1 + 4) + iVar6) = 0;
              *(undefined4 *)(*(int *)(param_1 + 4) + iVar6 + 0x10) = local_40;
            }
            else {
              puVar4 = (undefined4 *)(***(code ***)(iVar10 + iVar5))(0x14);
              if (puVar4 == (undefined4 *)0x0) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar7 = puVar8[2];
                puVar4[1] = puVar8[1];
                puVar4[2] = uVar7;
                puVar4[4] = local_40;
                uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar6);
                puVar4[3] = 1;
                *puVar4 = uVar7;
                *(undefined4 **)(*(int *)(param_1 + 4) + iVar6) = puVar4;
              }
            }
          }
          puVar8 = puVar8 + 5;
        }
        local_28 = puVar3;
        for (local_38 = 0; local_38 < iVar2; local_38 = local_38 + 1) {
          puVar8 = (undefined4 *)*local_28;
          while (puVar8 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)*puVar8;
            if (iVar2 == 0x80) {
              if (*(int *)(param_1 + 8) == 0x80) {
                local_40 = FUN_0019cb90();
              }
              else {
                local_40 = FUN_0019cb5c(puVar8[1],puVar8[2]);
              }
            }
            else {
              local_40 = puVar8[4];
            }
            __aeabi_uidivmod(local_40,*(undefined4 *)(param_1 + 8));
            iVar5 = extraout_r1_00 * 0x14;
            __dest = (undefined4 *)(*(int *)(param_1 + 4) + iVar5);
            if (__dest[3] == 0) {
              memcpy(__dest,puVar8,0x14);
              *(undefined4 *)(*(int *)(param_1 + 4) + iVar5) = 0;
              *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 + 0xc) = 1;
              *(undefined4 *)(*(int *)(param_1 + 4) + iVar5 + 0x10) = local_40;
              (***(code ***)(iVar10 + iVar6))(puVar8);
              puVar8 = puVar4;
            }
            else {
              *puVar8 = *__dest;
              puVar8[4] = local_40;
              *(undefined4 **)(*(int *)(param_1 + 4) + iVar5) = puVar8;
              puVar8 = puVar4;
            }
          }
          local_28 = local_28 + 5;
        }
        (***(code ***)(iVar10 + DAT_0019d03c))(puVar3);
        return uVar9;
      }
      *(undefined4 **)(param_1 + 4) = puVar3;
    }
  }
  return 0xffffffff;
}


