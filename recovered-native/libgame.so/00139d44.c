/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139d44  Symbol: actionWithSize */

/* cocos2d::CCGridAction::actionWithSize(cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCGridAction::actionWithSize(_ccGridSize *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  fVar2 = (float)CCAction::CCAction((CCAction *)this);
  this[8] = 0;
  *this = *(int *)(DAT_00139d94 + 0x139d6e) + 8;
  iVar1 = initWithSize((CCGridAction *)this,param_1,fVar2);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


