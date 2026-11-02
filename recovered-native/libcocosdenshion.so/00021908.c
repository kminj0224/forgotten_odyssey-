/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00021908  Symbol: __gnu_Unwind_Resume */

void __gnu_Unwind_Resume(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = (**(code **)(param_1 + 0x10))(2,param_1,param_2,*(code **)(param_1 + 0x10),param_4);
    if (iVar1 == 7) {
      restore_core_regs(param_2 + 4);
    }
    else if (iVar1 != 8) goto LAB_00021970;
    FUN_00021008(param_1,param_2);
  }
  else {
    FUN_00020ef4(param_1,param_2,1);
  }
LAB_00021970:
                    /* WARNING: Subroutine does not return */
  abort();
}


