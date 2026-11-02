/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d6b8  Symbol: FUN_0018d6b8 */

undefined4 FUN_0018d6b8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_1c [2];
  
  iVar6 = DAT_0018d840 + 0x18d6c4;
  if ((param_4 == 0) || (param_3 == 0)) {
LAB_0018d832:
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_3 + 0x20) = param_4;
    iVar4 = *(int *)(param_3 + 0x24);
    if (iVar4 != 0) {
      local_1c[0] = 0;
      pcVar3 = *(char **)(iVar4 + 0xc);
      if ((((pcVar3 == (char *)0x0) || (*pcVar3 != 'x')) || (pcVar3[1] != 'm')) ||
         ((pcVar3[2] != 'l' || (pcVar3[3] != '\0')))) {
        if (param_5 == 0) {
          local_1c[0] = FUN_0018a5c0(param_4,*(undefined4 *)(iVar4 + 8));
        }
        else {
          iVar4 = FUN_0018d468(param_4,param_5,*(undefined4 *)(iVar4 + 8),local_1c);
          if (iVar4 == -1) goto LAB_0018d832;
          if (local_1c[0] == 0) {
            local_1c[0] = FUN_0018d5cc(param_4,param_5,*(undefined4 *)(*(int *)(param_3 + 0x24) + 8)
                                       ,*(undefined4 *)(*(int *)(param_3 + 0x24) + 0xc),1);
          }
        }
      }
      else {
        local_1c[0] = FUN_00189a50(param_4);
      }
      if (local_1c[0] == 0) goto LAB_0018d832;
      *(int *)(param_3 + 0x24) = local_1c[0];
    }
    iVar4 = *(int *)(param_3 + 8);
    if (iVar4 != 0) {
      if (*(int *)(param_4 + 0x50) == 0) {
        if (((param_2 != 0) && (*(int *)(param_2 + 0x50) != 0)) &&
           (iVar6 = FUN_0019ccb4(*(int *)(param_2 + 0x50),iVar4), iVar6 != 0)) {
          uVar1 = FUN_0019c904(*(undefined4 *)(param_3 + 8));
          *(undefined4 *)(param_3 + 8) = uVar1;
        }
      }
      else {
        uVar1 = FUN_0019d178(*(int *)(param_4 + 0x50),iVar4,0xffffffff);
        *(undefined4 *)(param_3 + 8) = uVar1;
        if (((param_2 == 0) || (*(int *)(param_2 + 0x50) == 0)) ||
           (iVar2 = FUN_0019ccb4(*(int *)(param_2 + 0x50),iVar4), iVar2 == 0)) {
          (***(code ***)(iVar6 + DAT_0018d844))(iVar4);
        }
      }
    }
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x2c) = 0;
    iVar6 = *(int *)(param_3 + 0xc);
    if (*(int *)(param_3 + 0xc) != 0) {
      do {
        do {
          iVar4 = iVar6;
          uVar5 = *(uint *)(iVar4 + 4);
          *(int *)(iVar4 + 0x20) = param_4;
          if (2 < uVar5) {
            if (uVar5 < 5) {
              if (((param_2 != 0) && (*(int *)(iVar4 + 0x28) != 0)) &&
                 ((*(int *)(param_2 + 0x50) != 0 && (iVar6 = FUN_0019ccb4(), iVar6 != 0)))) {
                if (*(int *)(param_4 + 0x50) == 0) {
                  uVar1 = FUN_0019c904(*(undefined4 *)(iVar4 + 0x28));
                }
                else {
                  uVar1 = FUN_0019d178(*(int *)(param_4 + 0x50),*(undefined4 *)(iVar4 + 0x28),
                                       0xffffffff);
                }
                *(undefined4 *)(iVar4 + 0x28) = uVar1;
              }
            }
            else if (uVar5 == 5) {
              *(undefined4 *)(iVar4 + 0x28) = 0;
              *(undefined4 *)(iVar4 + 0xc) = 0;
              *(undefined4 *)(iVar4 + 0x10) = 0;
              if (((*(int *)(param_4 + 0x2c) != 0) || (*(int *)(param_4 + 0x30) != 0)) &&
                 (iVar6 = FUN_001a2628(param_4,*(undefined4 *)(iVar4 + 8)), iVar6 != 0)) {
                uVar1 = *(undefined4 *)(iVar6 + 0x28);
                *(int *)(iVar4 + 0xc) = iVar6;
                *(int *)(iVar4 + 0x10) = iVar6;
                *(undefined4 *)(iVar4 + 0x28) = uVar1;
              }
            }
          }
          iVar6 = *(int *)(iVar4 + 0xc);
        } while (*(int *)(iVar4 + 0xc) != 0);
        while( true ) {
          if (iVar4 == param_3) goto LAB_0018d838;
          iVar6 = *(int *)(iVar4 + 0x18);
          if (*(int *)(iVar4 + 0x18) != 0) break;
          iVar4 = *(int *)(iVar4 + 0x14);
        }
      } while( true );
    }
LAB_0018d838:
    uVar1 = 0;
  }
  return uVar1;
}


