/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157582  Symbol: initWithImageData */

/* cocos2d::CCImage::initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int) */

undefined4 __thiscall
cocos2d::CCImage::initWithImageData
          (CCImage *this,void *param_1,int param_2,EImageFormat param_3,int param_4,int param_5,
          int param_6)

{
  undefined4 uVar1;
  
  if ((param_2 < 1) || (param_1 == (void *)0x0)) {
    uVar1 = 0;
  }
  else if (param_3 == 1) {
    uVar1 = _initWithPngData(this,param_1,param_2);
  }
  else if (param_3 == 0) {
    uVar1 = _initWithJpgData(this,param_1,param_2);
  }
  else {
    uVar1 = 0;
    if (param_3 == 2) {
      uVar1 = _initWithRawData(this,param_1,param_2,param_4,param_5,param_6);
    }
  }
  return uVar1;
}


