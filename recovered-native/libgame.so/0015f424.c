/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f424  Symbol: unzLocateFile */

/* cocos2d::unzLocateFile(void*, char const*, int) */

void cocos2d::unzLocateFile(void *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined auStack_178 [88];
  char acStack_120 [260];
  int local_1c;
  
  piVar10 = *(int **)(DAT_0015f4f4 + 0x15f430);
  local_1c = *piVar10;
  if ((param_1 == (void *)0x0) || (sVar1 = strlen(param_2), 0xff < sVar1)) {
    iVar2 = 0x66;
  }
  else {
    if ((*(uint *)((int)param_1 + 0x60) | *(uint *)((int)param_1 + 100)) != 0) {
      uVar4 = *(undefined4 *)((int)param_1 + 0x50);
      uVar6 = *(undefined4 *)((int)param_1 + 0x54);
      uVar7 = *(undefined4 *)((int)param_1 + 0x58);
      uVar9 = *(undefined4 *)((int)param_1 + 0x5c);
      memcpy(auStack_178,(void *)((int)param_1 + 0x80),0x58);
      uVar5 = *(undefined4 *)((int)param_1 + 0xd8);
      uVar8 = *(undefined4 *)((int)param_1 + 0xdc);
      iVar2 = unzGoToFirstFile(param_1);
      while (iVar2 == 0) {
        iVar2 = unzGetCurrentFileInfo64
                          (param_1,(unz_file_info64_s *)0x0,acStack_120,0x100,(void *)0x0,0,
                           (char *)0x0,0);
        if (iVar2 != 0) break;
        iVar3 = unzStringFileNameCompare(acStack_120,param_2,param_3);
        if (iVar3 == 0) goto LAB_0015f4e0;
        iVar2 = unzGoToNextFile(param_1);
      }
      *(undefined4 *)((int)param_1 + 0x50) = uVar4;
      *(undefined4 *)((int)param_1 + 0x54) = uVar6;
      *(undefined4 *)((int)param_1 + 0x58) = uVar7;
      *(undefined4 *)((int)param_1 + 0x5c) = uVar9;
      memcpy((void *)((int)param_1 + 0x80),auStack_178,0x58);
      *(undefined4 *)((int)param_1 + 0xd8) = uVar5;
      *(undefined4 *)((int)param_1 + 0xdc) = uVar8;
      goto LAB_0015f4e0;
    }
    iVar2 = 100;
  }
  iVar2 = -iVar2;
LAB_0015f4e0:
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


