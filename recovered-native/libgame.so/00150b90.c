/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150b90  Symbol: renderTextureWithWidthAndHeight */

/* cocos2d::CCRenderTexture::renderTextureWithWidthAndHeight(int, int) */

int * cocos2d::CCRenderTexture::renderTextureWithWidthAndHeight(int param_1,int param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x114);
  CCRenderTexture((CCRenderTexture *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithWidthAndHeight((CCRenderTexture *)this,param_1,param_2,1);
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


