/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a48cc  Symbol: FUN_001a48cc */

void FUN_001a48cc(int param_1,code *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char local_70 [84];
  int local_1c;
  
  iVar7 = DAT_001a499c + 0x1a48d8;
  local_1c = **(int **)(iVar7 + DAT_001a49a0);
  if (param_1 != 0) {
    pcVar2 = *(char **)(param_1 + 0x10);
    for (pcVar5 = pcVar2;
        (*(char **)(param_1 + 0xc) < pcVar5 && ((*pcVar5 == '\r' || (*pcVar5 == '\n'))));
        pcVar5 = pcVar5 + -1) {
    }
    iVar4 = 0;
    for (; (((iVar4 = iVar4 + 1, iVar4 != 0x51 && (*(char **)(param_1 + 0xc) < pcVar5)) &&
            (*pcVar5 != '\n')) && (*pcVar5 != '\r')); pcVar5 = pcVar5 + -1) {
    }
    if ((*pcVar5 == '\r') || (*pcVar5 == '\n')) {
      pcVar5 = pcVar5 + 1;
    }
    pcVar6 = local_70;
    for (uVar3 = 0;
        ((cVar1 = pcVar5[uVar3], cVar1 != '\n' && (cVar1 != '\0')) &&
        ((uVar3 < 0x50 && (cVar1 != '\r')))); uVar3 = uVar3 + 1) {
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    }
    *pcVar6 = '\0';
    pcVar6 = local_70;
    (*param_2)(param_3,iVar7 + DAT_001a49a4,pcVar6);
    uVar3 = 0;
    for (; ((uVar3 < (uint)((int)pcVar2 - (int)pcVar5) && (uVar3 != 0x4f)) && (*pcVar6 != '\0'));
        pcVar6 = pcVar6 + 1) {
      if (*pcVar6 != '\t') {
        *pcVar6 = ' ';
      }
      uVar3 = uVar3 + 1;
    }
    pcVar6[1] = '\0';
    *pcVar6 = '^';
    (*param_2)(param_3,iVar7 + DAT_001a49a4,local_70);
  }
  if (local_1c == **(int **)(iVar7 + DAT_001a49a0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


