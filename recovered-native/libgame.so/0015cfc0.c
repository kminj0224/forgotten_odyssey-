/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cfc0  Symbol: arrayWithArray */

/* cocos2d::CCArray::arrayWithArray(cocos2d::CCArray*) */

int * cocos2d::CCArray::arrayWithArray(CCArray *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x18);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_0015d000 + 0x15cfda) + 8;
  this[5] = 0;
  iVar1 = initWithArray((CCArray *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


