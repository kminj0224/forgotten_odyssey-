/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d0d6  Symbol: fastRemoveObject */

/* cocos2d::CCArray::fastRemoveObject(cocos2d::CCObject*) */

void cocos2d::CCArray::fastRemoveObject(CCObject *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x14);
  iVar1 = FUN_0015cd3c(piVar3);
  if (iVar1 != -1) {
    CCObject::release(*(CCObject **)(piVar3[2] + iVar1 * 4));
    iVar2 = *piVar3;
    *piVar3 = iVar2 + -1;
    *(undefined4 *)(piVar3[2] + iVar1 * 4) = *(undefined4 *)((iVar2 + -1) * 4 + piVar3[2]);
  }
  return;
}


