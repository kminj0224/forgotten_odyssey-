/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001615f4  Symbol: resizeCapacity */

/* cocos2d::CCTextureAtlas::resizeCapacity(unsigned int) */

undefined4 __thiscall cocos2d::CCTextureAtlas::resizeCapacity(CCTextureAtlas *this,uint param_1)

{
  void *__ptr;
  void *__ptr_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 != *(uint *)(this + 0x28)) {
    uVar1 = *(uint *)(this + 0x24);
    if (param_1 < *(uint *)(this + 0x24)) {
      uVar1 = param_1;
    }
    *(uint *)(this + 0x24) = uVar1;
    *(uint *)(this + 0x28) = param_1;
    if (*(void **)(this + 0x30) == (void *)0x0) {
      __ptr = calloc(param_1 * 0x60,1);
    }
    else {
      __ptr = realloc(*(void **)(this + 0x30),param_1 * 0x60);
    }
    if (*(void **)(this + 0x14) == (void *)0x0) {
      __ptr_00 = calloc(*(int *)(this + 0x28) * 0xc,1);
    }
    else {
      __ptr_00 = realloc(*(void **)(this + 0x14),*(int *)(this + 0x28) * 0xc);
    }
    if ((__ptr_00 == (void *)0x0) || (__ptr == (void *)0x0)) {
      if (__ptr == (void *)0x0) {
        __ptr = *(void **)(this + 0x30);
      }
      free(__ptr);
      if (__ptr_00 == (void *)0x0) {
        __ptr_00 = *(void **)(this + 0x14);
      }
      uVar2 = 0;
      free(__ptr_00);
      *(undefined4 *)(this + 0x30) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x28) = 0;
    }
    else {
      *(void **)(this + 0x30) = __ptr;
      *(void **)(this + 0x14) = __ptr_00;
      glDeleteBuffers(2,this + 0x18);
      uVar2 = 1;
      glGenBuffers(2,this + 0x18);
      this[0x20] = (CCTextureAtlas)0x1;
      initIndices();
      this[0x20] = (CCTextureAtlas)0x1;
    }
  }
  return uVar2;
}


