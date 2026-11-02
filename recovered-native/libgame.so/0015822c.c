/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015822c  Symbol: getViewPort */

/* cocos2d::CCEGLView::getViewPort() */

undefined4 * cocos2d::CCEGLView::getViewPort(void)

{
  undefined4 *in_r0;
  int in_r1;
  undefined4 uVar1;
  undefined4 uVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (*(char *)(in_r1 + 0x24) == '\0') {
    CCRect::CCRect((CCRect *)&local_20,in_s0,in_s1,in_s2,in_s3);
    *in_r0 = local_20;
    in_r0[1] = uStack_1c;
    in_r0[2] = uStack_18;
  }
  else {
    uVar1 = *(undefined4 *)(in_r1 + 0x18);
    uVar2 = *(undefined4 *)(in_r1 + 0x1c);
    *in_r0 = *(undefined4 *)(in_r1 + 0x14);
    in_r0[1] = uVar1;
    in_r0[2] = uVar2;
    local_14 = *(undefined4 *)(in_r1 + 0x20);
  }
  in_r0[3] = local_14;
  return in_r0;
}


