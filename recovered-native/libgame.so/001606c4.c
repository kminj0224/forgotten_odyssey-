/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001606c4  Symbol: detachWithIME */

/* cocos2d::CCTextFieldTTF::detachWithIME() */

int __thiscall cocos2d::CCTextFieldTTF::detachWithIME(CCTextFieldTTF *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CCIMEDelegate::detachWithIME((CCIMEDelegate *)(this + 0x1e4));
  if (iVar1 != 0) {
    iVar2 = CCDirector::sharedDirector();
    if (*(CCEGLView **)(iVar2 + 0x14) != (CCEGLView *)0x0) {
      CCEGLView::setIMEKeyboardState(*(CCEGLView **)(iVar2 + 0x14),false);
    }
  }
  return iVar1;
}


