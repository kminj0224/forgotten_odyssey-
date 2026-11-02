/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001601c8  Symbol: setColorSpaceHolder */

/* cocos2d::CCTextFieldTTF::setColorSpaceHolder(cocos2d::_ccColor3B const&) */

void __thiscall
cocos2d::CCTextFieldTTF::setColorSpaceHolder(CCTextFieldTTF *this,_ccColor3B *param_1)

{
  this[0x1f0] = *(CCTextFieldTTF *)param_1;
  this[DAT_001601e8] = *(CCTextFieldTTF *)((int)param_1 + 1);
  this[0x1f2] = *(CCTextFieldTTF *)((int)param_1 + 2);
  return;
}


