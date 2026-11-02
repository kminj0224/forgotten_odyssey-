/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015d12  Symbol: CallStaticIntMethod */

/* _JNIEnv::CallStaticIntMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticIntMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_4;
  
  uStack_4 = in_r3;
  (**(code **)(*(int *)param_1 + 0x208))(param_1,param_2,in_r2,&uStack_4,param_1,&uStack_4,in_r2);
  return;
}


