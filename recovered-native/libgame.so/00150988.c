/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150988  Symbol: ~CCRenderTexture */

/* cocos2d::CCRenderTexture::~CCRenderTexture() */

CCRenderTexture * __thiscall cocos2d::CCRenderTexture::~CCRenderTexture(CCRenderTexture *this)

{
  CCImage *this_00;
  
  *(int *)this = *(int *)(DAT_001509cc + 0x150994) + 8;
  CCNode::removeAllChildrenWithCleanup((CCNode *)this,true);
  glDeleteFramebuffersOES(1,this + 0x100);
  this_00 = *(CCImage **)(this + 0x10c);
  if (this_00 != (CCImage *)0x0) {
    CCImage::~CCImage(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 0x10c) = 0;
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


