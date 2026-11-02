/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001438a8  Symbol: removeObject */

/* cocos2d::CCAutoreleasePool::removeObject(cocos2d::CCObject*) */

void __thiscall cocos2d::CCAutoreleasePool::removeObject(CCAutoreleasePool *this,CCObject *param_1)

{
  CCMutableArray<cocos2d::CCObject*>::removeObject
            (*(CCMutableArray<cocos2d::CCObject*> **)(this + 0x14),param_1,false);
  return;
}


