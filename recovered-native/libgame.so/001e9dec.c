/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e9dec  Symbol: FUN_001e9dec */

int * FUN_001e9dec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x18))(), iVar2 == -1)) {
    iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
    FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 1,param_3,*param_1,param_4);
  }
  return param_1;
}


