/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ceec  Symbol: lastObject */

/* cocos2d::CCArray::lastObject() */

int __thiscall cocos2d::CCArray::lastObject(CCArray *this)

{
  int iVar1;
  
  iVar1 = **(int **)(this + 0x14);
  if (iVar1 != 0) {
    iVar1 = *(int *)((iVar1 + -1) * 4 + (*(int **)(this + 0x14))[2]);
  }
  return iVar1;
}


