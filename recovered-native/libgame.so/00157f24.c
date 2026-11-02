/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157f24  Symbol: CCEGLView */

/* cocos2d::CCEGLView::CCEGLView() */

CCEGLView * __thiscall cocos2d::CCEGLView::CCEGLView(CCEGLView *this)

{
  *(int *)this = *(int *)(DAT_00157f58 + 0x157f2e) + 8;
  CCSize::CCSize((CCSize *)(this + 4));
  CCSize::CCSize((CCSize *)(this + 0xc));
  CCRect::CCRect((CCRect *)(this + 0x14));
  this[0x24] = (CCEGLView)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  return this;
}


