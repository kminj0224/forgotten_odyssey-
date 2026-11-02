/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013db48  Symbol: actionWithDuration */

/* cocos2d::CCMoveBy::actionWithDuration(float, cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCMoveBy::actionWithDuration(float param_1,CCPoint *param_2)

{
  CCPoint *this;
  float fVar1;
  
  this = (CCPoint *)operator_new(0x44);
  memset(this,0,0x44);
  fVar1 = (float)CCMoveTo::CCMoveTo((CCMoveTo *)this);
  *this = *(int *)(DAT_0013db84 + 0x13db6e) + 8;
  initWithDuration(fVar1,this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


