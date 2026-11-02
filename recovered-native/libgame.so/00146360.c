/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146360  Symbol: gridWithSize */

/* cocos2d::CCGrid3D::gridWithSize(cocos2d::_ccGridSize const&, cocos2d::CCTexture2D*, bool) */

int * cocos2d::CCGrid3D::gridWithSize(_ccGridSize *param_1,CCTexture2D *param_2,bool param_3)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x44);
  memset(this,0,0x44);
  CCGridBase::CCGridBase((CCGridBase *)this);
  *this = *(int *)(DAT_001463b0 + 0x146388) + 8;
  iVar1 = CCGridBase::initWithSize((CCGridBase *)this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


