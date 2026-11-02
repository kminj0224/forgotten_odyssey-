/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014dfd8  Symbol: selected */

/* cocos2d::CCMenuItemSprite::selected() */

void __thiscall cocos2d::CCMenuItemSprite::selected(CCMenuItemSprite *this)

{
  int *piVar1;
  
  CCMenuItem::selected((CCMenuItem *)this);
  piVar1 = *(int **)(this + 0x11c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  }
  piVar1 = *(int **)(this + 0x114);
  if (*(int *)(this + 0x118) != 0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
    piVar1 = *(int **)(this + 0x118);
  }
  (**(code **)(*piVar1 + 0x6c))(piVar1,1);
  return;
}


