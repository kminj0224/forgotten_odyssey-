/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7e64  Symbol: ReadFromFile */

/* ReadFromFile(char const*, char**, unsigned long*) */

FILE * ReadFromFile(char *param_1,char **param_2,ulong *param_3)

{
  FILE *__stream;
  size_t sVar1;
  char *pcVar2;
  
  __stream = fopen(param_1,(char *)(DAT_000b7eb4 + 0xb7e70));
  fseek(__stream,0,2);
  sVar1 = ftell(__stream);
  pcVar2 = (char *)malloc(sVar1);
  *param_2 = pcVar2;
  fseek(__stream,0,0);
  if (__stream != (FILE *)0x0) {
    sVar1 = fread(*param_2,1,sVar1,__stream);
    *param_3 = sVar1;
    fclose(__stream);
    __stream = (FILE *)0x1;
  }
  return __stream;
}


