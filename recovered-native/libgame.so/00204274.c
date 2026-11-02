/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204274  Symbol: FUN_00204274 */

int * FUN_00204274(int *param_1)

{
  *param_1 = DAT_002042c8 + 0x20428c;
  FUN_001c9708(param_1 + 2);
  if ((*(char *)(param_1 + 3) != '\0') && ((void *)param_1[6] != (void *)0x0)) {
    operator_delete__((void *)param_1[6]);
  }
  FUN_001c55c4(param_1);
  return param_1;
}


