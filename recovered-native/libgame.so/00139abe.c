/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139abe  Symbol: update */

/* cocos2d::CCAccelAmplitude::update(float) */

void cocos2d::CCAccelAmplitude::update(float param_1)

{
  int in_r0;
  undefined4 in_r1;
  float fVar1;
  float in_s1;
  
  fVar1 = powf(param_1,in_s1);
  CCActionInterval::setAmplitudeRate(fVar1);
  (**(code **)(**(int **)(in_r0 + 0x30) + 0x10))(*(int **)(in_r0 + 0x30),in_r1);
  return;
}


