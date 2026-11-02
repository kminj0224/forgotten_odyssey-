/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001611ba  Symbol: initWithString */

/* cocos2d::CCTexture2D::initWithString(char const*, char const*, float) */

void __thiscall
cocos2d::CCTexture2D::initWithString(CCTexture2D *this,char *param_1,char *param_2,float param_3)

{
  float fVar1;
  float in_s1;
  CCSize aCStack_20 [12];
  
  fVar1 = (float)CCSize::CCSize(aCStack_20,param_3,in_s1);
  initWithString((char *)this,(CCSize *)param_1,(CCTextAlignment)aCStack_20,(char *)0x1,fVar1);
  return;
}


