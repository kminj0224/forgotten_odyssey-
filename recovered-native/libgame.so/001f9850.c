/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f9850  Symbol: FUN_001f9850 */

undefined4 *
FUN_001f9850(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,uint param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
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
  local_98 = param_3;
  uStack_94 = param_4;
  iVar2 = FUN_001f324c(iVar5);
  FUN_001f1db0(iVar5);
  iVar5 = *(int *)(iVar2 + 8);
  local_88 = *(undefined4 *)(iVar5 + 0x94);
  local_84 = *(undefined4 *)(iVar5 + 0x98);
  local_80 = *(undefined4 *)(iVar5 + 0x9c);
  local_7c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xa0);
  local_78 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xa4);
  local_74 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xa8);
  local_70 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xac);
  local_6c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb0);
  local_68 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb4);
  local_64 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xb8);
  local_60 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xbc);
  local_5c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc0);
  local_58 = *(undefined4 *)(*(int *)(iVar2 + 8) + 100);
  local_54 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x68);
  local_50 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x6c);
  local_4c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x70);
  local_48 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x74);
  local_44 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x78);
  local_40 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x7c);
  local_3c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x80);
  local_38 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x84);
  local_34 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x88);
  local_30 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x8c);
  local_2c = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x90);
  local_8c = 0;
  FUN_001f9554(&local_a0,param_2,local_98,uStack_94,param_5,param_6,&uStack_90,&local_88,0xc,iVar3,
               &local_8c);
  uVar4 = param_9;
  if (local_8c != 0) {
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 4;
    uVar4 = uVar4 | 4;
    uStack_90 = local_98;
  }
  local_98 = local_a0;
  uStack_94 = uStack_9c;
  if (local_8c == 0) {
    *(undefined4 *)(uVar4 + 0x10) = uStack_90;
  }
  iVar3 = FUN_001f67d0(&local_98);
  iVar2 = FUN_001f67d0(&param_5);
  if (iVar3 == iVar2) {
    uVar4 = *puVar1 | 2;
  }
  *param_1 = local_98;
  param_1[1] = uStack_94;
  if (iVar3 == iVar2) {
    *puVar1 = uVar4;
  }
  return param_1;
}


