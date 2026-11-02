/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195ba4  Symbol: FUN_00195ba4 */

void FUN_00195ba4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xac) == -1)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = param_2;
  }
  FUN_001a5374(0,0,0,param_1,0,5,param_2,2,0,0,param_4,param_5,0,0,0,param_3,param_4,param_5);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


