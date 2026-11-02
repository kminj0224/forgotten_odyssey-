/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001497b0  Symbol: initWithColor */

/* cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&) */

undefined8 __thiscall cocos2d::CCLayerColor::initWithColor(CCLayerColor *this,_ccColor4B *param_1)

{
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  (**(code **)(*(int *)this + 0x128))(this,param_1,this,param_1);
  return CONCAT44(this,1);
}


