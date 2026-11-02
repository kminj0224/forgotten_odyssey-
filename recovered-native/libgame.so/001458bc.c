/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001458bc  Symbol: afterRender */

/* cocos2d::CCGrabber::afterRender(cocos2d::CCTexture2D*) */

void cocos2d::CCGrabber::afterRender(CCTexture2D *param_1)

{
  if (1 < *(int *)(param_1 + 0x1c)) {
    glBindFramebufferOES(DAT_001458dc,*(undefined4 *)(param_1 + 0x18));
    glColorMask(1,1,1,1);
  }
  return;
}


