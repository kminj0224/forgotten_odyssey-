/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f904  Symbol: unzCloseCurrentFile */

/* cocos2d::unzCloseCurrentFile(void*) */

undefined4 cocos2d::unzCloseCurrentFile(void *param_1)

{
  void **__ptr;
  undefined4 uVar1;
  
  if ((param_1 == (void *)0x0) || (__ptr = *(void ***)((int)param_1 + 0xe0), __ptr == (void **)0x0))
  {
    uVar1 = 0xffffff9a;
  }
  else {
    uVar1 = 0;
    if (((((uint)__ptr[0x20] | (uint)__ptr[0x21]) == 0) && (__ptr[0x32] == (void *)0x0)) &&
       (__ptr[0x1c] != __ptr[0x1d])) {
      uVar1 = 0xffffff97;
    }
    if (*__ptr != (void *)0x0) {
      free(*__ptr);
    }
    *__ptr = (void *)0x0;
    if (__ptr[0x12] == (void *)0x8) {
      inflateEnd(__ptr + 1);
    }
    __ptr[0x12] = (void *)0x0;
    free(__ptr);
    *(undefined4 *)((int)param_1 + 0xe0) = 0;
  }
  return uVar1;
}


