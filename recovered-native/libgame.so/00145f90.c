/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145f90  Symbol: gridWithSize */

/* cocos2d::CCGridBase::gridWithSize(cocos2d::_ccGridSize const&) */

CCGridBase * cocos2d::CCGridBase::gridWithSize(_ccGridSize *param_1)

{
  CCGridBase *this;
  int iVar1;
  
  this = (CCGridBase *)operator_new(0x34);
  memset(this,0,0x34);
  CCGridBase(this);
  iVar1 = initWithSize(this,param_1);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (CCGridBase *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


