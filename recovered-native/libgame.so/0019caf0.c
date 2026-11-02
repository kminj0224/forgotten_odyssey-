/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019caf0  Symbol: FUN_0019caf0 */

undefined4 FUN_0019caf0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_0019c4b4();
    uVar1 = FUN_0019ca64(param_1,param_2,uVar1);
  }
  return uVar1;
}


