/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d7dc  Symbol: GLToCGAffine */

/* cocos2d::GLToCGAffine(float const*, cocos2d::CCAffineTransform*) */

void cocos2d::GLToCGAffine(float *param_1,CCAffineTransform *param_2)

{
  *(float *)param_2 = *param_1;
  *(float *)(param_2 + 8) = param_1[4];
  *(float *)(param_2 + 0x10) = param_1[0xc];
  *(float *)(param_2 + 4) = param_1[1];
  *(float *)(param_2 + 0xc) = param_1[5];
  *(float *)(param_2 + 0x14) = param_1[0xd];
  return;
}


