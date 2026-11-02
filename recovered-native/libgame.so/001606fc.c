/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001606fc  Symbol: attachWithIME */

/* cocos2d::CCTextFieldTTF::attachWithIME() */

int __thiscall cocos2d::CCTextFieldTTF::attachWithIME(CCTextFieldTTF *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CCIMEDelegate::attachWithIME((CCIMEDelegate *)(this + 0x1e4));
  if (iVar1 != 0) {
    iVar2 = CCDirector::sharedDirector();
    if (*(CCEGLView **)(iVar2 + 0x14) != (CCEGLView *)0x0) {
      CCEGLView::setIMEKeyboardState(*(CCEGLView **)(iVar2 + 0x14),true);
    }
  }
  return iVar1;
}


