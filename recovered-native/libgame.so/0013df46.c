/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013df46  Symbol: actionWithDuration */

/* cocos2d::CCBezierBy::actionWithDuration(float, cocos2d::_ccBezierConfig const&) */

CCBezierBy * cocos2d::CCBezierBy::actionWithDuration(float param_1,_ccBezierConfig *param_2)

{
  CCBezierBy *this;
  float fVar1;
  
  this = (CCBezierBy *)operator_new(0x4c);
  memset(this,0,0x4c);
  fVar1 = (float)CCBezierBy(this);
  initWithDuration(fVar1,(_ccBezierConfig *)this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


