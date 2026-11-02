/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207f6c  Symbol: FUN_00207f6c */

ssize_t FUN_00207f6c(int *param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  do {
    sVar1 = read((int)*(short *)(*param_1 + 0xe),param_2,param_3);
    if (sVar1 != -1) {
      return sVar1;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return -1;
}


