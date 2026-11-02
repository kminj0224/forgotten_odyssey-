/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9c2c  Symbol: FUN_001a9c2c */

undefined4 FUN_001a9c2c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  *(undefined4 *)(*param_1 + 0x14) = 0x7b;
  iVar1 = DAT_001a9c60;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  puVar2 = (undefined *)(iVar1 + 0x1a9c4a + DAT_001a9c64);
  *puVar2 = 0xff;
  puVar2[1] = 0xd9;
  *(undefined **)param_1[6] = puVar2;
  *(undefined4 *)(param_1[6] + 4) = 2;
  return 1;
}


