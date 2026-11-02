/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f248  Symbol: __gcclibcxx_demangle_callback */

undefined4 __gcclibcxx_demangle_callback(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0 || param_2 == 0) {
    return 0xfffffffd;
  }
  iVar1 = FUN_0001ee84();
  if (iVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


