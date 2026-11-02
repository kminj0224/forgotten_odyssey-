/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f9a48  Symbol: FUN_001f9a48 */

undefined4 *
FUN_001f9a48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar1 = param_8;
  iVar3 = param_7;
  iVar5 = param_7 + 0x6c;
  local_70 = param_3;
  uStack_6c = param_4;
  iVar2 = FUN_001f324c(iVar5);
  FUN_001f1db0(iVar5);
  iVar5 = *(int *)(iVar2 + 8);
  local_60 = *(undefined4 *)(iVar5 + 0x48);
  local_5c = *(undefined4 *)(iVar5 + 0x4c);
  local_58 = *(undefined4 *)(iVar5 + 0x50);
  local_54 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x54);
  local_50 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x58);
  local_4c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x5c);
  local_48 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x60);
  local_44 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x2c);
  local_40 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x30);
  local_3c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x34);
  local_38 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x38);
  local_34 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x3c);
  local_30 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x40);
  local_2c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x44);
  local_64 = 0;
  FUN_001f9554(&local_78,param_2,local_70,uStack_6c,param_5,param_6,&uStack_68,&local_60,7,iVar3,
               &local_64);
  uVar4 = param_9;
  if (local_64 != 0) {
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 4;
    uVar4 = uVar4 | 4;
    uStack_68 = local_70;
  }
  local_70 = local_78;
  uStack_6c = uStack_74;
  if (local_64 == 0) {
    *(undefined4 *)(uVar4 + 0x18) = uStack_68;
  }
  iVar3 = FUN_001f67d0(&local_70);
  iVar2 = FUN_001f67d0(&param_5);
  if (iVar3 == iVar2) {
    uVar4 = *puVar1 | 2;
  }
  *param_1 = local_70;
  param_1[1] = uStack_6c;
  if (iVar3 == iVar2) {
    *puVar1 = uVar4;
  }
  return param_1;
}


