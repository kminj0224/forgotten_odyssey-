/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000156e4  Symbol: SetPIDJni */

void SetPIDJni(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  
  iVar1 = FUN_000155b4(DAT_00015730 + 0x156f2,DAT_0001572c + 0x156f0);
  if (iVar1 != 0) {
    ppiVar3 = *(int ***)(DAT_00015734 + 0x15702);
    uVar2 = (**(code **)(**ppiVar3 + 0x29c))(*ppiVar3,param_1);
    _JNIEnv::CallStaticVoidMethod
              ((_jclass *)*ppiVar3,*(_jmethodID **)(DAT_00015738 + 0x1571a),iVar1,uVar2);
    (**(code **)(**ppiVar3 + 0x5c))(*ppiVar3,uVar2);
  }
  return;
}


