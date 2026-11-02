/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f794  Symbol: FUN_0018f794 */

void FUN_0018f794(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  code **ppcVar9;
  int iVar10;
  char *pcVar5;
  
  iVar1 = DAT_0018f874;
  iVar10 = DAT_0018f880 + 0x18f7a8;
  piVar7 = (int *)(iVar10 + DAT_0018f87c);
  iVar6 = *piVar7;
  *(undefined4 *)(&stack0xfffffff0 + DAT_0018f884 + DAT_0018f874) =
       **(undefined4 **)(iVar10 + DAT_0018f878);
  if (iVar6 == 0) {
    iVar6 = piVar7[1];
    if (iVar6 < 0xf) {
      piVar7[iVar6 * 4 + 2] = iVar10 + DAT_0018f888;
      piVar7[iVar6 * 4 + 3] = iVar10 + DAT_0018f88c;
      piVar7[iVar6 * 4 + 4] = iVar10 + DAT_0018f890;
      piVar7[iVar6 * 4 + 5] = iVar10 + DAT_0018f894;
      *piVar7 = 1;
      piVar7[1] = iVar6 + 1;
    }
    *(undefined4 *)(iVar10 + DAT_0018f87c) = 1;
  }
  sVar2 = DAT_0018f898;
  if (param_1 == (char *)0x0) {
LAB_0018f856:
    uVar4 = 0;
  }
  else {
    pcVar5 = &stack0xfffffff4 + iVar1;
    strncpy(pcVar5,param_1,DAT_0018f898);
    pcVar5[sVar2] = '\0';
    sVar2 = strlen(pcVar5);
    for (pcVar3 = pcVar5 + sVar2; (pcVar5 < pcVar3 && (*pcVar3 != '/')); pcVar3 = pcVar3 + -1) {
    }
    pcVar5 = &stack0xfffffff4 + iVar1;
    if (*pcVar3 == '/') {
      if (pcVar3 == pcVar5) {
        pcVar3[1] = '\0';
      }
      else {
        *pcVar3 = '\0';
      }
      pcVar8 = **(code ***)(iVar10 + DAT_0018f89c);
      pcVar5 = &stack0xfffffff4 + iVar1;
    }
    else {
      pcVar3 = getcwd(pcVar5,0x400);
      if (pcVar3 == (char *)0x0) goto LAB_0018f856;
      ppcVar9 = *(code ***)(iVar10 + DAT_0018f89c);
      pcVar5[DAT_0018f898] = '\0';
      pcVar8 = *ppcVar9;
    }
    uVar4 = (*pcVar8)(pcVar5);
  }
  if (*(int *)(&stack0xfffffff0 + DAT_0018f884 + iVar1) != **(int **)(iVar10 + DAT_0018f878)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


