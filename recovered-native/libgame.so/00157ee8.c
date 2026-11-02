/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157ee8  Symbol: ~CCEGLView */

/* cocos2d::CCEGLView::~CCEGLView() */

CCEGLView * __thiscall cocos2d::CCEGLView::~CCEGLView(CCEGLView *this)

{
  *(int *)this = *(int *)(DAT_00157f0c + 0x157ef2) + 8;
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 0x14))();
    *(undefined4 *)(this + 0x28) = 0;
  }
  return this;
}


