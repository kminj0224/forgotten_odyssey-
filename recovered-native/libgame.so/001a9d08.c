/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9d08  Symbol: jpeg_mem_src */

void jpeg_mem_src(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = DAT_001a9d68 + 0x1a9d14;
  if ((param_3 == 0) || (param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2b;
    (**(code **)*param_1)(param_1);
    piVar2 = (int *)param_1[6];
  }
  else {
    piVar2 = (int *)param_1[6];
  }
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)param_1[1])(param_1,0,0x1c,*(code **)param_1[1],param_4);
    param_1[6] = (int)piVar2;
  }
  iVar1 = DAT_001a9d6c;
  piVar2[1] = param_3;
  *piVar2 = param_2;
  piVar2[2] = iVar3 + iVar1;
  piVar2[3] = iVar3 + DAT_001a9d70;
  piVar2[4] = iVar3 + DAT_001a9d74;
  piVar2[5] = *(int *)(iVar3 + DAT_001a9d78);
  piVar2[6] = iVar3 + DAT_001a9d7c;
  return;
}


