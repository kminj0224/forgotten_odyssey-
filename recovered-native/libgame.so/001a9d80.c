/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9d80  Symbol: FUN_001a9d80 */

undefined4 FUN_001a9d80(int *param_1)

{
  size_t sVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[6];
  sVar1 = fread((void *)puVar2[8],1,0x1000,(FILE *)puVar2[7]);
  if (sVar1 == 0) {
    if (puVar2[9] != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2b;
      (**(code **)*param_1)(param_1);
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    sVar1 = 2;
    *(undefined *)puVar2[8] = 0xff;
    *(undefined *)(puVar2[8] + 1) = 0xd9;
  }
  puVar2[1] = sVar1;
  *puVar2 = puVar2[8];
  puVar2[9] = 0;
  return 1;
}


