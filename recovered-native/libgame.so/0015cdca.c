/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cdca  Symbol: FUN_0015cdca */

void FUN_0015cdca(int *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  while (uVar2 = param_1[1], uVar2 < (uint)(param_2 + *param_1)) {
    param_1[1] = uVar2 << 1;
    pvVar1 = realloc((void *)param_1[2],uVar2 << 3);
    param_1[2] = (int)pvVar1;
  }
  return;
}


