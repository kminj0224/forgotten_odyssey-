/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b5848  Symbol: jinit_color_deconverter */

void jinit_color_deconverter(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x18);
  iVar5 = DAT_001b5994;
  param_1[0x77] = (int)piVar1;
  iVar5 = iVar5 + 0x1b5864;
  *piVar1 = iVar5 + DAT_001b5998;
  uVar3 = param_1[10];
  if (uVar3 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x001b58aa */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar5 + DAT_001b599c + uVar3 * 4) + iVar5 + DAT_001b599c))();
    return;
  }
  if (param_1[9] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)(param_1);
    uVar3 = param_1[10];
    uVar2 = param_1[0xb];
    if (uVar2 == 2) goto LAB_001b5906;
LAB_001b587a:
    if (uVar2 == 4) {
      param_1[0x1e] = 4;
      if (uVar3 == 5) {
        piVar1[1] = iVar5 + DAT_001b59b0;
        FUN_001b554c(param_1);
      }
      else {
        if (uVar3 != 4) goto LAB_001b588a;
        piVar1[1] = iVar5 + DAT_001b59a4;
      }
    }
    else if (uVar2 == 1) {
      param_1[0x1e] = 1;
      if ((uVar3 == 3) || (uVar3 == 1)) {
        piVar1[1] = iVar5 + DAT_001b59a0;
        if (1 < param_1[9]) {
          iVar5 = 0x58;
          iVar4 = 1;
          do {
            iVar4 = iVar4 + 1;
            *(undefined4 *)(param_1[0x36] + iVar5 + 0x34) = 0;
            iVar5 = iVar5 + 0x58;
          } while (iVar4 < param_1[9]);
          iVar5 = param_1[0x15];
          goto joined_r0x001b58e2;
        }
      }
      else {
LAB_001b588a:
        *(undefined4 *)(*param_1 + 0x14) = 0x1c;
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      if (uVar2 != uVar3) goto LAB_001b588a;
      param_1[0x1e] = param_1[9];
      piVar1[1] = iVar5 + DAT_001b59a4;
    }
  }
  else {
    uVar2 = param_1[0xb];
    if (uVar2 != 2) goto LAB_001b587a;
LAB_001b5906:
    param_1[0x1e] = 3;
    if (uVar3 != 3) {
      if (uVar3 == 1) {
        piVar1[1] = iVar5 + DAT_001b59a8;
        goto LAB_001b5898;
      }
      if (uVar3 == 2) {
        piVar1[1] = iVar5 + DAT_001b59a4;
        goto LAB_001b5898;
      }
      goto LAB_001b588a;
    }
    piVar1[1] = iVar5 + DAT_001b59ac;
    FUN_001b554c(param_1);
  }
LAB_001b5898:
  iVar5 = param_1[0x15];
joined_r0x001b58e2:
  if (iVar5 == 0) {
    param_1[0x1f] = param_1[0x1e];
  }
  else {
    param_1[0x1f] = 1;
  }
  return;
}


