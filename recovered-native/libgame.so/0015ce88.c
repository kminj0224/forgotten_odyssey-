/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ce88  Symbol: arrayWithCapacity */

/* cocos2d::CCArray::arrayWithCapacity(unsigned int) */

int * cocos2d::CCArray::arrayWithCapacity(uint param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x18);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_0015cec8 + 0x15cea2) + 8;
  this[5] = 0;
  iVar1 = initWithCapacity((CCArray *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


