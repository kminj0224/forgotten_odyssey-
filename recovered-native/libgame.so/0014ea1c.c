/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ea1c  Symbol: setIsEnabled */

/* cocos2d::CCMenuItemToggle::setIsEnabled(bool) */

void __thiscall cocos2d::CCMenuItemToggle::setIsEnabled(CCMenuItemToggle *this,bool param_1)

{
  int iVar1;
  int **ppiVar2;
  
  CCMenuItem::setIsEnabled((CCMenuItem *)this,param_1);
  iVar1 = *(int *)(this + 0x11c);
  if ((iVar1 != 0) &&
     (ppiVar2 = *(int ***)(iVar1 + 0x14), *(int *)(iVar1 + 0x18) - (int)ppiVar2 >> 2 != 0)) {
    for (; ppiVar2 != *(int ***)(*(int *)(this + 0x11c) + 0x18); ppiVar2 = ppiVar2 + 1) {
      (**(code **)(**ppiVar2 + 0xf0))(*ppiVar2,param_1);
    }
  }
  return;
}


