/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bab54  Symbol: ani_remove_data */

/* ani_remove_data(cocos2d::CCSprite*) */

void ani_remove_data(CCSprite *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (iVar1 != 0) {
    pvVar2 = (void *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    operator_delete(*(void **)((int)pvVar2 + 4));
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    operator_delete(pvVar2);
    (**(code **)(*(int *)param_1 + 0xac))(param_1,0);
  }
  return;
}


