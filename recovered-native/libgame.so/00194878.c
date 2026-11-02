/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194878  Symbol: FUN_00194878 */

undefined4 * FUN_00194878(int param_1,undefined4 *param_2)

{
  undefined4 *__s;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *__s_00;
  code **ppcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_20;
  
  iVar2 = DAT_001949b4 + 0x194884;
  __s_00 = (undefined4 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    iVar6 = 0;
    if (param_1 != 0) {
      iVar6 = *(int *)(param_1 + 0x50);
    }
    __s_00 = (undefined4 *)(***(code ***)(iVar2 + DAT_001949b8))(0x1c);
    if (__s_00 == (undefined4 *)0x0) {
LAB_00194930:
      FUN_00194208(0,iVar2 + DAT_001949bc);
    }
    else {
      memset(__s_00,0,0x1c);
      uVar3 = param_2[1];
      iVar1 = param_2[2];
      *__s_00 = *param_2;
      __s_00[1] = uVar3;
      if (iVar1 != 0) {
        if (iVar6 == 0) {
          uVar3 = FUN_0019c904(iVar1);
        }
        else {
          uVar3 = FUN_0019d178(iVar6,iVar1,0xffffffff);
        }
        __s_00[2] = uVar3;
      }
      iVar1 = param_2[6];
      if (iVar1 != 0) {
        if (iVar6 == 0) {
          uVar3 = FUN_0019c904(iVar1);
        }
        else {
          uVar3 = FUN_0019d178(iVar6,iVar1,0xffffffff);
        }
        __s_00[6] = uVar3;
      }
      if (param_2[3] != 0) {
        uVar3 = FUN_00194878(param_1);
        __s_00[3] = uVar3;
      }
      if (__s_00[3] != 0) {
        *(undefined4 **)(__s_00[3] + 0x14) = __s_00;
      }
      puVar5 = (undefined4 *)param_2[4];
      if (puVar5 != (undefined4 *)0x0) {
        ppcVar4 = *(code ***)(iVar2 + DAT_001949b8);
        local_20 = __s_00;
        do {
          __s = (undefined4 *)(**ppcVar4)(0x1c);
          if (__s == (undefined4 *)0x0) goto LAB_00194930;
          memset(__s,0,0x1c);
          uVar3 = *puVar5;
          __s[1] = puVar5[1];
          *__s = uVar3;
          iVar1 = puVar5[2];
          local_20[4] = __s;
          if (iVar1 != 0) {
            if (iVar6 == 0) {
              uVar3 = FUN_0019c904(iVar1);
            }
            else {
              uVar3 = FUN_0019d178(iVar6,iVar1,0xffffffff);
            }
            __s[2] = uVar3;
          }
          iVar1 = puVar5[6];
          if (iVar1 != 0) {
            if (iVar6 == 0) {
              uVar3 = FUN_0019c904(iVar1);
            }
            else {
              uVar3 = FUN_0019d178(iVar6,iVar1,0xffffffff);
            }
            __s[6] = uVar3;
          }
          if (puVar5[3] != 0) {
            uVar3 = FUN_00194878(param_1);
            __s[3] = uVar3;
          }
          if (__s[3] != 0) {
            *(undefined4 **)(__s[3] + 0x14) = __s_00;
          }
          puVar5 = (undefined4 *)puVar5[4];
          local_20 = __s;
        } while (puVar5 != (undefined4 *)0x0);
      }
    }
  }
  return __s_00;
}


