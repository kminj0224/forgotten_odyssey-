/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000beebe  Symbol: ani_remove */

/* ani_remove(_Unit_Stage*, int) */

undefined8 ani_remove(_Unit_Stage *param_1,int param_2)

{
  CCObject *this;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  
  local_1c = param_2;
  if (((param_1 != (_Unit_Stage *)0x0) && (*(int *)param_1 != 0)) &&
     (iVar4 = param_2 * 4, *(int *)(iVar4 + *(int *)param_1) != 0)) {
    iVar3 = 0;
    do {
      local_1c = iVar3 * 4;
      pvVar1 = *(void **)(local_1c + *(int *)(iVar4 + *(int *)param_1));
      if (pvVar1 != (void *)0x0) {
        FUN_001ed6b8(pvVar1);
        operator_delete(pvVar1);
        *(undefined4 *)(local_1c + *(int *)(iVar4 + *(int *)param_1)) = 0;
      }
      iVar2 = (iVar3 + 0x50) * 4;
      this = *(CCObject **)(iVar2 + *(int *)(iVar4 + *(int *)param_1));
      if (this != (CCObject *)0x0) {
        cocos2d::CCObject::release(this);
        *(undefined4 *)(iVar2 + *(int *)(iVar4 + *(int *)param_1)) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x50);
    operator_delete(*(void **)(param_2 * 4 + *(int *)param_1));
    *(undefined4 *)(param_2 * 4 + *(int *)param_1) = 0;
  }
  return CONCAT44(local_1c,param_2);
}


