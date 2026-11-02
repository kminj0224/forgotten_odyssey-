/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197fec  Symbol: FUN_00197fec */

undefined4 FUN_00197fec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_1c [2];
  
  iVar7 = DAT_001981d4 + 0x197ffc;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (iVar3 = *(int *)(param_1 + 0x24), *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) < 0xfa)) {
    FUN_0017a2bc(iVar3,0xfa);
  }
  iVar3 = FUN_001978a4(param_1,local_1c);
  if (((iVar3 == 0x3e) || (iVar3 == 0x20)) || (iVar3 == 0x2f)) {
LAB_00198190:
    uVar6 = 0;
  }
  else {
    if (iVar3 < 0x100) {
      if (((0x19 < iVar3 - 0x61U) && (0x19 < iVar3 - 0x41U)) &&
         ((0x16 < iVar3 - 0xc0U && ((0x1e < iVar3 - 0xd8U && (iVar3 < 0xf8)))))) {
LAB_00198078:
        if ((iVar3 != 0x3a) && (iVar3 != 0x5f)) goto LAB_00198190;
      }
    }
    else {
      iVar4 = FUN_0019f630(iVar3,*(undefined4 *)(iVar7 + DAT_001981d8));
      if (((iVar4 == 0) && (DAT_001981f0 < (uint)(iVar3 + DAT_001981ec))) &&
         ((iVar3 != DAT_001981f4 && (8 < (uint)(iVar3 + DAT_001981e4))))) goto LAB_00198078;
    }
    iVar2 = DAT_001981e0;
    iVar1 = DAT_001981dc;
    iVar4 = DAT_001981d8;
    iVar8 = 0;
    local_30 = 0;
    while (((iVar3 != 0x3e && (iVar3 != 0x20)) && (iVar3 != 0x2f))) {
      if (iVar3 < 0x100) {
        if ((0x19 < iVar3 - 0x61U) &&
           ((((0x19 < iVar3 - 0x41U && (0x16 < iVar3 - 0xc0U)) && (0x1e < iVar3 - 0xd8U)) &&
            ((iVar3 < 0xf8 && (9 < iVar3 - 0x30U)))))) {
LAB_00198154:
          if (((iVar3 != 0x2d) && ((iVar3 != 0x2e && (iVar3 != 0x3a)))) && (iVar3 != 0x5f)) {
            if (iVar3 < 0x100) {
              if (iVar3 != 0xb7) break;
            }
            else {
              iVar5 = FUN_0019f630(iVar3,*(undefined4 *)(iVar7 + iVar1));
              if ((iVar5 == 0) &&
                 (iVar3 = FUN_0019f630(iVar3,*(undefined4 *)(iVar7 + iVar2)), iVar3 == 0)) break;
            }
          }
        }
      }
      else {
        iVar5 = FUN_0019f630(iVar3,*(undefined4 *)(iVar7 + iVar4));
        if (((iVar5 == 0) && (DAT_001981f0 < (uint)(iVar3 + DAT_001981ec))) &&
           ((iVar3 != DAT_001981f4 &&
            ((8 < (uint)(iVar3 + DAT_001981e4) &&
             (iVar5 = FUN_0019f630(iVar3,*(undefined4 *)(iVar7 + DAT_001981e8)), iVar5 == 0))))))
        goto LAB_00198154;
      }
      if (iVar8 < 0x65) {
        iVar8 = iVar8 + 1;
      }
      else {
        if ((*(int *)(param_1 + 0x124) == 0) &&
           (iVar3 = *(int *)(param_1 + 0x24), *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10) < 0xfa
           )) {
          FUN_0017a2bc(iVar3,0xfa);
        }
        iVar8 = 0;
      }
      local_30 = local_30 + local_1c[0];
      iVar3 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar3 + 0x10) == '\n') {
        iVar5 = 1;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
        iVar3 = *(int *)(param_1 + 0x24);
      }
      else {
        iVar5 = *(int *)(iVar3 + 0x20) + 1;
      }
      *(int *)(iVar3 + 0x20) = iVar5;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
           *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      iVar3 = FUN_001978a4(param_1,local_1c);
    }
    uVar6 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),
                         *(int *)(*(int *)(param_1 + 0x24) + 0x10) - local_30);
  }
  return uVar6;
}


