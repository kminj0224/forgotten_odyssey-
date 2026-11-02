/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001911ac  Symbol: FUN_001911ac */

void FUN_001911ac(FILE *param_1)

{
  FILE *__stream;
  int iVar1;
  
  iVar1 = DAT_001911e4 + 0x1911b8;
  __stream = param_1;
  if (((param_1 != (FILE *)0x0) ||
      (__stream = fopen((char *)(iVar1 + DAT_001911e8),(char *)(iVar1 + DAT_001911ec)),
      __stream != (FILE *)0x0)) &&
     (fputs((char *)(iVar1 + DAT_001911f0),__stream), param_1 == (FILE *)0x0)) {
    fclose(__stream);
  }
  return;
}


