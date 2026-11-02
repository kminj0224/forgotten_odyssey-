/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9a0c  Symbol: FUN_001a9a0c */

void FUN_001a9a0c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  uVar1 = (***(code ***)(param_1 + 4))(param_1,1,0x1000);
  puVar2[6] = uVar1;
  *puVar2 = uVar1;
  puVar2[1] = 0x1000;
  return;
}


