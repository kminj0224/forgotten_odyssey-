/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148ff4  Symbol: setColor */

/* cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCLayerColor::setColor(CCLayerColor *this,_ccColor3B *param_1)

{
  this[DAT_0014901c] = *(CCLayerColor *)param_1;
  this[0x14a] = *(CCLayerColor *)((int)param_1 + 1);
  this[DAT_00149020] = *(CCLayerColor *)((int)param_1 + 2);
  (**(code **)(*(int *)this + 0x150))();
  return;
}


