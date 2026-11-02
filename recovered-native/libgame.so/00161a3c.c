/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161a3c  Symbol: addDataTexture */

/* cocos2d::VolatileTexture::addDataTexture(cocos2d::CCTexture2D*, void*,
   cocos2d::CCTexture2DPixelFormat, cocos2d::CCSize const&) */

undefined8
cocos2d::VolatileTexture::addDataTexture
          (CCTexture2D *param_1,void *param_2,CCTexture2DPixelFormat param_3,CCSize *param_4)

{
  CCTexture2D **this;
  undefined4 *puVar1;
  
  if (**(char **)(DAT_00161a90 + 0x161a4a) == '\0') {
    puVar1 = (undefined4 *)**(undefined4 **)(DAT_00161a94 + 0x161a58);
    do {
      if (puVar1 == *(undefined4 **)(DAT_00161a94 + 0x161a58)) {
        this = (CCTexture2D **)operator_new(0x38);
        VolatileTexture((VolatileTexture *)this,param_1);
        break;
      }
      this = (CCTexture2D **)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
    } while (*this != param_1);
    this[1] = (CCTexture2D *)0x2;
    this[2] = (CCTexture2D *)param_2;
    this[5] = (CCTexture2D *)param_3;
    this[3] = (CCTexture2D *)*param_4;
    this[4] = (CCTexture2D *)param_4[1];
  }
  return CONCAT44(param_3,param_1);
}


