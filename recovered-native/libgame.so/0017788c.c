/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017788c  Symbol: png_write_cHRM_fixed */

void png_write_cHRM_fixed
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  
  iVar1 = DAT_00177950;
  iVar3 = DAT_0017794c + 0x1778a2;
  local_2c = **(int **)(iVar3 + DAT_00177950);
  local_54 = *(undefined4 *)(iVar3 + DAT_00177954 + 0x30);
  local_50 = *(undefined *)(iVar3 + DAT_00177954 + 0x34);
  iVar2 = png_check_cHRM_fixed
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (iVar2 != 0) {
    png_save_uint_32(auStack_4c,param_2);
    png_save_uint_32(auStack_48,param_3);
    png_save_uint_32(auStack_44,param_4);
    png_save_uint_32(auStack_40,param_5);
    png_save_uint_32(auStack_3c,param_6);
    png_save_uint_32(auStack_38,param_7);
    png_save_uint_32(auStack_34,param_8);
    png_save_uint_32(auStack_30,param_9);
    png_write_chunk(param_1,&local_54,auStack_4c,0x20);
  }
  if (local_2c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


