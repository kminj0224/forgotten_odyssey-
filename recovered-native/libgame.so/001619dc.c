/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001619dc  Symbol: addImageTexture */

/* cocos2d::VolatileTexture::addImageTexture(cocos2d::CCTexture2D*, char const*,
   cocos2d::CCImage::EImageFormat) */

void cocos2d::VolatileTexture::addImageTexture
               (CCTexture2D *param_1,char *param_2,EImageFormat param_3)

{
  CCTexture2D **this;
  CCTexture2D *pCVar1;
  undefined4 *puVar2;
  
  if (**(char **)(DAT_00161a34 + 0x1619e8) == '\0') {
    puVar2 = (undefined4 *)**(undefined4 **)(DAT_00161a38 + 0x1619f6);
    do {
      if (puVar2 == *(undefined4 **)(DAT_00161a38 + 0x1619f6)) {
        this = (CCTexture2D **)operator_new(0x38);
        VolatileTexture((VolatileTexture *)this,param_1);
        break;
      }
      this = (CCTexture2D **)puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
    } while (*this != param_1);
    this[1] = (CCTexture2D *)0x1;
    FUN_001ed9dc(this + 6,param_2);
    this[7] = (CCTexture2D *)param_3;
    pCVar1 = (CCTexture2D *)(**(code **)(*(int *)param_1 + 0x14))(param_1);
    this[5] = pCVar1;
  }
  return;
}


