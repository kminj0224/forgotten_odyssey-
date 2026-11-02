/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207e64  Symbol: FUN_00207e64 */

FILE * FUN_00207e64(FILE *param_1,char *param_2,undefined4 param_3)

{
  char *__modes;
  FILE *pFVar1;
  undefined uVar2;
  
  __modes = (char *)FUN_00207b00(param_3);
  if (__modes == (char *)0x0) {
    return (FILE *)0x0;
  }
  if (param_1->_flags == 0) {
    pFVar1 = fopen(param_2,__modes);
    uVar2 = SUB41(__modes,0);
    if (pFVar1 != (FILE *)0x0) {
      uVar2 = 1;
    }
    param_1->_flags = (int)pFVar1;
    if (pFVar1 != (FILE *)0x0) {
      *(undefined *)&param_1->_IO_read_ptr = uVar2;
      pFVar1 = param_1;
    }
    return pFVar1;
  }
  return (FILE *)0x0;
}


