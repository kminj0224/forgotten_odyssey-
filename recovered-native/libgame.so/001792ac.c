/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001792ac  Symbol: FUN_001792ac */

int * FUN_001792ac(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if ((((param_2 == 0) || (param_1 == 0)) ||
      (uVar1 = FUN_00179254(param_1 + 0x48), *(uint *)(param_1 + 0x4c) <= uVar1)) ||
     (piVar2 = (int *)(*(int *)(param_1 + 0x50) + uVar1 * 0x14), *piVar2 != param_2)) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


