/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001df230  Symbol: FUN_001df230 */

undefined4 *
FUN_001df230(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  
  puVar1 = param_8;
  iVar2 = param_7;
  local_30 = param_3;
  uStack_2c = param_4;
  FUN_001da5b8(param_7 + 0x6c);
  local_24 = 0;
  FUN_001df09c(&local_38,param_2,local_30,uStack_2c,param_5,param_6,&local_28,0,DAT_001df320,4,iVar2
               ,&local_24);
  local_30 = local_38;
  uStack_2c = uStack_34;
  if (local_24 == 0) {
    if (local_28 < 0) {
      uVar4 = local_28 + 100;
    }
    else {
      uVar4 = local_28 - 0x76c;
    }
    *(uint *)(param_9 + 0x14) = uVar4;
  }
  else {
    uVar4 = *puVar1 | 4;
    *puVar1 = uVar4;
  }
  iVar2 = FUN_001df02c(&local_30);
  iVar3 = FUN_001df02c(&param_5);
  if (iVar2 == iVar3) {
    uVar4 = *puVar1 | 2;
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  if (iVar2 == iVar3) {
    *puVar1 = uVar4;
  }
  return param_1;
}


