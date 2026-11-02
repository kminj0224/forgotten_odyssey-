/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e084  Symbol: actionWithDuration */

/* cocos2d::CCBezierTo::actionWithDuration(float, cocos2d::_ccBezierConfig const&) */

int * cocos2d::CCBezierTo::actionWithDuration(float param_1,_ccBezierConfig *param_2)

{
  int *this;
  float fVar1;
  
  this = (int *)operator_new(0x4c);
  memset(this,0,0x4c);
  fVar1 = (float)CCBezierBy::CCBezierBy((CCBezierBy *)this);
  *this = *(int *)(DAT_0013e0c0 + 0x13e0aa) + 8;
  CCBezierBy::initWithDuration(fVar1,(_ccBezierConfig *)this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


