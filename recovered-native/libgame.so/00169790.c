/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169790  Symbol: png_set_gAMA_fixed */

void png_set_gAMA_fixed(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = DAT_00169800 + 0x16979c;
  if ((param_2 != 0) && (param_1 != 0)) {
    if (param_3 < 0) {
      png_warning(param_1,iVar4 + DAT_00169804,param_3,param_4,param_4);
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0xfc) = 0;
      uVar2 = *(uint *)(param_2 + 8);
      uVar3 = uVar2 | 1;
      *(uint *)(param_2 + 8) = uVar3;
    }
    else {
      uVar5 = __floatsidf(param_3);
      __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_001697f8,DAT_001697fc);
      uVar1 = __truncdfsf2();
      uVar2 = *(uint *)(param_2 + 8);
      *(int *)(param_2 + 0xfc) = param_3;
      uVar3 = uVar2 | 1;
      *(undefined4 *)(param_2 + 0x28) = uVar1;
      *(uint *)(param_2 + 8) = uVar3;
      if (param_3 != 0) {
        return;
      }
    }
    png_warning(param_1,iVar4 + DAT_00169808,uVar2,uVar3,param_4);
  }
  return;
}


