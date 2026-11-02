/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ea5c  Symbol: initWithDuration */

/* cocos2d::CCAnimate::initWithDuration(float, cocos2d::CCAnimation*, bool) */

int cocos2d::CCAnimate::initWithDuration(float param_1,CCAnimation *param_2,bool param_3)

{
  int iVar1;
  CCObject *in_r2;
  CCAnimation in_r3;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)param_2,param_1);
  if (iVar1 != 0) {
    param_2[0x34] = in_r3;
    *(CCObject **)(param_2 + 0x2c) = in_r2;
    if (in_r2 != (CCObject *)0x0) {
      CCObject::retain(in_r2);
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
    iVar1 = 1;
  }
  return iVar1;
}


