/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab410  Symbol: jpeg_save_markers */

void jpeg_save_markers(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[0x73];
  iVar1 = DAT_001ab4a0 + 0x1ab422;
  uVar2 = *(int *)(param_1[1] + 0x30) - 0x14;
  if ((int)uVar2 < (int)param_3) {
    param_3 = uVar2;
  }
  if (param_3 == 0) {
    iVar3 = DAT_001ab4ac;
    if ((param_2 != 0xee) && (param_2 != 0xe0)) {
      iVar3 = DAT_001ab4a8;
    }
    iVar1 = iVar1 + iVar3;
joined_r0x001ab454:
    if (param_2 == 0xfe) {
      *(int *)(iVar4 + 0x1c) = iVar1;
      *(uint *)(iVar4 + 0x60) = param_3;
      return;
    }
  }
  else {
    if ((param_3 < 0xe) && (param_2 == 0xe0)) {
      param_3 = 0xe;
    }
    else {
      if ((0xb < param_3) || (param_2 != 0xee)) {
        iVar1 = iVar1 + DAT_001ab4a4;
        goto joined_r0x001ab454;
      }
      param_3 = 0xc;
    }
    iVar1 = iVar1 + DAT_001ab4a4;
  }
  if (param_2 - 0xe0U < 0x10) {
    *(int *)((param_2 + -0xd8) * 4 + iVar4) = iVar1;
    *(uint *)(iVar4 + (param_2 + -200) * 4 + 4) = param_3;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  return;
}


