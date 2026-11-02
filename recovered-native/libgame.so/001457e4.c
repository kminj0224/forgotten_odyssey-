/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001457e4  Symbol: CCGrabber */

/* cocos2d::CCGrabber::CCGrabber() */

CCGrabber * __thiscall cocos2d::CCGrabber::CCGrabber(CCGrabber *this)

{
  int iVar1;
  
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00145818 + 0x1457f2) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  CCConfiguration::sharedConfiguration();
  iVar1 = CCConfiguration::getGlesVersion();
  *(int *)(this + 0x1c) = iVar1;
  if (1 < iVar1) {
    glGenFramebuffersOES(1,this + 0x14);
  }
  return this;
}


