/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001509e4  Symbol: CCRenderTexture */

/* cocos2d::CCRenderTexture::CCRenderTexture() */

CCRenderTexture * __thiscall cocos2d::CCRenderTexture::CCRenderTexture(CCRenderTexture *this)

{
  CCNode::CCNode((CCNode *)this);
  *(int *)this = *(int *)(DAT_00150a10 + 0x1509f6) + 8;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 1;
  return this;
}


