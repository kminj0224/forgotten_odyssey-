/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a03e4  Symbol: FUN_001a03e4 */

void FUN_001a03e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar10 = DAT_001a05bc + 0x1a03f0;
  if (param_2 != 0) {
    uVar11 = *(undefined4 *)(param_1 + 0x18);
    iVar9 = *(int *)(param_2 + 0x14);
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    local_2c = 0;
    iVar6 = iVar10 + DAT_001a05c0;
    iVar7 = iVar10 + DAT_001a05c4;
    do {
      iVar5 = local_34;
      iVar2 = local_2c;
      if ((((*(int *)(param_2 + 0x24) != 0) ||
           (iVar4 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar10 + DAT_001a05c8),
           iVar1 = local_30, iVar3 = param_2, iVar4 == 0)) &&
          ((iVar3 = local_28, *(int *)(param_2 + 0x24) != 0 ||
           (iVar4 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar10 + DAT_001a05cc),
           iVar1 = param_2, iVar4 == 0)))) &&
         ((((*(int *)(param_2 + 0x24) != 0 ||
            (iVar4 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar6), iVar5 = param_2,
            iVar1 = local_30, iVar4 == 0)) &&
           ((*(int *)(param_2 + 0x24) == 0 ||
            ((iVar5 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar6), iVar5 == 0 ||
             (iVar4 = FUN_0019c30c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0xc),iVar7),
             iVar5 = local_34, iVar1 = local_30, iVar2 = param_2, iVar4 == 0)))))) &&
          (((iVar5 = local_34, iVar1 = local_30, iVar2 = local_2c, *(int *)(param_2 + 0x24) == 0 &&
            (((*(int *)(param_2 + 0xc) == 0 ||
              (pcVar8 = *(char **)(*(int *)(param_2 + 0xc) + 0x28), pcVar8 == (char *)0x0)) ||
             (*pcVar8 == '\0')))) &&
           (iVar4 = FUN_0019acf8(*(undefined4 *)(param_2 + 8)), iVar4 != 0)))))) {
        if (*(int *)(param_2 + 0xc) != 0) {
          FUN_0018bf48();
        }
        iVar4 = FUN_0018a038(*(undefined4 *)(param_2 + 8));
        *(int *)(param_2 + 0xc) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = param_2;
        }
      }
      local_28 = iVar3;
      local_2c = iVar2;
      local_30 = iVar1;
      local_34 = iVar5;
      FUN_001a0368(param_1,param_2);
      param_2 = *(int *)(param_2 + 0x18);
    } while (param_2 != 0);
    if ((((local_28 == 0) && (local_30 != 0)) && ((iVar9 != 0 && (*(int *)(iVar9 + 8) != 0)))) &&
       (((iVar6 = FUN_0019c30c(*(int *)(iVar9 + 8),iVar10 + DAT_001a05d0), iVar6 != 0 ||
         (iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05d4), iVar6 != 0)) ||
        ((iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05d8), iVar6 != 0 ||
         (((((iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05dc), iVar6 != 0 ||
             (iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05e0), iVar6 != 0))
            || (iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05e4), iVar6 != 0))
           || ((iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05e8), iVar6 != 0
               || (iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05ec),
                  iVar6 != 0)))) ||
          (iVar6 = FUN_0019c30c(*(undefined4 *)(iVar9 + 8),iVar10 + DAT_001a05f0), iVar6 != 0)))))))
       ) {
      FUN_00190950(uVar11,5,iVar10 + DAT_001a05f4);
      FUN_001a02f0(uVar11,local_30);
      FUN_00190950(uVar11,1,iVar10 + DAT_001a05f8);
    }
    if (local_2c == 0) {
      if (local_34 == 0) {
        return;
      }
      FUN_00190950(uVar11,0xb,iVar10 + DAT_001a05fc);
    }
    else {
      if (local_34 != 0) {
        return;
      }
      FUN_00190950(uVar11,7,iVar10 + DAT_001a0600);
      local_34 = local_2c;
    }
    FUN_001a02f0(uVar11,local_34);
    FUN_00190950(uVar11,1,iVar10 + DAT_001a05f8);
  }
  return;
}


