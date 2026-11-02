/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143be8  Symbol: push */

/* cocos2d::CCPoolManager::push() */

void __thiscall cocos2d::CCPoolManager::push(CCPoolManager *this)

{
  CCAutoreleasePool *this_00;
  
  this_00 = (CCAutoreleasePool *)operator_new(0x18);
  CCAutoreleasePool::CCAutoreleasePool(this_00);
  *(CCAutoreleasePool **)(this + 4) = this_00;
  CCMutableArray<cocos2d::CCAutoreleasePool*>::addObject
            (*(CCMutableArray<cocos2d::CCAutoreleasePool*> **)this,this_00);
  CCObject::release((CCObject *)this_00);
  return;
}


