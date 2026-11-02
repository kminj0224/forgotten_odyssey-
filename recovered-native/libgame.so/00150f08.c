/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150f08  Symbol: saveBuffer */

/* cocos2d::CCRenderTexture::saveBuffer(char const*, int, int, int, int) */

CCImage * __thiscall
cocos2d::CCRenderTexture::saveBuffer
          (CCRenderTexture *this,char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  CCImage *this_00;
  CCImage *pCVar1;
  
  this_00 = (CCImage *)operator_new(0x14);
  CCImage::CCImage(this_00);
  pCVar1 = this_00;
  if (this_00 != (CCImage *)0x0) {
    pCVar1 = (CCImage *)getUIImageFromBuffer(this,this_00,param_2,param_3,param_4,param_5);
    if (pCVar1 != (CCImage *)0x0) {
      pCVar1 = (CCImage *)CCImage::saveToFile(this_00,param_1,true);
    }
    CCImage::~CCImage(this_00);
    operator_delete(this_00);
  }
  return pCVar1;
}


