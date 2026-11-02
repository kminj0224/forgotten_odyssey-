/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143aa8  Symbol: addObject */

/* cocos2d::CCAutoreleasePool::addObject(cocos2d::CCObject*) */

void __thiscall cocos2d::CCAutoreleasePool::addObject(CCAutoreleasePool *this,CCObject *param_1)

{
  CCMutableArray<cocos2d::CCObject*>::addObject
            (*(CCMutableArray<cocos2d::CCObject*> **)(this + 0x14),param_1);
  CCObject::release(param_1);
  return;
}


