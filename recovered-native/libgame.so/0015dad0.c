/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dad0  Symbol: isXMLFileExist */

/* cocos2d::CCUserDefault::isXMLFileExist() */

FILE * cocos2d::CCUserDefault::isXMLFileExist(void)

{
  FILE *__stream;
  
  __stream = fopen(**(char ***)(DAT_0015daf0 + 0x15dada),(char *)(DAT_0015daf4 + 0x15dade));
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
    __stream = (FILE *)0x1;
  }
  return __stream;
}


