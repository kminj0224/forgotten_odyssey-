/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204560  Symbol: FUN_00204560 */

void FUN_00204560(int *param_1)

{
  int iVar1;
  undefined local_110 [256];
  
  iVar1 = 0;
  do {
    local_110[iVar1] = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  (**(code **)(*param_1 + 0x1c))(param_1,local_110,&stack0xfffffff0,(void *)((int)param_1 + 0x1d));
  *(undefined *)(param_1 + 7) = 1;
  iVar1 = memcmp(local_110,(void *)((int)param_1 + 0x1d),0x100);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 7) = 2;
  }
  return;
}


