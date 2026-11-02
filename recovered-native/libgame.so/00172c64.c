/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172c64  Symbol: png_chunk_warning */

void png_chunk_warning(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined auStack_70 [84];
  int local_1c;
  
  iVar1 = DAT_00172ca8;
  iVar2 = DAT_00172ca4 + 0x172c70;
  local_1c = **(int **)(iVar2 + DAT_00172ca8);
  if (param_1 == 0) {
    png_warning(0,param_2,param_2);
  }
  else {
    FUN_00172b6c(param_1,auStack_70);
    png_warning(param_1,auStack_70);
  }
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


