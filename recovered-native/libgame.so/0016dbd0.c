/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dbd0  Symbol: png_set_gamma */

void png_set_gamma(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar3 = __muldf3(param_3,param_4,param_5,param_6,param_4);
    uVar3 = __subdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0016dc48,DAT_0016dc4c);
    iVar1 = __aeabi_dcmpgt((int)uVar3,DAT_0016dc58 & (uint)((ulonglong)uVar3 >> 0x20),DAT_0016dc50,
                           DAT_0016dc54);
    if (((iVar1 != 0) || ((int)((uint)*(byte *)(param_1 + 0x1ea) << 0x1d) < 0)) ||
       (*(byte *)(param_1 + 0x1ea) == 3)) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x2000;
    }
    uVar2 = __truncdfsf2(param_5,param_6);
    *(undefined4 *)(param_1 + 0x220) = uVar2;
    uVar2 = __truncdfsf2(param_3,param_4);
    *(undefined4 *)(param_1 + 0x224) = uVar2;
  }
  return;
}


