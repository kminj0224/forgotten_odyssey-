/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001770a4  Symbol: png_write_sPLT */

void png_write_sPLT(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_44;
  undefined local_40;
  undefined4 local_3c;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  undefined auStack_34 [2];
  undefined auStack_32 [2];
  undefined auStack_30 [4];
  int local_2c;
  
  iVar1 = DAT_001771e8;
  iVar5 = DAT_001771e4 + 0x1770ba;
  local_2c = **(int **)(iVar5 + DAT_001771e8);
  local_44 = *(undefined4 *)(iVar5 + DAT_001771ec + 0x68);
  local_40 = *(undefined *)(iVar5 + DAT_001771ec + 0x6c);
  iVar6 = 6;
  if (*(char *)(param_2 + 1) != '\b') {
    iVar6 = 10;
  }
  iVar3 = param_2[3];
  iVar2 = png_check_keyword(param_1,*param_2,&local_3c);
  if (iVar2 != 0) {
    png_write_chunk_start(param_1,&local_44,iVar2 + 2 + iVar6 * iVar3);
    png_write_chunk_data(param_1,local_3c,iVar2 + 1);
    png_write_chunk_data(param_1,param_2 + 1,1);
    puVar4 = (undefined2 *)param_2[2];
    if (puVar4 < puVar4 + param_2[3] * 5) {
      do {
        if (*(char *)(param_2 + 1) == '\b') {
          local_38 = (undefined)*puVar4;
          local_37 = (undefined)puVar4[1];
          local_36 = (undefined)puVar4[2];
          local_35 = (undefined)puVar4[3];
          png_save_uint_16(auStack_34,puVar4[4]);
        }
        else {
          png_save_uint_16(&local_38,*puVar4);
          png_save_uint_16(&local_36,puVar4[1]);
          png_save_uint_16(auStack_34,puVar4[2]);
          png_save_uint_16(auStack_32,puVar4[3]);
          png_save_uint_16(auStack_30,puVar4[4]);
        }
        png_write_chunk_data(param_1,&local_38,iVar6);
        puVar4 = puVar4 + 5;
      } while (puVar4 < (undefined2 *)(param_2[2] + param_2[3] * 10));
    }
    png_write_chunk_end(param_1);
    png_free(param_1,local_3c);
  }
  if (local_2c == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


