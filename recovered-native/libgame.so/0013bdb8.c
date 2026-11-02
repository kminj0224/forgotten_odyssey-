/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bdb8  Symbol: initWithPosition */

/* cocos2d::CCPlace::initWithPosition(cocos2d::CCPoint const&) */

undefined4 __thiscall cocos2d::CCPlace::initWithPosition(CCPlace *this,CCPoint *param_1)

{
  *(CCPoint *)(this + 0x24) = *param_1;
  *(CCPoint *)(this + 0x28) = param_1[1];
  return 1;
}


