/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0002200c  Symbol: __gnu_unwind_frame */

void __gnu_unwind_frame(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  local_14 = *(int *)(iVar1 + 4) << 8;
  local_10 = iVar1 + 8;
  __gnu_unwind_execute(param_2,&local_14,3,*(undefined *)(iVar1 + 7),param_1);
  return;
}


