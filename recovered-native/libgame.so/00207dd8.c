/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207dd8  Symbol: FUN_00207dd8 */

FILE * FUN_00207dd8(FILE *param_1,int param_2,undefined4 param_3)

{
  FILE *__stream;
  
  __stream = (FILE *)FUN_00207b00(param_3);
  if (__stream != (FILE *)0x0) {
    if (param_1->_flags != 0) {
      return (FILE *)0x0;
    }
    __stream = fdopen(param_2,(char *)__stream);
    param_1->_flags = (int)__stream;
    if (__stream != (FILE *)0x0) {
      *(undefined *)&param_1->_IO_read_ptr = 1;
      if (param_2 == 0) {
        setvbuf(__stream,(char *)0x0,2,0);
        return param_1;
      }
      return param_1;
    }
  }
  return __stream;
}


