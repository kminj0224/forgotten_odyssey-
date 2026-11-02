/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e6d4  Symbol: FUN_0015e6d4 */

void FUN_0015e6d4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_1c [2];
  
  local_1c[0] = 0;
  iVar4 = FUN_0015e668(param_1,param_2,local_1c);
  uVar1 = local_1c[0];
  if (iVar4 == 0) {
    iVar4 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar2 = local_1c[0];
  if (iVar4 == 0) {
    iVar4 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar3 = local_1c[0];
  if (iVar4 == 0) {
    iVar4 = FUN_0015e668(param_1,param_2,local_1c);
  }
  iVar5 = 0;
  if (iVar4 == 0) {
    iVar5 = (uVar3 << 0x10 | uVar2 << 8 | uVar1) + local_1c[0] * 0x1000000;
  }
  *param_3 = iVar5;
  return;
}


