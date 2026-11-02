/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e6a2  Symbol: FUN_0015e6a2 */

void FUN_0015e6a2(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_1c;
  uint *puStack_18;
  
  local_1c = 0;
  puStack_18 = param_3;
  iVar2 = FUN_0015e668(param_1,param_2,&local_1c,0,param_1);
  uVar1 = local_1c;
  if (iVar2 == 0) {
    iVar2 = FUN_0015e668(param_1,param_2,&local_1c);
  }
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = local_1c << 8 | uVar1;
  }
  *param_3 = uVar3;
  return;
}


