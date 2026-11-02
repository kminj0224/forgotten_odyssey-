/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137a2e  Symbol: actionWithDuration */

/* cocos2d::CCOrbitCamera::actionWithDuration(float, float, float, float, float, float, float) */

int * cocos2d::CCOrbitCamera::actionWithDuration
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  
  this = (int *)operator_new(0x78);
  uVar2 = CCOrbitCamera((CCOrbitCamera *)this);
  iVar1 = initWithDuration((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3,
                           extraout_s4,extraout_s5,extraout_s6);
  if (iVar1 == 0) {
    if (this != (int *)0x0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


