/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176d74  Symbol: png_write_iTXt */

void png_write_iTXt(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                   char *param_5,char *param_6)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  int local_58;
  int local_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined local_38;
  undefined4 local_34;
  char *local_30;
  char local_2c;
  undefined local_2b;
  
  iVar6 = DAT_00176eb8 + 0x176d94;
  iVar5 = iVar6 + DAT_00176ebc;
  local_3c = *(undefined4 *)(iVar5 + 0x48);
  local_38 = *(undefined *)(iVar5 + 0x4c);
  local_34 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_50[0] = 0;
  iVar5 = png_check_keyword(param_1,param_3,&local_34);
  if (iVar5 != 0) {
    iVar1 = png_check_keyword(param_1,param_4,&local_30);
    local_58 = iVar1 + 1;
    if (iVar1 == 0) {
      png_warning(param_1,iVar6 + DAT_00176ec0);
      local_58 = 1;
      local_30 = (char *)0x0;
    }
    if (param_5 == (char *)0x0) {
      local_54 = 1;
      sVar2 = 0;
    }
    else {
      sVar2 = strlen(param_5);
      local_54 = sVar2 + 1;
    }
    sVar4 = 0;
    if (param_6 != (char *)0x0) {
      sVar4 = strlen(param_6);
    }
    iVar6 = FUN_00176524(param_1,param_6,sVar4,param_2 + -2,local_50);
    png_write_chunk_start(param_1,&local_3c,iVar5 + 5 + iVar1 + sVar2 + iVar6);
    png_write_chunk_data(param_1,local_34,iVar5 + 1);
    if ((param_2 == -1) || (param_2 == 1)) {
      local_2c = '\0';
    }
    else {
      local_2c = '\x01';
    }
    local_2b = 0;
    png_write_chunk_data(param_1,&local_2c,2);
    local_2c = '\0';
    pcVar3 = local_30;
    if (local_30 == (char *)0x0) {
      pcVar3 = &local_2c;
    }
    png_write_chunk_data(param_1,pcVar3,local_58);
    if (param_5 == (char *)0x0) {
      param_5 = &local_2c;
    }
    png_write_chunk_data(param_1,param_5,local_54);
    FUN_00176a90(param_1,local_50);
    png_write_chunk_end(param_1);
    png_free(param_1,local_34);
    png_free(param_1,local_30);
  }
  return;
}


