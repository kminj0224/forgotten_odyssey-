/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff9e0  Symbol: FUN_001ff9e0 */

void FUN_001ff9e0(undefined4 param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_2 + -0xc);
  if (param_3 <= uVar1) {
    uVar1 = uVar1 - param_3;
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    FUN_001ff8ac(param_1,*param_2 + param_3 * 4,uVar1,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c45d0((int)&DAT_001ffa1c + DAT_001ffa1c);
}


