/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017abb4  Symbol: FUN_0017abb4 */

undefined * FUN_0017abb4(undefined4 param_1,undefined *param_2,int param_3)

{
  if (param_2 != (undefined *)0x0) {
    if (param_3 < 0x80) {
      *param_2 = (char)param_3;
      param_2 = (undefined *)0x1;
    }
    else {
      param_2 = (undefined *)FUN_0017ab20(param_2,param_3);
    }
  }
  return param_2;
}


