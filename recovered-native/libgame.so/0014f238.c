/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f238  Symbol: selected */

/* cocos2d::CCMenuItemToggle::selected() */

void __thiscall cocos2d::CCMenuItemToggle::selected(CCMenuItemToggle *this)

{
  int *piVar1;
  
  CCMenuItem::selected((CCMenuItem *)this);
  piVar1 = (int *)CCMutableArray<cocos2d::CCMenuItem*>::getObjectAtIndex
                            (*(CCMutableArray<cocos2d::CCMenuItem*> **)(this + 0x11c),
                             *(uint *)(this + 0x118));
  (**(code **)(*piVar1 + 0xf8))();
  return;
}


