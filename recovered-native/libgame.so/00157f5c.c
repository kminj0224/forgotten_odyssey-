/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157f5c  Symbol: setFrameWidthAndHeight */

/* cocos2d::CCEGLView::setFrameWidthAndHeight(int, int) */

void __thiscall cocos2d::CCEGLView::setFrameWidthAndHeight(CCEGLView *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = __floatsisf(param_1);
  *(undefined4 *)(this + 4) = uVar1;
  uVar1 = __floatsisf(param_2);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


