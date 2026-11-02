/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157c50  Symbol: Java_org_cocos2dx_lib_Cocos2dxBitmap_nativeInitBitmapDC */

void Java_org_cocos2dx_lib_Cocos2dxBitmap_nativeInitBitmapDC
               (int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint *local_28;
  int local_24;
  
  puVar1 = (uint *)FUN_001571b8();
  *puVar1 = param_3;
  iVar2 = FUN_001571b8();
  uVar4 = param_3 * param_4 * 4;
  *(int *)(iVar2 + 4) = param_4;
  iVar2 = FUN_001571b8();
  pvVar3 = operator_new__(uVar4);
  *(void **)(iVar2 + 8) = pvVar3;
  iVar2 = FUN_001571b8();
  (**(code **)(*param_1 + 800))(param_1,param_5,0,uVar4,*(undefined4 *)(iVar2 + 8));
  iVar2 = FUN_001571b8();
  local_28 = *(uint **)(iVar2 + 8);
  for (local_24 = 0; local_24 < param_4; local_24 = local_24 + 1) {
    puVar1 = local_28;
    for (iVar2 = 0; iVar2 < (int)param_3; iVar2 = iVar2 + 1) {
      uVar4 = *puVar1;
      FUN_001571b8();
      *puVar1 = uVar4 >> 0x18 | uVar4 << 8;
      puVar1 = puVar1 + 1;
    }
    local_28 = local_28 + ((int)~param_3 >> 0x1f & param_3);
  }
  return;
}


