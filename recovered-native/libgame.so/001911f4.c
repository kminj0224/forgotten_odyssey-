/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001911f4  Symbol: FUN_001911f4 */

void FUN_001911f4(FILE *param_1,int param_2)

{
  FILE *__stream;
  int iVar1;
  
  iVar1 = DAT_00191230 + 0x1911fe;
  if ((0 < param_2) &&
     (((__stream = param_1, param_1 != (FILE *)0x0 ||
       (__stream = fopen((char *)(iVar1 + DAT_00191234),(char *)(iVar1 + DAT_00191238)),
       __stream != (FILE *)0x0)) &&
      (fputs((char *)(iVar1 + DAT_0019123c),__stream), param_1 == (FILE *)0x0)))) {
    fclose(__stream);
  }
  return;
}


