/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155674  Symbol: getFileDataFromZip */

/* cocos2d::CCFileUtils::getFileDataFromZip(char const*, char const*, unsigned long*) */

void cocos2d::CCFileUtils::getFileDataFromZip(char *param_1,char *param_2,ulong *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  unz_file_info_s auStack_170 [28];
  uint local_154;
  char acStack_120 [260];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0015571c + 0x155680);
  local_1c = *piVar4;
  *param_3 = 0;
  if ((param_2 == (char *)0x0) || (param_1 == (char *)0x0)) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)(uint)(byte)*param_1;
    if (((void *)(uint)(byte)*param_1 != (void *)0x0) &&
       (pvVar1 = (void *)unzOpen(param_1), pvVar3 = pvVar1, pvVar1 != (void *)0x0)) {
      iVar2 = unzLocateFile(pvVar1,param_2,1);
      pvVar3 = (void *)0x0;
      if (iVar2 == 0) {
        iVar2 = unzGetCurrentFileInfo
                          (pvVar1,auStack_170,acStack_120,0x104,(void *)0x0,0,(char *)0x0,0);
        if ((iVar2 == 0) && (iVar2 = unzOpenCurrentFile(pvVar1), iVar2 == 0)) {
          pvVar3 = operator_new__(local_154);
          unzReadCurrentFile(pvVar1,pvVar3,local_154);
          *param_3 = local_154;
          unzCloseCurrentFile(pvVar1);
        }
      }
      unzClose(pvVar1);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return;
}


