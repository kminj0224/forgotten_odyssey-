/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144e8a  Symbol: updateContentScaleFactor */

/* cocos2d::CCDirector::updateContentScaleFactor() */

void __thiscall cocos2d::CCDirector::updateContentScaleFactor(CCDirector *this)

{
  int iVar1;
  float extraout_s0;
  
  iVar1 = CCEGLView::canSetContentScaleFactor();
  if (iVar1 != 0) {
    CCEGLView::setContentScaleFactor(*(CCEGLView **)(this + 0x14),extraout_s0);
    this[0x88] = (CCDirector)0x1;
  }
  return;
}


