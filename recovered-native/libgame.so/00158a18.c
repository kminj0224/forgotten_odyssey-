/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158a18  Symbol: disableAccelerometerJNI */

void disableAccelerometerJNI(undefined4 param_1,int *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  int *local_14;
  _jmethodID *local_10;
  undefined4 local_c;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_14,(char *)(DAT_00158a48 + 0x158a24),
                     (char *)(DAT_00158a4c + 0x158a26),(char *)(DAT_00158a50 + 0x158a28));
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod((_jclass *)local_14,local_10,local_c);
    (**(code **)(*local_14 + 0x5c))(local_14,local_10);
  }
  return;
}


