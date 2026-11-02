/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00207fc8  Symbol: FUN_00207fc8 */

int FUN_00207fc8(int *param_1,void *param_2,size_t param_3,int param_4,int param_5)

{
  short sVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  iovec local_30;
  int local_28;
  int local_24;
  
  iVar5 = param_3 + param_5;
  sVar1 = *(short *)(*param_1 + 0xe);
  local_24 = param_5;
  iVar6 = iVar5;
  local_28 = param_4;
  do {
    while( true ) {
      local_30.iov_base = param_2;
      local_30.iov_len = param_3;
      sVar2 = writev((int)sVar1,&local_30,2);
      if (sVar2 != -1) break;
      piVar3 = (int *)__errno();
      if (*piVar3 != 4) {
LAB_00208058:
        return iVar5 - iVar6;
      }
    }
    iVar6 = iVar6 - sVar2;
    param_2 = (void *)((int)param_2 + sVar2);
    if (iVar6 == 0) goto LAB_00208058;
    iVar4 = sVar2 - param_3;
    param_3 = param_3 - sVar2;
  } while (iVar4 < 0);
  iVar4 = FUN_00207d0c((int)sVar1,param_4 + iVar4,param_5 - iVar4);
  iVar6 = iVar6 - iVar4;
  goto LAB_00208058;
}


