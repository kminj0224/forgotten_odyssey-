/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7dac  Symbol: ReadFromFile */

/* ReadFromFile(char const*, char**, int) */

FILE * ReadFromFile(char *param_1,char **param_2,int param_3)

{
  char *pcVar1;
  FILE *__stream;
  size_t __size;
  
  pcVar1 = (char *)cocos2d::CCFileUtils::fullPathFromRelativePath(param_1);
  __stream = fopen(pcVar1,(char *)(DAT_000b7dfc + 0xb7dba));
  fseek(__stream,0,2);
  __size = ftell(__stream);
  pcVar1 = (char *)malloc(__size);
  *param_2 = pcVar1;
  fseek(__stream,0,0);
  if (__stream != (FILE *)0x0) {
    fread(*param_2,1,__size,__stream);
    fclose(__stream);
    __stream = (FILE *)0x1;
  }
  return __stream;
}


