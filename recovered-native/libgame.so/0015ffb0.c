/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ffb0  Symbol: dispatchInsertText */

/* cocos2d::CCIMEDispatcher::dispatchInsertText(char const*, int) */

void __thiscall
cocos2d::CCIMEDispatcher::dispatchInsertText(CCIMEDispatcher *this,char *param_1,int param_2)

{
  int *piVar1;
  
  if ((((param_1 != (char *)0x0) && (*(int *)this != 0)) && (0 < param_2)) &&
     (piVar1 = *(int **)(*(int *)this + 8), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x20))();
  }
  return;
}


