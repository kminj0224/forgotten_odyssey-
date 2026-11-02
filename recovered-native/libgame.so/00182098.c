/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182098  Symbol: FUN_00182098 */

undefined4 FUN_00182098(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x38);
  *param_3 = 0;
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '(') {
    FUN_0017a4a4(param_1);
    if (*(int *)(param_1 + 0x124) == 0) {
      if (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa) {
        FUN_0017c738(param_1);
      }
    }
    FUN_0017ff44(param_1);
    pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((((*pcVar2 == '#') && (pcVar2[1] == 'P')) && (pcVar2[2] == 'C')) &&
       (((pcVar2[3] == 'D' && (pcVar2[4] == 'A')) && ((pcVar2[5] == 'T' && (pcVar2[6] == 'A')))))) {
      uVar1 = FUN_00181dd8(param_1,uVar3);
      uVar3 = 3;
    }
    else {
      uVar1 = FUN_00180018(param_1,uVar3);
      uVar3 = 4;
    }
    FUN_0017ff44(param_1);
    *param_3 = uVar1;
  }
  else {
    FUN_0017b798(param_1,0x36,DAT_00182148 + 0x1820b2 + DAT_0018214c,param_2,param_4);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


