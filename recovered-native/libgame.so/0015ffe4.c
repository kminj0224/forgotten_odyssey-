/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ffe4  Symbol: getContentText */

/* cocos2d::CCIMEDispatcher::getContentText() */

int __thiscall cocos2d::CCIMEDispatcher::getContentText(CCIMEDispatcher *this)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    iVar2 = DAT_00160010 + 0x160004;
  }
  else {
    piVar1 = *(int **)(*(int *)this + 8);
    if (piVar1 == (int *)0x0) {
      iVar2 = DAT_00160014 + 0x16000a;
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x28))();
      if (iVar2 == 0) {
        iVar2 = (int)&DAT_00160010 + DAT_00160018;
      }
    }
  }
  return iVar2;
}


