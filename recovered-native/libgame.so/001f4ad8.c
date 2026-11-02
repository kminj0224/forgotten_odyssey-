/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f4ad8  Symbol: FUN_001f4ad8 */

undefined4
FUN_001f4ad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  int *piVar1;
  int iVar2;
  undefined auStack_190 [324];
  undefined *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined auStack_3c [8];
  undefined auStack_34 [4];
  undefined4 local_30;
  int local_2c [2];
  
  local_48 = param_3;
  uStack_44 = param_4;
  FUN_001c56b4(auStack_34,param_6 + 0x6c);
  piVar1 = (int *)FUN_001f1db0(auStack_34);
  local_4c = auStack_190;
  local_30 = FUN_001c5b90();
  iVar2 = FUN_001d87ac(&local_30,local_4c,0,DAT_001f4c40 + 0x1f4b48,0);
  FUN_001ff5f8(local_2c,iVar2,0,auStack_3c);
  if (-1 < *(int *)(local_2c[0] + -4)) {
    FUN_001fff60(local_2c);
  }
  (**(code **)(*piVar1 + 0x2c))(piVar1,local_4c,local_4c + iVar2,local_2c[0]);
  if (param_5 == '\0') {
    FUN_001f43ac(param_1,param_2,local_48,uStack_44,param_6,param_7,local_2c,param_10);
  }
  else {
    FUN_001f3cd0();
  }
  if (((void *)(local_2c[0] + -0xc) != *(void **)(DAT_001f4c44 + 0x1f4be0)) &&
     (iVar2 = FUN_0021100c(local_2c[0] + -4,0xffffffff), iVar2 < 1)) {
    operator_delete((void *)(local_2c[0] + -0xc));
  }
  FUN_001c5d8c(auStack_34);
  return param_1;
}


