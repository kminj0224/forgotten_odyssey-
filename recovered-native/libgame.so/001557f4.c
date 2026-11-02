/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001557f4  Symbol: getFileData */

/* cocos2d::CCFileUtils::getFileData(char const*, char const*, unsigned long*) */

void * cocos2d::CCFileUtils::getFileData(char *param_1,char *param_2,ulong *param_3)

{
  void *__ptr;
  FILE *__stream;
  uint __n;
  size_t sVar1;
  undefined4 uVar2;
  undefined auStack_30 [4];
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  char *local_24;
  char *local_20;
  char *local_1c [2];
  
  FUN_001eed40(&local_24,param_1,auStack_30);
  if ((param_2 != (char *)0x0) && (param_1 != (char *)0x0)) {
    if (*param_1 == '/') {
      __stream = fopen(param_1,param_2);
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        __n = ftell(__stream);
        fseek(__stream,0,0);
        __ptr = operator_new__(__n);
        sVar1 = fread(__ptr,1,__n,__stream);
        fclose(__stream);
        if (param_3 != (ulong *)0x0) {
          *param_3 = sVar1;
        }
        goto LAB_00155880;
      }
    }
    else {
      FUN_001edeb0(&local_24,0,DAT_001558d8 + 0x155824);
      __ptr = (void *)getFileDataFromZip(*(char **)(DAT_001558dc + 0x155830),local_24,param_3);
LAB_00155880:
      if (__ptr != (void *)0x0) goto LAB_001558ca;
    }
    __ptr = (void *)getIsPopupNotify();
    if (__ptr == (void *)0x0) goto LAB_001558ca;
    FUN_001eed40(&local_20,DAT_001558e0 + 0x155896,auStack_2c);
    FUN_001eed40(local_1c,DAT_001558e4 + 0x1558a2,auStack_28);
    uVar2 = FUN_001ee590(local_1c,local_24);
    FUN_001ee590(uVar2,DAT_001558e8 + 0x1558b2);
    CCMessageBox(local_1c[0],local_20);
    FUN_001ed6b8(local_1c);
    FUN_001ed6b8(&local_20);
  }
  __ptr = (void *)0x0;
LAB_001558ca:
  FUN_001ed6b8(&local_24);
  return __ptr;
}


