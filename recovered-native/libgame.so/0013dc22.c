/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013dc22  Symbol: actionWithDuration */

/* cocos2d::CCSkewTo::actionWithDuration(float, float, float) */

undefined8 cocos2d::CCSkewTo::actionWithDuration(float param_1,float param_2,float param_3)

{
  undefined4 in_r0;
  int *this;
  int iVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  
  this = (int *)operator_new(0x4c);
  CCSkewTo((CCSkewTo *)this);
  if (this != (int *)0x0) {
    iVar1 = (**(code **)(*this + 0x28))(this,in_r0,in_r1,in_r2);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return CONCAT44(in_r0,this);
}


