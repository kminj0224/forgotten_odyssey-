/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157bfc  Symbol: initWithString */

/* cocos2d::CCImage::initWithString(char const*, int, int, cocos2d::CCImage::ETextAlign, char
   const*, int) */

char * __thiscall
cocos2d::CCImage::initWithString
          (CCImage *this,char *param_1,int param_2,int param_3,ETextAlign param_4,char *param_5,
          int param_6)

{
  undefined4 *this_00;
  undefined4 uVar1;
  float fVar2;
  
  if (param_1 != (char *)0x0) {
    this_00 = (undefined4 *)FUN_001571b8();
    fVar2 = (float)__floatsisf(param_6);
    param_1 = (char *)BitmapDC::getBitmapFromJava
                                ((BitmapDC *)this_00,param_1,param_2,param_3,param_4,param_5,fVar2);
    if (param_1 != (char *)0x0) {
      param_1 = (char *)this_00[2];
      *(char **)(this + 0xc) = param_1;
      if (param_1 != (char *)0x0) {
        param_1 = (char *)0x1;
        *(short *)(this + 4) = (short)*this_00;
        uVar1 = this_00[1];
        this[0x10] = (CCImage)0x1;
        this[0x11] = (CCImage)0x1;
        *(short *)(this + 6) = (short)uVar1;
        *(undefined4 *)(this + 8) = 8;
      }
    }
  }
  return param_1;
}


