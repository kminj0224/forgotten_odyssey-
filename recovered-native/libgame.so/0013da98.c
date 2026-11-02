/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013da98  Symbol: actionWithDuration */

/* cocos2d::CCMoveTo::actionWithDuration(float, cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCMoveTo::actionWithDuration(float param_1,CCPoint *param_2)

{
  CCPoint *this;
  float fVar1;
  
  this = (CCPoint *)operator_new(0x44);
  memset(this,0,0x44);
  fVar1 = (float)CCMoveTo((CCMoveTo *)this);
  initWithDuration(fVar1,this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


