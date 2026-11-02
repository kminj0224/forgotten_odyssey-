/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139ec4  Symbol: initWithAction */

/* cocos2d::CCAccelAmplitude::initWithAction(cocos2d::CCAction*, float) */

int __thiscall
cocos2d::CCAccelAmplitude::initWithAction(CCAccelAmplitude *this,CCAction *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)this,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x2c) = 0x3f800000;
    *(CCAction **)(this + 0x30) = param_1;
    CCObject::retain((CCObject *)param_1);
    iVar1 = 1;
  }
  return iVar1;
}


