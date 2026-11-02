/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5db8  Symbol: jpeg_write_marker */

void jpeg_write_marker(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  
  if ((param_1[0x41] != 0) || (2 < param_1[5] - 0x65U)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(param_1[0x65] + 0x14))(param_1,param_2,param_4);
  pcVar2 = *(code **)(param_1[0x65] + 0x18);
  if (param_4 != 0) {
    iVar3 = 0;
    do {
      puVar1 = (undefined *)(param_3 + iVar3);
      iVar3 = iVar3 + 1;
      (*pcVar2)(param_1,*puVar1);
    } while (param_4 != iVar3);
  }
  return;
}


