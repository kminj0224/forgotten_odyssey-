/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145874  Symbol: beforeRender */

/* cocos2d::CCGrabber::beforeRender(cocos2d::CCTexture2D*) */

void cocos2d::CCGrabber::beforeRender(CCTexture2D *param_1)

{
  if (1 < *(int *)(param_1 + 0x1c)) {
    glGetIntegerv(DAT_001458b4,param_1 + 0x18);
    glBindFramebufferOES(DAT_001458b8,*(undefined4 *)(param_1 + 0x14));
    glClearColor(0,0,0,0x3f800000);
    glClear(0x4100);
    glColorMask(1,1,1,0);
  }
  return;
}


