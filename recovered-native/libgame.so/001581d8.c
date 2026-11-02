/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001581d8  Symbol: sharedOpenGLView */

/* cocos2d::CCEGLView::sharedOpenGLView() */

int cocos2d::CCEGLView::sharedOpenGLView(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_00158218;
  piVar3 = (int *)(DAT_00158218 + 0x1581e0);
  if ((-1 < *piVar3 << 0x1f) && (iVar2 = __cxa_guard_acquire(piVar3), iVar2 != 0)) {
    CCEGLView((CCEGLView *)(iVar1 + 0x1581e4));
    __cxa_guard_release(piVar3);
    FUN_00201240((CCEGLView *)(iVar1 + 0x1581e4),*(undefined4 *)(DAT_0015821c + 0x158206),
                 *(undefined4 *)(DAT_00158220 + 0x158208));
  }
  return (int)&DAT_00158218 + DAT_00158224;
}


