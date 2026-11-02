/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f3f8  Symbol: addSubItem */

/* cocos2d::CCMenuItemToggle::addSubItem(cocos2d::CCMenuItem*) */

void __thiscall cocos2d::CCMenuItemToggle::addSubItem(CCMenuItemToggle *this,CCMenuItem *param_1)

{
  CCMutableArray<cocos2d::CCMenuItem*>::addObject
            (*(CCMutableArray<cocos2d::CCMenuItem*> **)(this + 0x11c),param_1);
  return;
}


