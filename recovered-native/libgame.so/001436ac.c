/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001436ac  Symbol: ~CCAutoreleasePool */

/* cocos2d::CCAutoreleasePool::~CCAutoreleasePool() */

CCAutoreleasePool * __thiscall
cocos2d::CCAutoreleasePool::~CCAutoreleasePool(CCAutoreleasePool *this)

{
  *(int *)this = *(int *)(DAT_001436d4 + 0x1436b6) + 8;
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 8))();
    *(undefined4 *)(this + 0x14) = 0;
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


