/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158042  Symbol: isOpenGLReady */

/* cocos2d::CCEGLView::isOpenGLReady() */

bool __thiscall cocos2d::CCEGLView::isOpenGLReady(CCEGLView *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = __aeabi_fcmpeq(*(undefined4 *)(this + 4),0);
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)(this + 8),0);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


