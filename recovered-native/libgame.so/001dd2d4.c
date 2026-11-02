/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dd2d4  Symbol: FUN_001dd2d4 */

undefined4
FUN_001dd2d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,int param_6,byte param_7)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined auStack_190 [320];
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined auStack_3c [8];
  undefined auStack_34 [4];
  undefined4 local_30;
  void *local_2c [2];
  
  local_50 = (uint)param_7;
  local_4c = param_2;
  local_48 = param_3;
  uStack_44 = param_4;
  FUN_001c56b4(auStack_34,param_6 + 0x6c);
  piVar2 = (int *)FUN_001da5b8(auStack_34);
  local_30 = FUN_001c5b90();
  iVar3 = FUN_001d87ac(&local_30,auStack_190,0,DAT_001dd47c + 0x1dd348,0);
  FUN_001ed624(local_2c,iVar3,0,auStack_3c);
  if (-1 < *(int *)((int)local_2c[0] + -4)) {
    FUN_001edf6c(local_2c);
  }
  pvVar1 = local_2c[0];
  puVar4 = auStack_190 + iVar3;
  if (*(char *)(piVar2 + 7) == '\x01') {
    memcpy(local_2c[0],auStack_190,(int)puVar4 - (int)auStack_190);
  }
  else {
    if (*(char *)(piVar2 + 7) == '\0') {
      FUN_00204560(piVar2);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2,auStack_190,puVar4,pvVar1);
  }
  if (param_5 == '\0') {
    FUN_001dcc2c(param_1,local_4c,local_48,uStack_44,param_6,local_50,local_2c);
  }
  else {
    FUN_001dc5d4();
  }
  if (((void *)((int)local_2c[0] + -0xc) != *(void **)(DAT_001dd480 + 0x1dd3fc)) &&
     (iVar3 = FUN_0021100c((int)local_2c[0] + -4,0xffffffff), iVar3 < 1)) {
    operator_delete((void *)((int)local_2c[0] + -0xc));
  }
  FUN_001c5d8c(auStack_34);
  return param_1;
}


