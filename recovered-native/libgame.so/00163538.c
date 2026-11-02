/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163538  Symbol: pvrTextureWithContentsOfFile */

/* cocos2d::CCTexturePVR::pvrTextureWithContentsOfFile(char const*) */

CCTexturePVR * cocos2d::CCTexturePVR::pvrTextureWithContentsOfFile(char *param_1)

{
  CCTexturePVR *this;
  int iVar1;
  
  this = (CCTexturePVR *)operator_new(0xb0);
  CCTexturePVR(this);
  iVar1 = initWithContentsOfFile(this,param_1);
  if (iVar1 == 0) {
    this = (CCTexturePVR *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


