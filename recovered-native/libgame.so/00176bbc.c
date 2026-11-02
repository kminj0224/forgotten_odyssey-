/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176bbc  Symbol: png_write_pCAL */

void png_write_pCAL(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,int param_6,char *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_44;
  undefined local_40;
  undefined4 local_3c;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  undefined local_30;
  undefined local_2f;
  int local_2c;
  
  iVar1 = DAT_00176d68;
  iVar8 = DAT_00176d64 + 0x176bd2;
  local_2c = **(int **)(iVar8 + DAT_00176d68);
  local_44 = *(undefined4 *)(iVar8 + DAT_00176d6c + 0x40);
  local_40 = *(undefined *)(iVar8 + DAT_00176d6c + 0x44);
  if (3 < param_5) {
    png_warning(param_1,iVar8 + DAT_00176d70);
  }
  iVar2 = png_check_keyword(param_1,param_2,&local_3c);
  iVar2 = iVar2 + 1;
  sVar3 = strlen(param_7);
  iVar6 = sVar3 + (param_6 != 0);
  iVar7 = iVar2 + iVar6 + 10;
  iVar4 = png_malloc(param_1,param_6 << 2);
  local_2f = (char)param_6;
  if (param_6 < 1) {
    png_write_chunk_start(param_1,&local_44,iVar7);
    png_write_chunk_data(param_1,local_3c,iVar2);
    png_save_int_32(auStack_38,param_3);
    png_save_int_32(auStack_34,param_4);
    local_30 = (undefined)param_5;
    png_write_chunk_data(param_1,auStack_38,10);
    png_write_chunk_data(param_1,param_7,iVar6);
    png_free(param_1,local_3c);
  }
  else {
    iVar10 = 0;
    iVar9 = 0;
    do {
      sVar3 = strlen(*(char **)(param_8 + iVar10));
      iVar5 = (iVar9 != param_6 + -1) + sVar3;
      iVar9 = iVar9 + 1;
      *(int *)(iVar4 + iVar10) = iVar5;
      iVar7 = iVar7 + iVar5;
      iVar10 = iVar10 + 4;
    } while (iVar9 != param_6);
    png_write_chunk_start(param_1,&local_44,iVar7);
    png_write_chunk_data(param_1,local_3c,iVar2);
    png_save_int_32(auStack_38,param_3);
    png_save_int_32(auStack_34,param_4);
    local_30 = (undefined)param_5;
    png_write_chunk_data(param_1,auStack_38,10);
    png_write_chunk_data(param_1,param_7,iVar6);
    png_free(param_1,local_3c);
    iVar2 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      png_write_chunk_data(param_1,*(undefined4 *)(param_8 + iVar2),*(undefined4 *)(iVar4 + iVar2));
      iVar2 = iVar2 + 4;
    } while (iVar6 < param_6);
  }
  png_free(param_1,iVar4);
  png_write_chunk_end(param_1);
  if (local_2c == **(int **)(iVar8 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


