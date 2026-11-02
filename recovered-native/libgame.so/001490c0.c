/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001490c0  Symbol: setEndColor */

/* cocos2d::CCLayerGradient::setEndColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCLayerGradient::setEndColor(CCLayerGradient *this,_ccColor3B *param_1)

{
  this[DAT_001490e8] = *(CCLayerGradient *)param_1;
  this[0x158] = *(CCLayerGradient *)((int)param_1 + 1);
  this[DAT_001490ec] = *(CCLayerGradient *)((int)param_1 + 2);
  (**(code **)(*(int *)this + 0x150))();
  return;
}


