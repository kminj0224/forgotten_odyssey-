/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144b20  Symbol: setAlphaBlending */

/* cocos2d::CCDirector::setAlphaBlending(bool) */

void __thiscall cocos2d::CCDirector::setAlphaBlending(CCDirector *this,bool param_1)

{
  if (param_1) {
    glEnable();
    glBlendFunc(1,DAT_00144b40);
  }
  else {
    glDisable(DAT_00144b3c);
  }
  return;
}


