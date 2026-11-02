/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000160b0  Symbol: setEffectsVolumeJNI */

void setEffectsVolumeJNI(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  undefined8 uVar2;
  _jclass *local_24;
  _jmethodID *local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00015c0c(&local_24,DAT_000160f0 + 0x160be,DAT_000160f4 + 0x160c0);
  if (iVar1 != 0) {
    uVar2 = __extendsfdf2(param_1);
    _JNIEnv::CallStaticVoidMethod
              (local_24,local_20,local_1c,param_4,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    _JNIEnv::DeleteLocalRef((_jobject *)local_24);
  }
  return;
}


