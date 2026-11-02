/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001608d0  Symbol: initWithPlaceHolder */

/* cocos2d::CCTextFieldTTF::initWithPlaceHolder(char const*, char const*, float) */

void __thiscall
cocos2d::CCTextFieldTTF::initWithPlaceHolder
          (CCTextFieldTTF *this,char *param_1,char *param_2,float param_3)

{
  void *pvVar1;
  undefined auStack_1c [8];
  
  if (param_1 != (char *)0x0) {
    pvVar1 = *(void **)(this + 0x1f8);
    if (pvVar1 != (void *)0x0) {
      FUN_001ed6b8(pvVar1);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x1f8) = 0;
    }
    pvVar1 = operator_new(4);
    param_3 = (float)FUN_001eed40(pvVar1,param_1,auStack_1c);
    *(void **)(this + 0x1f8) = pvVar1;
  }
  CCLabelTTF::initWithString((CCLabelTTF *)this,**(char ***)(this + 0x1f8),param_2,param_3);
  return;
}


