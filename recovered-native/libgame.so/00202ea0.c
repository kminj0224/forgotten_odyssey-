/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202ea0  Symbol: __cxa_throw */

void __cxa_throw(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = **(undefined4 **)(DAT_00202f38 + 0x202eb8);
  uVar2 = **(undefined4 **)(DAT_00202f34 + 0x202eb4);
  *(undefined4 *)(param_1 + -0x74) = param_3;
  *(undefined4 *)(param_1 + -0x80) = 1;
  *(undefined *)(param_1 + -0x58) = 0x47;
  iVar1 = DAT_00202f3c;
  *(undefined *)(param_1 + -0x57) = 0x4e;
  *(undefined *)(param_1 + -0x56) = 0x55;
  *(undefined4 *)(param_1 + -0x78) = param_2;
  *(undefined *)(param_1 + -0x55) = 0x43;
  *(undefined *)(param_1 + -0x54) = 0x43;
  *(undefined *)(param_1 + -0x53) = 0x2b;
  *(undefined *)(param_1 + -0x52) = 0x2b;
  *(undefined *)(param_1 + -0x51) = 0;
  *(int *)(param_1 + -0x50) = iVar1 + 0x202ef0;
  *(undefined4 *)(param_1 + -0x70) = uVar3;
  *(undefined4 *)(param_1 + -0x6c) = uVar2;
  ___Unwind_RaiseException(param_1 + -0x58);
  __cxa_begin_catch(param_1 + -0x58);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


