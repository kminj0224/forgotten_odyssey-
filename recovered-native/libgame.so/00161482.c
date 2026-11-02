/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161482  Symbol: textureAtlasWithFile */

/* cocos2d::CCTextureAtlas::textureAtlasWithFile(char const*, unsigned int) */

int * cocos2d::CCTextureAtlas::textureAtlasWithFile(char *param_1,uint param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x34);
  CCTextureAtlas((CCTextureAtlas *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithFile((CCTextureAtlas *)this,param_1,param_2);
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


