/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d8474  Symbol: FUN_001d8474 */

int FUN_001d8474(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined auStack_34 [4];
  undefined auStack_30 [12];
  char *local_24;
  
  local_24 = (char *)FUN_001eec14(param_2,param_3,auStack_34,0);
  pcVar1 = (char *)FUN_001eec14(param_4,param_5,auStack_30,0);
  iVar7 = *(int *)(pcVar1 + -0xc);
  pcVar6 = local_24 + *(int *)(local_24 + -0xc);
  pcVar4 = local_24;
  pcVar5 = pcVar1;
  do {
    iVar3 = FUN_002067cc(param_1,pcVar4,pcVar5);
    if (iVar3 != 0) {
LAB_001d853c:
      pcVar4 = *(char **)(DAT_001d85d0 + 0x1d854c);
      if ((pcVar1 + -0xc != pcVar4) && (iVar7 = FUN_0021100c(pcVar1 + -4,0xffffffff), iVar7 < 1)) {
        operator_delete(pcVar1 + -0xc);
      }
      pcVar5 = local_24 + -0xc;
      if ((pcVar5 != pcVar4) && (iVar7 = FUN_0021100c(local_24 + -4,0xffffffff), iVar7 < 1)) {
        operator_delete(pcVar5);
      }
      return iVar3;
    }
    sVar2 = strlen(pcVar4);
    pcVar4 = pcVar4 + sVar2;
    sVar2 = strlen(pcVar5);
    pcVar5 = pcVar5 + sVar2;
    if (pcVar5 == pcVar1 + iVar7 && pcVar4 == pcVar6) goto LAB_001d853c;
    if (pcVar4 == pcVar6) {
      iVar3 = -1;
      goto LAB_001d853c;
    }
    if (pcVar5 == pcVar1 + iVar7) {
      iVar3 = 1;
      goto LAB_001d853c;
    }
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while( true );
}


