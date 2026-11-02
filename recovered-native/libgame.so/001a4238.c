/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4238  Symbol: FUN_001a4238 */

void FUN_001a4238(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char **ppcVar6;
  int local_8c;
  char *local_88;
  char local_80 [100];
  int local_1c;
  
  iVar5 = DAT_001a4310 + 0x1a4244;
  local_1c = **(int **)(iVar5 + DAT_001a4314);
  if (*(int *)(iVar5 + DAT_001a4318 + 0xc) == 0) {
    FUN_001a40e8();
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    ppcVar6 = *(char ***)(iVar5 + DAT_001a4318 + 0x14);
  }
  else {
    pcVar2 = (char *)FUN_001a3d90(param_1);
    local_88 = param_1;
    if (pcVar2 != (char *)0x0) {
      local_88 = pcVar2;
    }
    iVar4 = 0;
    iVar3 = **(int **)(iVar5 + DAT_001a431c);
    do {
      cVar1 = *(char *)(iVar3 + ((byte)local_88[iVar4] + 1) * 2);
      local_80[iVar4] = cVar1;
      if (cVar1 == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 99);
    local_80[iVar4] = '\0';
    iVar3 = iVar5 + DAT_001a4318;
    for (local_8c = 0; local_8c < *(int *)(iVar3 + 0x10); local_8c = local_8c + 1) {
      ppcVar6 = *(char ***)(local_8c * 4 + *(int *)(iVar3 + 0xc));
      iVar4 = strcmp(local_80,*ppcVar6);
      if (iVar4 == 0) goto LAB_001a42f8;
    }
    iVar3 = FUN_001a3e20(param_1);
    if (((iVar3 == -1) || (pcVar2 = (char *)FUN_001a313c(), pcVar2 == (char *)0x0)) ||
       (iVar3 = strcmp(local_88,pcVar2), iVar3 == 0)) {
      ppcVar6 = (char **)0x0;
    }
    else {
      ppcVar6 = (char **)FUN_001a4238(pcVar2);
    }
  }
LAB_001a42f8:
  if (local_1c == **(int **)(iVar5 + DAT_001a4314)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ppcVar6);
}


