/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139a94  Symbol: update */

/* cocos2d::CCDeccelAmplitude::update(float) */

void __thiscall cocos2d::CCDeccelAmplitude::update(CCDeccelAmplitude *this,float param_1)

{
  undefined4 in_r1;
  float fVar1;
  undefined8 uVar2;
  
  uVar2 = __subsf3(0x3f800000);
  fVar1 = powf((float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  CCActionInterval::setAmplitudeRate(fVar1);
  (**(code **)(**(int **)(this + 0x30) + 0x10))(*(int **)(this + 0x30),in_r1);
  return;
}


