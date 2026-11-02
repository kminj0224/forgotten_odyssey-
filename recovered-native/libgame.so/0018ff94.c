/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ff94  Symbol: FUN_0018ff94 */

void FUN_0018ff94(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0018ffdc + 0x18ff9e;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[5] != 0) {
      FUN_001896a4();
      param_1[5] = 0;
    }
    if (param_1[3] != 0) {
      FUN_001a3260();
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(*param_1);
    }
    if (param_1[4] != 0) {
      FUN_001896a4();
      param_1[4] = 0;
    }
    (***(code ***)(iVar1 + DAT_0018ffe0))(param_1);
  }
  return;
}


