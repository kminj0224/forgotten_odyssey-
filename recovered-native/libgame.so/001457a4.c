/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001457a4  Symbol: ~CCGrabber */

/* cocos2d::CCGrabber::~CCGrabber() */

CCGrabber * __thiscall cocos2d::CCGrabber::~CCGrabber(CCGrabber *this)

{
  *(int *)this = *(int *)(DAT_001457cc + 0x1457ae) + 8;
  if (1 < *(int *)(this + 0x1c)) {
    glDeleteFramebuffersOES(1,this + 0x14);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


