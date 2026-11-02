/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143838  Symbol: finalize */

/* cocos2d::CCPoolManager::finalize() */

void __thiscall cocos2d::CCPoolManager::finalize(CCPoolManager *this)

{
  CCAutoreleasePool *this_00;
  CCAutoreleasePool **ppCVar1;
  
  ppCVar1 = *(CCAutoreleasePool ***)(*(int *)this + 0x14);
  if (*(int *)(*(int *)this + 0x18) - (int)ppCVar1 >> 2 != 0) {
    while (ppCVar1 != *(CCAutoreleasePool ***)(*(int *)this + 0x18)) {
      this_00 = *ppCVar1;
      ppCVar1 = ppCVar1 + 1;
      if (this_00 == (CCAutoreleasePool *)0x0) {
        return;
      }
      CCAutoreleasePool::clear(this_00);
    }
  }
  return;
}


