/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177c40  Symbol: png_write_gAMA */

void png_write_gAMA(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_1c;
  undefined local_18;
  undefined auStack_14 [4];
  
  iVar2 = DAT_00177ca0 + 0x177c4c + DAT_00177ca4;
  local_1c = *(undefined4 *)(iVar2 + 0x58);
  local_18 = *(undefined *)(iVar2 + 0x5c);
  uVar3 = __muldf3(param_3,param_4,DAT_00177c90,DAT_00177c94);
  __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_00177c98,DAT_00177c9c);
  uVar1 = __fixunsdfsi();
  png_save_uint_32(auStack_14,uVar1);
  png_write_chunk(param_1,&local_1c,auStack_14,4);
  return;
}


