/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112e0c  Symbol: KnockBackInit */

/* KnockBackInit(cocos2d::CCLayer*) */

void KnockBackInit(CCLayer *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  piVar2 = *(int **)(iVar1 + 4);
  if (((*piVar2 != 3) && (piVar2[1] != *(int *)(**(int **)(DAT_00112e5c + 0x112e26) + 0x2c))) &&
     (piVar2[1] != DAT_00112e60)) {
    *(undefined *)(piVar2 + 0x27) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa0) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa4) = 0;
    if (*(int *)(*(int *)(iVar1 + 4) + 100) != 7) {
      *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 0;
    }
    *(undefined *)(*(int *)(iVar1 + 4) + 0x4c) = 0;
  }
  return;
}


