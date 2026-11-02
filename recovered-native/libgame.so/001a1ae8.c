/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a1ae8  Symbol: FUN_001a1ae8 */

void FUN_001a1ae8(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = DAT_001a1b84 + 0x1a1af4;
  if (*(int *)(param_1 + 0xc) != 2) {
    iVar4 = FUN_0019c42c(param_2,0x25);
    if (iVar4 == 0) {
      FUN_0018ac20(param_1,param_2);
    }
    else {
      pcVar7 = param_2 + 1;
      FUN_0018a92c(param_1,iVar6 + DAT_001a1b88);
      iVar3 = DAT_001a1b90;
      iVar4 = DAT_001a1b8c;
      for (pcVar5 = param_2; cVar1 = *pcVar5, cVar1 != '\0'; pcVar5 = pcVar5 + 1) {
        if (cVar1 == '\"') {
          iVar2 = iVar3;
          if (param_2 != pcVar5) {
            FUN_0018aa58(param_1,param_2,(int)pcVar5 - (int)param_2);
          }
LAB_001a1b4c:
          FUN_0018aa58(param_1,iVar6 + iVar2,6);
          param_2 = pcVar7;
        }
        else if (cVar1 == '%') {
          iVar2 = iVar4;
          if (param_2 != pcVar5) {
            FUN_0018aa58(param_1,param_2,(int)pcVar5 - (int)param_2);
          }
          goto LAB_001a1b4c;
        }
        pcVar7 = pcVar7 + 1;
      }
      if (param_2 != pcVar5) {
        FUN_0018aa58(param_1,param_2,(int)pcVar5 - (int)param_2);
      }
      FUN_0018a92c(param_1,iVar6 + DAT_001a1b88);
    }
  }
  return;
}


