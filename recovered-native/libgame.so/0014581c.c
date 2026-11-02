/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014581c  Symbol: grab */

/* cocos2d::CCGrabber::grab(cocos2d::CCTexture2D*) */

undefined8 cocos2d::CCGrabber::grab(CCTexture2D *param_1)

{
  undefined4 uVar1;
  int *in_r1;
  CCTexture2D *local_18;
  
  local_18 = param_1;
  if (1 < *(int *)(param_1 + 0x1c)) {
    glGetIntegerv(DAT_00145864,param_1 + 0x18);
    glBindFramebufferOES(DAT_00145868,*(undefined4 *)(param_1 + 0x14));
    uVar1 = (**(code **)(*in_r1 + 0x20))(in_r1);
    local_18 = (CCTexture2D *)0x0;
    glFramebufferTexture2DOES(DAT_00145868,DAT_0014586c,DAT_00145870,uVar1);
    glCheckFramebufferStatusOES(DAT_00145868);
    glBindFramebufferOES(DAT_00145868,*(undefined4 *)(param_1 + 0x18));
  }
  return CONCAT44(in_r1,local_18);
}


