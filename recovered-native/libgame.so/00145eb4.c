/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145eb4  Symbol: gridWithSize */

/* cocos2d::CCGridBase::gridWithSize(cocos2d::_ccGridSize const&, cocos2d::CCTexture2D*, bool) */

CCGridBase *
cocos2d::CCGridBase::gridWithSize(_ccGridSize *param_1,CCTexture2D *param_2,bool param_3)

{
  CCGridBase *this;
  int iVar1;
  
  this = (CCGridBase *)operator_new(0x34);
  memset(this,0,0x34);
  CCGridBase(this);
  iVar1 = initWithSize(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (CCGridBase *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


