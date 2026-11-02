/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001690a8  Symbol: png_set_cHRM */

void png_set_cHRM(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar2 = __truncdfsf2(param_3,param_4,param_3,param_4,param_4);
    *(undefined4 *)(param_2 + 0x80) = uVar2;
    uVar2 = __truncdfsf2(param_5,param_6);
    *(undefined4 *)(param_2 + 0x84) = uVar2;
    uVar2 = __truncdfsf2(param_7,param_8);
    *(undefined4 *)(param_2 + 0x88) = uVar2;
    uVar2 = __truncdfsf2(param_9,param_10);
    *(undefined4 *)(param_2 + 0x8c) = uVar2;
    uVar2 = __truncdfsf2(param_11,param_12);
    *(undefined4 *)(param_2 + 0x90) = uVar2;
    uVar2 = __truncdfsf2(param_13,param_14);
    *(undefined4 *)(param_2 + 0x94) = uVar2;
    uVar2 = __truncdfsf2(param_15,param_16);
    *(undefined4 *)(param_2 + 0x98) = uVar2;
    uVar2 = __truncdfsf2(param_17,param_18);
    *(undefined4 *)(param_2 + 0x9c) = uVar2;
    uVar4 = __muldf3(param_3,param_4,DAT_00169218,DAT_0016921c);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x100) = uVar3;
    uVar4 = __muldf3(param_5,param_6,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x104) = uVar3;
    uVar4 = __muldf3(param_7,param_8,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x108) = uVar3;
    uVar4 = __muldf3(param_9,param_10,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x10c) = uVar3;
    uVar4 = __muldf3(param_11,param_12,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x110) = uVar3;
    uVar4 = __muldf3(param_13,param_14,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x114) = uVar3;
    uVar4 = __muldf3(param_15,param_16,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar3 = __fixdfsi();
    uVar1 = DAT_0016921c;
    uVar2 = DAT_00169218;
    *(undefined4 *)(param_2 + 0x118) = uVar3;
    uVar4 = __muldf3(param_17,param_18,uVar2,uVar1);
    __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00169220,DAT_00169224);
    uVar2 = __fixdfsi();
    *(undefined4 *)(param_2 + 0x11c) = uVar2;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  return;
}


