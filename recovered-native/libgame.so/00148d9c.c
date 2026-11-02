/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148d9c  Symbol: labelWithString */

/* cocos2d::CCLabelTTF::labelWithString(char const*, cocos2d::CCSize const&,
   cocos2d::CCTextAlignment, char const*, float) */

int * cocos2d::CCLabelTTF::labelWithString
                (char *param_1,CCSize *param_2,CCTextAlignment param_3,char *param_4,float param_5)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x1e4);
  fVar2 = (float)CCLabelTTF((CCLabelTTF *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithString((CCLabelTTF *)this,param_1,param_2,param_3,param_4,fVar2);
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


