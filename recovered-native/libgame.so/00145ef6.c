/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145ef6  Symbol: initWithSize */

/* cocos2d::CCGridBase::initWithSize(cocos2d::_ccGridSize const&) */

CCGridBase * __thiscall cocos2d::CCGridBase::initWithSize(CCGridBase *this,_ccGridSize *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  void *__ptr;
  CCTexture2D *this_00;
  CCSize local_20;
  undefined4 local_1c;
  
  CCDirector::sharedDirector();
  CCDirector::getWinSizeInPixels((CCDirector *)&local_20);
  uVar1 = __fixunssfsi(local_20);
  uVar2 = ccNextPOT(uVar1);
  uVar1 = __fixunssfsi(local_1c);
  uVar3 = ccNextPOT(uVar1);
  __ptr = calloc(uVar2 * uVar3 * 4,1);
  if (__ptr == (void *)0x0) {
    CCObject::release((CCObject *)this);
    this = (CCGridBase *)0x0;
  }
  else {
    this_00 = (CCTexture2D *)operator_new(0x38);
    CCTexture2D::CCTexture2D(this_00);
    CCTexture2D::initWithData(this_00,__ptr,1,uVar2,uVar3,&local_20);
    free(__ptr);
    if (this_00 == (CCTexture2D *)0x0) {
      if (this != (CCGridBase *)0x0) {
        (**(code **)(*(int *)this + 8))();
        this = (CCGridBase *)0x0;
      }
    }
    else {
      initWithSize(this,param_1,this_00,false);
      CCObject::release((CCObject *)this_00);
      this = (CCGridBase *)0x1;
    }
  }
  return this;
}


