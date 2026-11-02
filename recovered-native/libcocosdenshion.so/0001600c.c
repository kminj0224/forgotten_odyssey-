/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001600c  Symbol: _edata */

undefined8
_edata(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
      _jclass *param_6,_jmethodID *param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00015c0c(&param_6,param_2 + 0x16014,DAT_00016038 + 0x16016);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod(param_6,param_7,param_8,param_1);
    _JNIEnv::DeleteLocalRef((_jobject *)param_6);
  }
  return CONCAT44(param_6,param_5);
}


