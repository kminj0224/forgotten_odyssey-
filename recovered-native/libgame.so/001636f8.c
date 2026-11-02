/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001636f8  Symbol: pointWithCCPoint */

/* cocos2d::CCPointObject::pointWithCCPoint(cocos2d::CCPoint, cocos2d::CCPoint) */

int * cocos2d::CCPointObject::pointWithCCPoint(CCPoint param_1,CCPoint param_2)

{
  int *this;
  int in_r2;
  int in_r3;
  
  this = (int *)operator_new(0x28);
  memset(this,0,0x28);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_00163754 + 0x163724) + 8;
  CCPoint::CCPoint((CCPoint *)(this + 5));
  CCPoint::CCPoint((CCPoint *)(this + 7));
  this[6] = param_2;
  this[8] = in_r3;
  this[5] = param_1;
  this[7] = in_r2;
  this[9] = 0;
  CCObject::autorelease((CCObject *)this);
  return this;
}


