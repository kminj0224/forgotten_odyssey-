/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019de30  Symbol: FUN_0019de30 */

void FUN_0019de30(int param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = DAT_0019df94 + 0x19de3c;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 0x10);
  if (iVar6 == 0) {
    iVar6 = FUN_0019dcc4();
    iVar2 = DAT_0019dfac;
    if (iVar6 == 0) goto LAB_0019ded4;
    *(int *)(*(int *)(param_1 + 0x34) + 0xc) = iVar6;
    *(int *)(*(int *)(param_1 + 0x34) + 0x10) = iVar6;
    *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x20);
  }
  else {
    if ((*(int *)(iVar6 + 4) == 3) && (*(int *)(iVar6 + 8) == *(int *)(iVar7 + DAT_0019df98))) {
      if (*(int *)(param_1 + 0x108) == 0) {
        iVar2 = FUN_0018ad08(iVar6,param_2,param_3);
        if (iVar2 != 0) {
          FUN_0019d7d4(param_1,iVar7 + DAT_0019dfac);
        }
        if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) == 0) {
          return;
        }
        iVar7 = FUN_0019c49c(*(undefined4 *)(iVar6 + 0x28));
        *(int *)(param_1 + 0x104) = iVar7;
        *(int *)(param_1 + 0x108) = iVar7 + 1;
        return;
      }
      if (*(int *)(iVar6 + 0x28) == iVar6 + 0x2c) {
        uVar1 = FUN_0019c904(*(int *)(iVar6 + 0x28));
        *(undefined4 *)(iVar6 + 0x28) = uVar1;
        *(undefined4 *)(iVar6 + 0x2c) = 0;
      }
      else if ((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x104) + 1) &&
              (iVar2 = FUN_0019ccb4(*(undefined4 *)(param_1 + 0x128)), iVar2 != 0)) {
        uVar1 = FUN_0019c904(*(undefined4 *)(iVar6 + 0x28));
        *(undefined4 *)(iVar6 + 0x28) = uVar1;
      }
      uVar5 = *(uint *)(param_1 + 0x104);
      if (((param_3 + uVar5 <= DAT_0019df9c) ||
          (iVar2 = DAT_0019dfa0, *(int *)(param_1 + 0x168) << 0xc < 0)) &&
         (iVar2 = DAT_0019dfa4, uVar5 <= ~param_3)) {
        iVar4 = param_3 + *(int *)(param_1 + 0x108);
        if (-1 < iVar4) {
          if (*(int *)(param_1 + 0x108) <= (int)(param_3 + uVar5)) {
            iVar3 = (***(code ***)(iVar7 + DAT_0019dfa8))(*(undefined4 *)(iVar6 + 0x28));
            iVar2 = DAT_0019dfac;
            if (iVar3 == 0) goto LAB_0019ded4;
            *(int *)(param_1 + 0x108) = iVar4 * 2;
            *(int *)(iVar6 + 0x28) = iVar3;
          }
          memcpy((void *)(*(int *)(iVar6 + 0x28) + *(int *)(param_1 + 0x104)),param_2,param_3);
          iVar7 = param_3 + *(int *)(param_1 + 0x104);
          *(int *)(param_1 + 0x104) = iVar7;
          *(undefined *)(*(int *)(iVar6 + 0x28) + iVar7) = 0;
          return;
        }
      }
LAB_0019ded4:
      FUN_0019d7d4(param_1,iVar7 + iVar2);
      return;
    }
    iVar7 = FUN_0019dcc4(param_1,param_2,param_3);
    if (iVar7 == 0) {
      return;
    }
    FUN_0018c194(*(undefined4 *)(param_1 + 0x34),iVar7);
    if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) == 0) {
      return;
    }
  }
  *(uint *)(param_1 + 0x104) = param_3;
  *(uint *)(param_1 + 0x108) = param_3 + 1;
  return;
}


