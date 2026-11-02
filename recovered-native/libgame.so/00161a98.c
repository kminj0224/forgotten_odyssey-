/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161a98  Symbol: addStringTexture */

/* cocos2d::VolatileTexture::addStringTexture(cocos2d::CCTexture2D*, char const*, cocos2d::CCSize
   const&, cocos2d::CCTextAlignment, char const*, float) */

undefined8
cocos2d::VolatileTexture::addStringTexture
          (CCTexture2D *param_1,char *param_2,CCSize *param_3,CCTextAlignment param_4,char *param_5,
          float param_6)

{
  CCTexture2D **this;
  undefined4 *puVar1;
  CCTexture2D *in_stack_00000004;
  
  if (**(char **)(DAT_00161b00 + 0x161aa6) == '\0') {
    puVar1 = (undefined4 *)**(undefined4 **)(DAT_00161b04 + 0x161ab4);
    do {
      if (puVar1 == *(undefined4 **)(DAT_00161b04 + 0x161ab4)) {
        this = (CCTexture2D **)operator_new(0x38);
        param_6 = (float)VolatileTexture((VolatileTexture *)this,param_1);
        break;
      }
      this = (CCTexture2D **)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
    } while (*this != param_1);
    this[1] = (CCTexture2D *)0x3;
    this[8] = (CCTexture2D *)*param_3;
    this[9] = (CCTexture2D *)param_3[1];
    FUN_001ed9dc(param_6,this + 0xb,param_5);
    this[10] = (CCTexture2D *)param_4;
    this[0xd] = in_stack_00000004;
    FUN_001ed9dc(this + 0xc,param_2);
  }
  return CONCAT44(param_2,param_1);
}


