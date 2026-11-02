/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163c3c  Symbol: releaseMap */

/* cocos2d::CCTMXLayer::releaseMap() */

void __thiscall cocos2d::CCTMXLayer::releaseMap(CCTMXLayer *this)

{
  undefined4 *__ptr;
  
  if (*(void **)(this + 0x120) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x120));
    *(undefined4 *)(this + 0x120) = 0;
  }
  __ptr = *(undefined4 **)(this + 0x150);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    free((void *)__ptr[2]);
    free(__ptr);
    *(undefined4 *)(this + 0x150) = 0;
  }
  return;
}


