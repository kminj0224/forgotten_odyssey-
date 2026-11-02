/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f94ac  Symbol: FUN_001f94ac */

undefined4 *
FUN_001f94ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  
  puVar1 = param_8;
  iVar3 = param_7;
  local_28 = param_3;
  uStack_24 = param_4;
  iVar2 = FUN_001f324c(param_7 + 0x6c);
  uVar4 = uStack_24;
  FUN_001f8788(&local_30,param_2,local_28,uStack_24,param_5,param_6,iVar3,puVar1,param_9,
               *(undefined4 *)(*(int *)(iVar2 + 8) + 0x10));
  local_28 = local_30;
  uStack_24 = uStack_2c;
  iVar3 = FUN_001f67d0(&local_28);
  iVar2 = FUN_001f67d0(&param_5);
  if (iVar3 == iVar2) {
    uVar4 = *puVar1 | 2;
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  if (iVar3 == iVar2) {
    *puVar1 = uVar4;
  }
  return param_1;
}


