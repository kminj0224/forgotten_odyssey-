/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161b08  Symbol: removeTexture */

/* cocos2d::VolatileTexture::removeTexture(cocos2d::CCTexture2D*) */

void cocos2d::VolatileTexture::removeTexture(CCTexture2D *param_1)

{
  undefined4 *puVar1;
  CCTexture2D **this;
  
  puVar1 = (undefined4 *)**(undefined4 **)(DAT_00161b34 + 0x161b10);
  do {
    if (puVar1 == *(undefined4 **)(DAT_00161b34 + 0x161b10)) {
      return;
    }
    this = (CCTexture2D **)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
  } while (*this != param_1);
  ~VolatileTexture((VolatileTexture *)this);
  operator_delete(this);
  return;
}


