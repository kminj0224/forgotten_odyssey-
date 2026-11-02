/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158018  Symbol: getSize */

/* cocos2d::CCEGLView::getSize() */

undefined8 cocos2d::CCEGLView::getSize(void)

{
  int *in_r0;
  int in_r1;
  float in_s0;
  float in_s1;
  int *local_10;
  int local_c;
  
  local_10 = in_r0;
  local_c = in_r1;
  CCSize::CCSize((CCSize *)&local_10,in_s0,in_s1);
  *in_r0 = (int)local_10;
  in_r0[1] = local_c;
  return CONCAT44(local_10,in_r0);
}


