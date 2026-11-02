/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112d30  Symbol: StunInit */

/* StunInit(cocos2d::CCLayer*) */

void StunInit(CCLayer *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  *(undefined *)(*(int *)(iVar1 + 4) + 0x93) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x94) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x98) = 0;
  if (*(int *)(*(int *)(iVar1 + 4) + 100) != 7) {
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0;
  }
  *(undefined *)(*(int *)(iVar1 + 4) + 0x4c) = 0;
  return;
}


