/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001583e0  Symbol: setAnimationInterval */

/* cocos2d::CCApplication::setAnimationInterval(double) */

void cocos2d::CCApplication::setAnimationInterval(double param_1)

{
  int iVar1;
  _jclass *local_1c;
  _jmethodID *local_18;
  undefined4 local_14;
  
  iVar1 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_1c,(char *)(DAT_00158410 + 0x1583f2),
                     (char *)(DAT_00158414 + 0x1583f4),(char *)(DAT_00158418 + 0x1583f6));
  if (iVar1 != 0) {
    _JNIEnv::CallStaticVoidMethod(local_1c,local_18,local_14);
  }
  return;
}


