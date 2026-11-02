/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136fa8  Symbol: locate */

/* cocos2d::CCCamera::locate() */

void cocos2d::CCCamera::locate(void)

{
  int in_r0;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  
  if (*(char *)(in_r0 + 0x38) != '\0') {
    gluLookAt(in_s0,in_s1,in_s2,in_s3,in_s4,in_s5,in_s6,in_s7,*(float *)(in_r0 + 0x14));
  }
  return;
}


