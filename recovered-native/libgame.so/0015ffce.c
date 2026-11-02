/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ffce  Symbol: dispatchDeleteBackward */

/* cocos2d::CCIMEDispatcher::dispatchDeleteBackward() */

void __thiscall cocos2d::CCIMEDispatcher::dispatchDeleteBackward(CCIMEDispatcher *this)

{
  int *piVar1;
  
  if ((*(int *)this != 0) && (piVar1 = *(int **)(*(int *)this + 8), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x24))();
  }
  return;
}


