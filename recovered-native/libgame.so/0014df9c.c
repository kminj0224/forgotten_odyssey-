/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014df9c  Symbol: setDisabledColor */

/* cocos2d::CCMenuItemLabel::setDisabledColor(cocos2d::_ccColor3B const&) */

void __thiscall
cocos2d::CCMenuItemLabel::setDisabledColor(CCMenuItemLabel *this,_ccColor3B *param_1)

{
  this[0x114] = *(CCMenuItemLabel *)param_1;
  this[DAT_0014dfbc] = *(CCMenuItemLabel *)((int)param_1 + 1);
  this[0x116] = *(CCMenuItemLabel *)((int)param_1 + 2);
  return;
}


