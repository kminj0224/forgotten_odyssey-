/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d0b8  Symbol: fastRemoveObjectAtIndex */

/* cocos2d::CCArray::fastRemoveObjectAtIndex(unsigned int) */

void __thiscall cocos2d::CCArray::fastRemoveObjectAtIndex(CCArray *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x14);
  CCObject::release(*(CCObject **)(piVar2[2] + param_1 * 4));
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  *(undefined4 *)(piVar2[2] + param_1 * 4) = *(undefined4 *)((iVar1 + -1) * 4 + piVar2[2]);
  return;
}


