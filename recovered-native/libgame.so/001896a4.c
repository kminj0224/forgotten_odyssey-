/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001896a4  Symbol: FUN_001896a4 */

void FUN_001896a4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001896dc + 0x1896ae;
  if (param_1 != (int *)0x0) {
    if (((param_1[3] == 3) && (param_1[4] != 0)) || ((*param_1 != 0 && (param_1[3] != 2)))) {
      (***(code ***)(iVar1 + DAT_001896e0))();
    }
    (***(code ***)(iVar1 + DAT_001896e0))(param_1);
  }
  return;
}


