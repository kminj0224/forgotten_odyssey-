/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204a04  Symbol: FUN_00204a04 */

int * FUN_00204a04(int *param_1)

{
  int *piVar1;
  
  *param_1 = DAT_00204a60 + 0x204a1c;
  FUN_00204964(param_1,0);
  FUN_002049bc(param_1);
  piVar1 = (int *)param_1[0x1a];
  if (piVar1 != param_1 + 9) {
    if (piVar1 != (int *)0x0) {
      operator_delete__(piVar1);
    }
    param_1[0x1a] = 0;
  }
  FUN_001c5d8c(param_1 + 0x1b);
  return param_1;
}


