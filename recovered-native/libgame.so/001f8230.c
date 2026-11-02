/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f8230  Symbol: FUN_001f8230 */

undefined4 *
FUN_001f8230(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,int param_8,undefined4 param_9,
            int *param_10)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_2c [2];
  
  local_38 = param_3;
  uStack_34 = param_4;
  piVar2 = (int *)FUN_001f1db0(param_8 + 0x6c);
  pvVar6 = *(void **)(DAT_001f8378 + 0x1f8268);
  local_2c[0] = (int)pvVar6 + 0xc;
  if (param_7 == '\0') {
    FUN_001f6aa8(&local_40,param_2,local_38,uStack_34,param_5,param_6,param_8,param_9,local_2c);
  }
  else {
    FUN_001f766c();
  }
  iVar5 = *(int *)(local_2c[0] + -0xc);
  local_38 = local_40;
  uStack_34 = uStack_3c;
  if (iVar5 != 0) {
    FUN_00200420(param_10,iVar5,0);
    iVar1 = local_2c[0];
    iVar3 = *param_10;
    if (-1 < *(int *)(iVar3 + -4)) {
      FUN_001fff60(param_10);
      iVar3 = *param_10;
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2,iVar1,iVar1 + iVar5,iVar3);
  }
  pvVar4 = (void *)(local_2c[0] + -0xc);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  if (pvVar4 != pvVar6) {
    iVar5 = FUN_0021100c(local_2c[0] + -4,0xffffffff);
    if (iVar5 < 1) {
      operator_delete(pvVar4);
    }
  }
  return param_1;
}


