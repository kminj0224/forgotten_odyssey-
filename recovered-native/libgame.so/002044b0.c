/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002044b0  Symbol: FUN_002044b0 */

void FUN_002044b0(int *param_1)

{
  int iVar1;
  char local_119;
  undefined local_118 [256];
  
  iVar1 = 0;
  do {
    local_118[iVar1] = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  (**(code **)(*param_1 + 0x24))
            (param_1,local_118,&stack0xffffffe8,0,(void *)((int)param_1 + 0x11d));
  *(undefined *)((int)param_1 + 0x21d) = 1;
  iVar1 = memcmp(local_118,(void *)((int)param_1 + 0x11d),0x100);
  if ((iVar1 != 0) ||
     ((**(code **)(*param_1 + 0x24))(param_1,local_118,local_118 + 1,1,&local_119),
     local_119 == '\x01')) {
    *(undefined *)((int)param_1 + 0x21d) = 2;
  }
  return;
}


