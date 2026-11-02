/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015914  Symbol: MoveURLJni */

void MoveURLJni(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  
  iVar1 = FUN_000155b4(DAT_00015960 + 0x15922,DAT_0001595c + 0x15920);
  if (iVar1 != 0) {
    ppiVar3 = *(int ***)(DAT_00015964 + 0x15932);
    uVar2 = (**(code **)(**ppiVar3 + 0x29c))(*ppiVar3,param_1);
    _JNIEnv::CallStaticVoidMethod
              ((_jclass *)*ppiVar3,*(_jmethodID **)(DAT_00015968 + 0x1594a),iVar1,uVar2);
    (**(code **)(**ppiVar3 + 0x5c))(*ppiVar3,uVar2);
  }
  return;
}


