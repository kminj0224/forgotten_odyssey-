/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015091c  Symbol: setPercentage */

/* cocos2d::CCProgressTimer::setPercentage(float) */

void cocos2d::CCProgressTimer::setPercentage(float param_1)

{
  CCProgressTimer *in_r0;
  int iVar1;
  undefined4 uVar2;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  
  iVar1 = __aeabi_fcmpeq(*(undefined4 *)(in_r0 + 0x100));
  if (iVar1 == 0) {
    uVar2 = clampf(extraout_s0,extraout_s1,extraout_s2);
    *(undefined4 *)(in_r0 + 0x100) = uVar2;
    updateProgress(in_r0);
  }
  return;
}


