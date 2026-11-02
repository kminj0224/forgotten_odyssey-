/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001607bc  Symbol: textFieldWithPlaceHolder */

/* cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder(char const*, char const*, float) */

int * cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder(char *param_1,char *param_2,float param_3)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x200);
  fVar2 = (float)CCTextFieldTTF((CCTextFieldTTF *)this);
  if (this != (int *)0x0) {
    iVar1 = CCLabelTTF::initWithString
                      ((CCLabelTTF *)this,(char *)(DAT_00160810 + 0x1607e0),param_2,fVar2);
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


