/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158728  Symbol: setKeyboardStateJNI */

void setKeyboardStateJNI(int param_1,int *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  if (param_1 == 0) {
    pcVar2 = (char *)(DAT_00158768 + 0x15873a);
  }
  else {
    pcVar2 = (char *)(DAT_00158764 + 0x158734);
  }
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_14,(char *)(DAT_0015876c + 0x158742),pcVar2,
                     (char *)(DAT_00158770 + 0x158744));
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod((_jclass *)local_14,local_10,local_c);
    (**(code **)(*local_14 + 0x5c))(local_14,local_10);
  }
  return;
}


