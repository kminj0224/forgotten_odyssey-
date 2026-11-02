/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195f6c  Symbol: FUN_00195f6c */

undefined4 FUN_00195f6c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == 0)) ||
     (iVar1 = FUN_00195f3c(param_1,*param_2), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
    if (*(char *)((int)param_2 + 9) == '\0') {
      uVar2 = 4;
    }
  }
  return uVar2;
}


