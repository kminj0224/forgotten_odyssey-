/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ef8c  Symbol: setFontSizeObj */

/* cocos2d::CCMenuItemFont::setFontSizeObj(unsigned int) */

void __thiscall cocos2d::CCMenuItemFont::setFontSizeObj(CCMenuItemFont *this,uint param_1)

{
  *(uint *)(this + 0x124) = param_1;
  recreateLabel(this);
  return;
}


