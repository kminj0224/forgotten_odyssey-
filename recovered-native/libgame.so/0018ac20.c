/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ac20  Symbol: FUN_0018ac20 */

void FUN_0018ac20(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = DAT_0018acc4 + 0x18ac2c;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 2)) {
    iVar1 = FUN_0019c42c(param_2,0x22);
    iVar2 = DAT_0018acc8;
    if ((iVar1 == 0) || (iVar1 = FUN_0019c42c(param_2,0x27), iVar2 = DAT_0018acd0, iVar1 == 0)) {
      iVar4 = iVar4 + iVar2;
      FUN_0018a92c(param_1,iVar4);
      FUN_0018aae0(param_1,param_2);
    }
    else {
      FUN_0018a92c(param_1,iVar4 + DAT_0018acc8);
      pcVar5 = param_2 + 1;
      iVar2 = iVar4 + DAT_0018accc;
      for (pcVar3 = param_2; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
        if (*pcVar3 == '\"') {
          if (param_2 != pcVar3) {
            FUN_0018aa58(param_1,param_2,(int)pcVar3 - (int)param_2);
          }
          FUN_0018aa58(param_1,iVar2,6);
          param_2 = pcVar5;
        }
        pcVar5 = pcVar5 + 1;
      }
      if (param_2 != pcVar3) {
        FUN_0018aa58(param_1,param_2,(int)pcVar3 - (int)param_2);
      }
      iVar4 = iVar4 + DAT_0018acc8;
    }
    FUN_0018a92c(param_1,iVar4);
  }
  return;
}


