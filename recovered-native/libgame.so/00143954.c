/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143954  Symbol: ~CCPoolManager */

/* cocos2d::CCPoolManager::~CCPoolManager() */

CCPoolManager * __thiscall cocos2d::CCPoolManager::~CCPoolManager(CCPoolManager *this)

{
  finalize(this);
  *(undefined4 *)(this + 4) = 0;
  CCMutableArray<cocos2d::CCAutoreleasePool*>::removeObjectAtIndex
            (*(CCMutableArray<cocos2d::CCAutoreleasePool*> **)this,0,true);
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 8))();
    *(undefined4 *)this = 0;
  }
  return this;
}


