/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e7508  Symbol: FUN_001e7508 */

void FUN_001e7508(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x20));
  if ((int)sVar1 < 1) {
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x24) = (uint)*(byte *)((int)param_2 + (sVar1 - 1));
  }
  return;
}


