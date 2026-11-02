/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017cb6c  Symbol: FUN_0017cb6c */

char * FUN_0017cb6c(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_24;
  
  iVar5 = DAT_0017cc40 + 0x17cb78;
  pcVar3 = (char *)(***(code ***)(iVar5 + DAT_0017cc44))(10);
  if (pcVar3 == (char *)0x0) {
    FUN_00179430(param_1,0);
  }
  else {
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((byte)(cVar1 - 0x30U) < 10) {
      *pcVar3 = cVar1;
      FUN_0017a4a4(param_1);
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '.') {
        pcVar3[1] = '.';
        FUN_0017a4a4(param_1);
        iVar2 = DAT_0017cc4c;
        cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
        local_24 = 10;
        iVar6 = 2;
        do {
          if (9 < (byte)(cVar1 - 0x30U)) {
            pcVar3[iVar6] = '\0';
            return pcVar3;
          }
          pcVar4 = pcVar3;
          if (local_24 <= iVar6 + 1) {
            local_24 = local_24 << 1;
            pcVar4 = (char *)(***(code ***)(iVar5 + iVar2))(pcVar3,local_24);
            if (pcVar4 == (char *)0x0) {
              (***(code ***)(iVar5 + DAT_0017cc48))(pcVar3);
              FUN_00179430(param_1,0);
              return (char *)0x0;
            }
          }
          pcVar4[iVar6] = cVar1;
          FUN_0017a4a4(param_1);
          cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
          pcVar3 = pcVar4;
          iVar6 = iVar6 + 1;
        } while( true );
      }
    }
    (***(code ***)(iVar5 + DAT_0017cc48))(pcVar3);
  }
  return (char *)0x0;
}


