/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d09c  Symbol: removeAllObjects */

/* cocos2d::CCArray::removeAllObjects() */

void __thiscall cocos2d::CCArray::removeAllObjects(CCArray *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x14);
  while (*piVar2 != 0) {
    iVar1 = *piVar2 + -1;
    *piVar2 = iVar1;
    CCObject::release(*(CCObject **)(iVar1 * 4 + piVar2[2]));
  }
  return;
}


