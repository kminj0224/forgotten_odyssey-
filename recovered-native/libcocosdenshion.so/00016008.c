/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016008  Symbol: stopEffectJNI */

undefined8 stopEffectJNI(undefined4 param_1,_jclass *param_2,_jmethodID *param_3,undefined4 param_4)

{
  int iVar1;
  _jclass *p_Stack_14;
  _jmethodID *p_Stack_10;
  undefined4 uStack_c;
  
  p_Stack_14 = param_2;
  p_Stack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_00015c0c(&p_Stack_14,DAT_00016034 + 0x16014,DAT_00016038 + 0x16016);
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod(p_Stack_14,p_Stack_10,uStack_c,param_1);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Stack_14);
  }
  return CONCAT44(p_Stack_14,param_1);
}


