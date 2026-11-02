/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139ae2  Symbol: update */

/* cocos2d::CCAccelDeccelAmplitude::update(float) */

void __thiscall cocos2d::CCAccelDeccelAmplitude::update(CCAccelDeccelAmplitude *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  undefined4 extraout_s0;
  float fVar3;
  undefined4 extraout_s1;
  undefined8 uVar4;
  
  uVar1 = __addsf3(in_r1);
  iVar2 = __aeabi_fcmpgt(uVar1,0x3f800000);
  uVar4 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar2 != 0) {
    uVar1 = __subsf3(uVar1,0x3f800000);
    uVar4 = __subsf3(0x3f800000,uVar1);
  }
  fVar3 = powf((float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  CCActionInterval::setAmplitudeRate(fVar3);
  return;
}


