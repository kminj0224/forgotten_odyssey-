/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a014  Symbol: actionWithTimes */

/* cocos2d::CCReuseGrid::actionWithTimes(int) */

int * cocos2d::CCReuseGrid::actionWithTimes(int param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x28);
  memset(this,0,0x28);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  *this = *(int *)(DAT_0013a05c + 0x13a038) + 8;
  iVar1 = initWithTimes((CCReuseGrid *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


