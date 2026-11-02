/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018e638  Symbol: FUN_0018e638 */

undefined4
FUN_0018e638(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = DAT_0018e834 + 0x18e644;
  if (((param_4 != 0) && (param_3 != 0)) &&
     ((param_5 == 0 || (*(int *)(param_5 + 0x20) == param_4)))) {
    iVar5 = *(int *)(param_3 + 0x20);
    if (param_2 != 0) {
      if ((iVar5 != 0) && (iVar5 != param_2)) {
        return 0xffffffff;
      }
      if (param_2 != 0) {
        iVar5 = param_2;
      }
    }
    if (iVar5 != param_4) {
      if (*(uint *)(param_3 + 4) < 0xc) {
        uVar3 = 1 << (*(uint *)(param_3 + 4) & 0xff);
        if ((uVar3 & 0x1be) != 0) {
          if ((*(int *)(param_3 + 0x14) != 0) && (param_5 != *(int *)(param_3 + 0x14))) {
            FUN_0018b26c(param_3);
          }
          if (*(int *)(param_3 + 4) == 1) {
            uVar1 = FUN_0018e1b8(param_1,iVar5,param_3,param_4,param_5,param_6);
            return uVar1;
          }
          if (*(int *)(param_3 + 4) == 2) {
            uVar1 = FUN_0018d6b8(param_1,iVar5,param_3,param_4,param_5,param_6);
            return uVar1;
          }
          *(int *)(param_3 + 0x20) = param_4;
          bVar7 = true;
          if (iVar5 != 0) {
            bVar7 = *(int *)(iVar5 + 0x50) != *(int *)(param_4 + 0x50);
          }
          uVar3 = *(uint *)(param_3 + 4);
          if (uVar3 == 5) {
            *(undefined4 *)(param_3 + 0x28) = 0;
            *(undefined4 *)(param_3 + 0xc) = 0;
            *(undefined4 *)(param_3 + 0x10) = 0;
            if (((*(int *)(param_4 + 0x2c) != 0) || (*(int *)(param_4 + 0x30) != 0)) &&
               (iVar6 = FUN_001a2628(param_4,*(undefined4 *)(param_3 + 8)), iVar6 != 0)) {
              uVar1 = *(undefined4 *)(iVar6 + 0x28);
              *(int *)(param_3 + 0xc) = iVar6;
              *(int *)(param_3 + 0x10) = iVar6;
              *(undefined4 *)(param_3 + 0x28) = uVar1;
            }
            if ((bVar7) && (iVar6 = *(int *)(param_3 + 8), iVar6 != 0)) {
              if (*(int *)(param_4 + 0x50) == 0) {
                if (((iVar5 != 0) && (*(int *)(iVar5 + 0x50) != 0)) &&
                   (iVar4 = FUN_0019ccb4(*(int *)(iVar5 + 0x50),iVar6), iVar4 != 0)) {
                  uVar1 = FUN_0019c904(*(undefined4 *)(param_3 + 8));
                  *(undefined4 *)(param_3 + 8) = uVar1;
                }
              }
              else {
                uVar1 = FUN_0019d178(*(int *)(param_4 + 0x50),iVar6,0xffffffff);
                *(undefined4 *)(param_3 + 8) = uVar1;
                if (((iVar5 == 0) || (*(int *)(iVar5 + 0x50) == 0)) ||
                   (iVar5 = FUN_0019ccb4(*(int *)(iVar5 + 0x50),iVar6), iVar5 == 0)) {
                  (***(code ***)(iVar4 + DAT_0018e838))(iVar6);
                }
              }
            }
          }
          else {
            if (uVar3 < 6) {
              if (uVar3 < 3) {
                return 0;
              }
              if (!bVar7) {
                return 0;
              }
            }
            else {
              if (uVar3 != 7) {
                return 0;
              }
              if (!bVar7) {
                return 0;
              }
              iVar6 = *(int *)(param_3 + 8);
              if (iVar6 != 0) {
                if (*(int *)(param_4 + 0x50) == 0) {
                  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x50) != 0)) &&
                     (iVar4 = FUN_0019ccb4(*(int *)(iVar5 + 0x50),iVar6), iVar4 != 0)) {
                    uVar1 = FUN_0019c904(*(undefined4 *)(param_3 + 8));
                    *(undefined4 *)(param_3 + 8) = uVar1;
                  }
                }
                else {
                  uVar1 = FUN_0019d178(*(int *)(param_4 + 0x50),iVar6,0xffffffff);
                  *(undefined4 *)(param_3 + 8) = uVar1;
                  if (((iVar5 == 0) || (*(int *)(iVar5 + 0x50) == 0)) ||
                     (iVar2 = FUN_0019ccb4(*(int *)(iVar5 + 0x50),iVar6), iVar2 == 0)) {
                    (***(code ***)(iVar4 + DAT_0018e838))(iVar6);
                  }
                }
              }
            }
            if ((((iVar5 != 0) && (*(int *)(param_3 + 0x28) != 0)) && (*(int *)(iVar5 + 0x50) != 0))
               && (iVar4 = FUN_0019ccb4(), iVar4 != 0)) {
              if (*(int *)(param_4 + 0x50) == 0) {
                uVar1 = FUN_0019c904(*(undefined4 *)(param_3 + 0x28));
              }
              else {
                uVar1 = FUN_0019d178(*(int *)(param_4 + 0x50),*(undefined4 *)(param_3 + 0x28),
                                     0xffffffff);
              }
              *(undefined4 *)(param_3 + 0x28) = uVar1;
            }
          }
          return 0;
        }
        if ((int)(uVar3 << 0x14) < 0) {
          return 2;
        }
      }
      return 1;
    }
  }
  return 0xffffffff;
}


