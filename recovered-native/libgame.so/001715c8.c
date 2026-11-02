/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001715c8  Symbol: png_set_rgb_to_gray */

void png_set_rgb_to_gray(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    __truncdfsf2(param_3,param_4);
    uVar3 = __extendsfdf2();
    uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_00171628,DAT_0017162c);
    __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_00171630,DAT_00171634);
    uVar1 = __fixdfsi();
    __truncdfsf2(param_5,param_6);
    uVar3 = __extendsfdf2();
    uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_00171628,DAT_0017162c);
    __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_00171630,DAT_00171634);
    uVar2 = __fixdfsi();
    png_set_rgb_to_gray_fixed(param_1,param_2,uVar1,uVar2);
  }
  return;
}


