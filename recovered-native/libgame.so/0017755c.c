/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017755c  Symbol: png_write_sCAL */

void png_write_sCAL(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  char *__format;
  char *__s;
  undefined4 local_6c;
  undefined local_68;
  char local_64 [64];
  int local_24;
  
  iVar3 = DAT_001775ec + 0x177574;
  piVar2 = *(int **)(iVar3 + DAT_001775f0);
  local_24 = *piVar2;
  local_6c = *(undefined4 *)(iVar3 + DAT_001775f4 + 0x10);
  local_68 = *(undefined *)(iVar3 + DAT_001775f4 + 0x14);
  __format = (char *)(iVar3 + DAT_001775f8);
  local_64[0] = param_2;
  snprintf(local_64 + 1,0x3f,__format,DAT_001775f8,param_3,param_4);
  sVar1 = strlen(local_64 + 1);
  iVar3 = sVar1 + 2;
  __s = local_64 + iVar3;
  snprintf(__s,0x40 - iVar3,__format,param_6,param_5,param_6);
  sVar1 = strlen(__s);
  png_write_chunk(param_1,&local_6c,local_64,iVar3 + sVar1);
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


