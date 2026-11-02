/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015a5c  Symbol: setAndroidIDJni */

void setAndroidIDJni(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  
  iVar1 = FUN_000155b4(DAT_00015aa8 + 0x15a6a,DAT_00015aa4 + 0x15a68);
  if (iVar1 != 0) {
    ppiVar3 = *(int ***)(DAT_00015aac + 0x15a7a);
    uVar2 = (**(code **)(**ppiVar3 + 0x29c))(*ppiVar3,param_1);
    _JNIEnv::CallStaticVoidMethod
              ((_jclass *)*ppiVar3,*(_jmethodID **)(DAT_00015ab0 + 0x15a92),iVar1,uVar2);
    (**(code **)(**ppiVar3 + 0x5c))(*ppiVar3,uVar2);
  }
  return;
}


