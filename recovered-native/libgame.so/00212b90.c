/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00212b90  Symbol: __gnu_Unwind_Resume */

void __gnu_Unwind_Resume(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = (**(code **)(param_1 + 0x10))(2,param_1,param_2,*(code **)(param_1 + 0x10),param_4);
    if (iVar1 == 7) {
      restore_core_regs(param_2 + 4);
    }
    else if (iVar1 != 8) goto LAB_00212bf8;
    FUN_00212290(param_1,param_2);
  }
  else {
    FUN_0021217c(param_1,param_2,1);
  }
LAB_00212bf8:
                    /* WARNING: Subroutine does not return */
  abort();
}


