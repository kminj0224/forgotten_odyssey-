/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001456fc  Symbol: runWithScene */

/* cocos2d::CCDirector::runWithScene(cocos2d::CCScene*) */

void __thiscall cocos2d::CCDirector::runWithScene(CCDirector *this,CCScene *param_1)

{
  pushScene(this,param_1);
  (**(code **)(*(int *)this + 0x20))(this);
  return;
}


