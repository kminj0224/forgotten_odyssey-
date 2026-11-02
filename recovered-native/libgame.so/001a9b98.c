/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9b98  Symbol: FUN_001a9b98 */

undefined4 FUN_001a9b98(int *param_1)

{
  size_t sVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[6];
  sVar1 = fwrite((void *)puVar2[6],1,0x1000,(FILE *)puVar2[5]);
  if (sVar1 != 0x1000) {
    *(undefined4 *)(*param_1 + 0x14) = 0x26;
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = puVar2[6];
  puVar2[1] = 0x1000;
  return 1;
}


