/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b223c  Symbol: FUN_001b223c */

void FUN_001b223c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x78) + 0x18);
  iVar1 = (*(code *)puVar2[3])();
  if (iVar1 == 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x78) + 0x14) = 0x19;
    (**(code **)**(undefined4 **)(param_1 + 0x78))();
  }
  *(undefined4 *)(param_1 + 0x70) = *puVar2;
  *(undefined4 *)(param_1 + 0x74) = puVar2[1];
  return;
}


