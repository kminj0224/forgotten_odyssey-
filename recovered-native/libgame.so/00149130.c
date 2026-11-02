/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149130  Symbol: setVector */

/* cocos2d::CCLayerGradient::setVector(cocos2d::CCPoint const&) */

void __thiscall cocos2d::CCLayerGradient::setVector(CCLayerGradient *this,CCPoint *param_1)

{
  *(CCPoint *)(this + 0x15c) = *param_1;
  *(CCPoint *)(this + 0x160) = param_1[1];
  (**(code **)(*(int *)this + 0x150))();
  return;
}


