/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157e50  Symbol: CCLog */

/* cocos2d::CCLog(char const*, ...) */

void cocos2d::CCLog(char *param_1,...)

{
  int iVar1;
  undefined4 in_r1;
  char *__format;
  undefined4 in_r2;
  char **ppcVar2;
  undefined4 in_r3;
  int *piVar3;
  undefined4 uStack_14;
  char *local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00157e9c;
  uStack_4 = in_r3;
  uStack_8 = in_r2;
  uStack_c = in_r1;
  local_10 = param_1;
  ppcVar2 = (char **)(&stack0xffffffe8 + DAT_00157ea0 + DAT_00157e9c);
  __format = *ppcVar2;
  piVar3 = *(int **)(DAT_00157ea8 + 0x157e66);
  *(char ***)((int)&uStack_14 + DAT_00157e9c) = ppcVar2 + 1;
  *(int *)(&stack0xffffffe8 + DAT_00157ea4 + DAT_00157e9c) = *piVar3;
  vsprintf((char *)((int)&local_10 + DAT_00157e9c),__format,ppcVar2 + 1);
  __android_log_print(3,DAT_00157eac + 0x157e7e,(int)&local_10 + iVar1);
  if (*(int *)(&stack0xffffffe8 + DAT_00157ea4 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


