/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ced68  Symbol: FUN_001ced68 */

int * FUN_001ced68(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int iStack_24;
  
  piVar2 = param_1 + 9;
  iVar1 = FUN_00207ebc(piVar2);
  if (iVar1 == 0) {
    FUN_00207e64(piVar2,param_2,param_3,0x1b4);
    piVar2 = (int *)FUN_00207ebc(piVar2);
    if (piVar2 != (int *)0x0) {
      FUN_001cdfe8(param_1);
      iVar1 = param_1[0xf];
      param_1[0xb] = param_3;
      *(undefined *)((int)param_1 + 0x45) = 0;
      *(undefined *)((int)param_1 + 0x46) = 0;
      param_1[1] = iVar1;
      param_1[2] = iVar1;
      param_1[3] = iVar1;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      param_1[0xd] = param_1[0xc];
      param_1[0xe] = param_1[0xc];
      piVar2 = param_1;
      if (((param_3 & 2) != 0) &&
         ((**(code **)(*param_1 + 0x10))(&local_28,param_1,0,0,2,param_3),
         iStack_24 == -1 && local_28 == -1)) {
        FUN_001cec0c(param_1);
        piVar2 = (int *)0x0;
      }
    }
  }
  else {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


