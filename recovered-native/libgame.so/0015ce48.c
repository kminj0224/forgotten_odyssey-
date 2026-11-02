/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ce48  Symbol: array */

/* cocos2d::CCArray::array() */

int * cocos2d::CCArray::array(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x18);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_0015ce84 + 0x15ce5e) + 8;
  this[5] = 0;
  iVar1 = init((CCArray *)this);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


