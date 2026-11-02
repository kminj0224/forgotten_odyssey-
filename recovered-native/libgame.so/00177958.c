/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177958  Symbol: png_write_cHRM */

void png_write_cHRM(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                   undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                   undefined4 param_17,undefined4 param_18)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_54;
  undefined local_50;
  undefined auStack_4c [4];
  undefined auStack_48 [4];
  undefined auStack_44 [4];
  undefined auStack_40 [4];
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined auStack_30 [4];
  int local_2c;
  
  iVar1 = DAT_00177afc;
  iVar11 = DAT_00177af8 + 0x17796e;
  local_2c = **(int **)(iVar11 + DAT_00177afc);
  local_54 = *(undefined4 *)(iVar11 + DAT_00177b00 + 0x38);
  local_50 = *(undefined *)(iVar11 + DAT_00177b00 + 0x3c);
  uVar12 = __muldf3(param_3,param_4,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar2 = __fixunsdfsi();
  uVar12 = __muldf3(param_5,param_6,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar3 = __fixunsdfsi();
  uVar12 = __muldf3(param_7,param_8,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar4 = __fixunsdfsi();
  uVar12 = __muldf3(param_9,param_10,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar5 = __fixunsdfsi();
  uVar12 = __muldf3(param_11,param_12,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar6 = __fixunsdfsi();
  uVar12 = __muldf3(param_13,param_14,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar7 = __fixunsdfsi();
  uVar12 = __muldf3(param_15,param_16,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar8 = __fixunsdfsi();
  uVar12 = __muldf3(param_17,param_18,DAT_00177ae8,DAT_00177aec);
  __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_00177af0,DAT_00177af4);
  uVar9 = __fixunsdfsi();
  iVar10 = png_check_cHRM_fixed(param_1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  if (iVar10 != 0) {
    png_save_uint_32(auStack_4c,uVar2);
    png_save_uint_32(auStack_48,uVar3);
    png_save_uint_32(auStack_44,uVar4);
    png_save_uint_32(auStack_40,uVar5);
    png_save_uint_32(auStack_3c,uVar6);
    png_save_uint_32(auStack_38,uVar7);
    png_save_uint_32(auStack_34,uVar8);
    png_save_uint_32(auStack_30,uVar9);
    png_write_chunk(param_1,&local_54,auStack_4c,0x20);
  }
  if (local_2c == **(int **)(iVar11 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


