/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001615be  Symbol: removeQuadAtIndex */

/* cocos2d::CCTextureAtlas::removeQuadAtIndex(unsigned int) */

void __thiscall cocos2d::CCTextureAtlas::removeQuadAtIndex(CCTextureAtlas *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 0x24) + -1) - param_1;
  if (iVar1 != 0) {
    memmove((void *)(*(int *)(this + 0x30) + param_1 * 0x60),
            (void *)(*(int *)(this + 0x30) + (param_1 + 1) * 0x60),iVar1 * 0x60);
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  this[0x20] = (CCTextureAtlas)0x1;
  return;
}


