/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144b44  Symbol: setDepthTest */

/* cocos2d::CCDirector::setDepthTest(bool) */

void __thiscall cocos2d::CCDirector::setDepthTest(CCDirector *this,bool param_1)

{
  if (param_1) {
    glClearDepthf(0x3f800000);
    glEnable(DAT_00144b68);
    glDepthFunc(DAT_00144b6c);
  }
  else {
    glDisable(DAT_00144b68);
  }
  return;
}


