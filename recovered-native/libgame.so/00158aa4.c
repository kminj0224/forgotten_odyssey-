/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158aa4  Symbol: getPackageNameJNI */

int getPackageNameJNI(void)

{
  int iVar1;
  _jstring *p_Var2;
  int *this;
  undefined4 local_20;
  int *local_1c;
  _jmethodID *local_18;
  undefined4 local_14;
  
  iVar1 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_1c,(char *)(DAT_00158b1c + 0x158ab2),
                     (char *)(DAT_00158b20 + 0x158ab4),(char *)(DAT_00158b24 + 0x158ab6));
  if (iVar1 != 0) {
    p_Var2 = (_jstring *)_JNIEnv::CallStaticObjectMethod((_jclass *)local_1c,local_18,local_14);
    (**(code **)(*local_1c + 0x5c))(local_1c,local_18);
    cocos2d::JniHelper::jstring2string((JniHelper *)&local_20,p_Var2);
    this = (int *)operator_new(0x18);
    cocos2d::CCObject::CCObject((CCObject *)this);
    *this = *(int *)(DAT_00158b28 + 0x158af4) + 8;
    this[5] = *(int *)(DAT_00158b2c + 0x158b00) + 0xc;
    FUN_001ed9dc(this + 5,local_20);
    FUN_001ed6b8(&local_20);
    cocos2d::CCObject::autorelease((CCObject *)this);
    iVar1 = this[5];
  }
  return iVar1;
}


