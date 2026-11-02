/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a448  Symbol: initWithTexture */

/* cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) */

undefined4 __thiscall
cocos2d::CCSprite::initWithTexture(CCSprite *this,CCTexture2D *param_1,CCRect *param_2)

{
  (**(code **)(*(int *)this + 0x100))();
  (**(code **)(*(int *)this + 0x114))(this,param_1);
  setTextureRect(this,param_2);
  return 1;
}


