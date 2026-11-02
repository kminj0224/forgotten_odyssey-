/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fa04  Symbol: progressWithTexture */

/* cocos2d::CCProgressTimer::progressWithTexture(cocos2d::CCTexture2D*) */

int * cocos2d::CCProgressTimer::progressWithTexture(CCTexture2D *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  memset(this,0,0x110);
  CCNode::CCNode((CCNode *)this);
  *this = *(int *)(DAT_0014fa50 + 0x14fa2c) + 8;
  iVar1 = initWithTexture((CCTexture2D *)this);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


