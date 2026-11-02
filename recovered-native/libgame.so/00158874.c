/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158874  Symbol: showMessageBoxJNI */

void showMessageBoxJNI(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *local_1c;
  _jmethodID *local_18;
  undefined4 local_14;
  
  if ((param_1 != 0) &&
     (iVar1 = cocos2d::JniHelper::getStaticMethodInfo
                        ((JniMethodInfo_ *)&local_1c,(char *)(DAT_001588f0 + 0x15888a),
                         (char *)(DAT_001588f4 + 0x15888c),(char *)(DAT_001588f8 + 0x15888e)),
     iVar1 != 0)) {
    if (param_2 == 0) {
      pcVar4 = *(code **)(*local_1c + 0x29c);
      param_2 = DAT_001588fc + 0x1588aa;
    }
    else {
      pcVar4 = *(code **)(*local_1c + 0x29c);
    }
    uVar2 = (*pcVar4)(local_1c,param_2);
    uVar3 = (**(code **)(*local_1c + 0x29c))(local_1c,param_1);
    _JNIEnv::CallStaticVoidMethod((_jclass *)local_1c,local_18,local_14,uVar2,uVar3);
    (**(code **)(*local_1c + 0x5c))(local_1c,uVar2);
    (**(code **)(*local_1c + 0x5c))(local_1c,uVar3);
    (**(code **)(*local_1c + 0x5c))(local_1c,local_18);
  }
  return;
}


