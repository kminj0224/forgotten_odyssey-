/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137900  Symbol: startWithTarget */

/* cocos2d::CCActionCamera::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCActionCamera::startWithTarget(CCActionCamera *this,CCNode *param_1)

{
  CCCamera *this_00;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  this_00 = (CCCamera *)(**(code **)(*(int *)param_1 + 0x5c))(param_1);
  CCCamera::getCenterXYZ
            (this_00,(float *)(this + 0x2c),(float *)(this + 0x30),(float *)(this + 0x34));
  CCCamera::getEyeXYZ(this_00,(float *)(this + 0x38),(float *)(this + 0x3c),(float *)(this + 0x40));
  CCCamera::getUpXYZ(this_00,(float *)(this + 0x44),(float *)(this + 0x48),(float *)(this + 0x4c));
  return;
}


