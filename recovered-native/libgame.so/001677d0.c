/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001677d0  Symbol: forceRemoveAllDelegates */

/* cocos2d::CCTouchDispatcher::forceRemoveAllDelegates() */

void __thiscall cocos2d::CCTouchDispatcher::forceRemoveAllDelegates(CCTouchDispatcher *this)

{
  CCMutableArray<cocos2d::CCTouchHandler*>::removeAllObjects
            (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x1c),true);
  CCMutableArray<cocos2d::CCTouchHandler*>::removeAllObjects
            (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x18),true);
  return;
}


