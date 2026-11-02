/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016086c  Symbol: textFieldWithPlaceHolder */

/* cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder(char const*, cocos2d::CCSize const&,
   cocos2d::CCTextAlignment, char const*, float) */

int * cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder
                (char *param_1,CCSize *param_2,CCTextAlignment param_3,char *param_4,float param_5)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x200);
  fVar2 = (float)CCTextFieldTTF((CCTextFieldTTF *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithPlaceHolder((CCTextFieldTTF *)this,(char *)(DAT_001608cc + 0x160896),param_2,
                                param_3,param_4,fVar2);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
      if (param_1 != (char *)0x0) {
        (**(code **)(*this + 0x144))(this,param_1);
      }
    }
  }
  return this;
}


