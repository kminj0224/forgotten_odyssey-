/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169fb0  Symbol: png_set_cHRM_fixed */

void png_set_cHRM_fixed(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (((param_2 != 0) && (param_1 != 0)) &&
     (iVar1 = png_check_cHRM_fixed
                        (param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10),
     iVar1 != 0)) {
    *(undefined4 *)(param_2 + 0x100) = param_3;
    *(undefined4 *)(param_2 + 0x104) = param_4;
    *(undefined4 *)(param_2 + 0x108) = param_5;
    *(undefined4 *)(param_2 + 0x10c) = param_6;
    *(undefined4 *)(param_2 + 0x110) = param_7;
    *(undefined4 *)(param_2 + 0x114) = param_8;
    *(undefined4 *)(param_2 + 0x118) = param_9;
    *(undefined4 *)(param_2 + 0x11c) = param_10;
    uVar3 = __floatsidf(param_3);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x80) = uVar2;
    uVar3 = __floatsidf(param_4);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x84) = uVar2;
    uVar3 = __floatsidf(param_5);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x88) = uVar2;
    uVar3 = __floatsidf(param_6);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x8c) = uVar2;
    uVar3 = __floatsidf(param_7);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x90) = uVar2;
    uVar3 = __floatsidf(param_8);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x94) = uVar2;
    uVar3 = __floatsidf(param_9);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x98) = uVar2;
    uVar3 = __floatsidf(param_10);
    __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016a0e8,DAT_0016a0ec);
    uVar2 = __truncdfsf2();
    *(undefined4 *)(param_2 + 0x9c) = uVar2;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  return;
}


