/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e73a  Symbol: FUN_0015e73a */

void FUN_0015e73a(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_40;
  uint local_3c;
  uint local_1c [2];
  
  local_1c[0] = 0;
  iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  uVar1 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar2 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar3 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar4 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar5 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar6 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  uVar7 = local_1c[0];
  if (iVar8 == 0) {
    iVar8 = FUN_0015e668(param_1,param_2,local_1c);
  }
  local_40 = 0;
  local_3c = 0;
  if (iVar8 == 0) {
    local_40 = uVar2 << 8 | uVar3 << 0x10 | uVar1 | uVar4 << 0x18;
    local_3c = ((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10 |
               ((int)uVar2 >> 0x1f) << 8 | uVar2 >> 0x18 | (int)uVar1 >> 0x1f |
               ((int)uVar4 >> 0x1f) << 0x18 | uVar4 >> 8 | uVar5 | uVar6 << 8 | uVar7 << 0x10 |
               local_1c[0] << 0x18;
  }
  *param_3 = local_40;
  param_3[1] = local_3c;
  return;
}


