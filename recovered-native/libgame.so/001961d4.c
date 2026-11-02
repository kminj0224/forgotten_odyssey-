/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001961d4  Symbol: FUN_001961d4 */

void FUN_001961d4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_0019633c + 0x1961e0;
  if (*(int *)(iVar4 + DAT_00196340) != 0) {
    iVar6 = iVar4 + DAT_00196344;
    iVar1 = FUN_0019c30c(param_2,iVar6);
    if (iVar1 == 0) {
      if (param_1[0x2f] < 1) {
        FUN_00195ca8(param_1,iVar6);
        if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x38), pcVar3 != (code *)0x0)) {
          (*pcVar3)(param_1[1],iVar6,0);
        }
      }
      iVar1 = FUN_0019c30c(param_2,iVar4 + DAT_00196348);
      if ((iVar1 == 0) && (iVar1 = FUN_0019c30c(param_2,iVar4 + DAT_0019634c), iVar1 == 0)) {
        if ((1 < param_1[0x2f]) ||
           (((((iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_00196350), iVar1 = DAT_0019634c, iVar6 == 0
               && (iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_00196354), iVar1 = DAT_0019634c,
                  iVar6 == 0)) &&
              (iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_00196358), iVar1 = DAT_0019634c, iVar6 == 0)
              ) && ((iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_0019635c), iVar1 = DAT_0019634c,
                    iVar6 == 0 &&
                    (iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_00196360), iVar1 = DAT_0019634c,
                    iVar6 == 0)))) &&
            (iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_00196364), iVar1 = DAT_0019634c, iVar6 == 0)))
           ) {
          iVar1 = FUN_0019c30c(param_2,iVar4 + DAT_00196368);
          if (iVar1 != 0) {
            return;
          }
          iVar1 = FUN_0019c30c(param_2,iVar4 + DAT_0019636c);
          if (iVar1 != 0) {
            return;
          }
          iVar6 = FUN_0019c30c(param_2,iVar4 + DAT_00196370);
          iVar1 = DAT_00196348;
          if (iVar6 != 0) {
            return;
          }
          iVar6 = iVar4 + DAT_00196348;
          iVar5 = iVar4 + DAT_0019634c;
          for (iVar7 = 0; iVar7 < param_1[0x2f]; iVar7 = iVar7 + 1) {
            iVar2 = FUN_0019c30c(*(undefined4 *)(param_1[0x31] + iVar7 * 4),iVar6);
            if (iVar2 != 0) {
              return;
            }
            iVar2 = FUN_0019c30c(*(undefined4 *)(param_1[0x31] + iVar7 * 4),iVar5);
            if (iVar2 != 0) {
              return;
            }
          }
        }
        FUN_00195ca8(param_1,iVar4 + iVar1);
        if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x38), pcVar3 != (code *)0x0)) {
          (*pcVar3)(param_1[1],iVar4 + iVar1,0);
        }
      }
    }
  }
  return;
}


