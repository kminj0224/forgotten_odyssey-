/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001464d8  Symbol: gridWithSize */

/* cocos2d::CCTiledGrid3D::gridWithSize(cocos2d::_ccGridSize const&) */

int * cocos2d::CCTiledGrid3D::gridWithSize(_ccGridSize *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x44);
  memset(this,0,0x44);
  CCGridBase::CCGridBase((CCGridBase *)this);
  *this = *(int *)(DAT_00146520 + 0x1464fc) + 8;
  iVar1 = CCGridBase::initWithSize((CCGridBase *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


