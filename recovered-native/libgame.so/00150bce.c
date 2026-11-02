/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150bce  Symbol: renderTextureWithWidthAndHeight */

/* cocos2d::CCRenderTexture::renderTextureWithWidthAndHeight(int, int,
   cocos2d::CCTexture2DPixelFormat) */

int * cocos2d::CCRenderTexture::renderTextureWithWidthAndHeight
                (int param_1,int param_2,CCTexture2DPixelFormat param_3)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x114);
  CCRenderTexture((CCRenderTexture *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithWidthAndHeight((CCRenderTexture *)this,param_1,param_2,param_3);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


