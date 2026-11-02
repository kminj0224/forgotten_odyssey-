/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f21c  Symbol: unselected */

/* cocos2d::CCMenuItemToggle::unselected() */

void __thiscall cocos2d::CCMenuItemToggle::unselected(CCMenuItemToggle *this)

{
  int *piVar1;
  
  CCMenuItem::unselected((CCMenuItem *)this);
  piVar1 = (int *)CCMutableArray<cocos2d::CCMenuItem*>::getObjectAtIndex
                            (*(CCMutableArray<cocos2d::CCMenuItem*> **)(this + 0x11c),
                             *(uint *)(this + 0x118));
  (**(code **)(*piVar1 + 0xfc))();
  return;
}


