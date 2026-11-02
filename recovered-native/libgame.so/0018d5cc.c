/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d5cc  Symbol: FUN_0018d5cc */

void FUN_0018d5cc(undefined4 param_1,int param_2,undefined4 param_3,char *param_4,int param_5)

{
  int iVar1;
  char *__format;
  char *__format_00;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *local_68;
  char acStack_50 [52];
  int local_1c;
  
  iVar4 = DAT_0018d6a4 + 0x18d5da;
  local_1c = **(int **)(iVar4 + DAT_0018d6a8);
  __format_00 = (char *)(iVar4 + DAT_0018d6ac);
  __format = (char *)(iVar4 + DAT_0018d6b0);
  iVar6 = 0;
  local_68 = param_4;
  while( true ) {
    for (piVar5 = *(int **)(param_2 + 0x30); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      if ((local_68 == (char *)piVar5[3]) || (iVar1 = FUN_0019c30c(local_68), iVar1 != 0))
      goto LAB_0018d660;
    }
    if ((((param_5 == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
        (*(int *)(iVar1 + 0x20) == iVar1)) ||
       (iVar1 = FUN_0018d558(param_1,iVar1,local_68), iVar1 != 1)) break;
LAB_0018d660:
    iVar6 = iVar6 + 1;
    if (iVar6 == DAT_0018d6b4) {
      piVar5 = (int *)0x0;
LAB_0018d68e:
      if (local_1c != **(int **)(iVar4 + DAT_0018d6a8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(piVar5);
      }
      return;
    }
    if (param_4 == (char *)0x0) {
      snprintf(acStack_50,0x32,__format_00,iVar6);
    }
    else {
      snprintf(acStack_50,0x32,__format,param_4,iVar6);
    }
    local_68 = acStack_50;
  }
  piVar5 = (int *)FUN_0018a4ec(0,param_3,local_68);
  if (piVar5 != (int *)0x0) {
    ppiVar3 = *(int ***)(param_2 + 0x30);
    if (*(int ***)(param_2 + 0x30) == (int **)0x0) {
      *(int **)(param_2 + 0x30) = piVar5;
    }
    else {
      do {
        ppiVar2 = ppiVar3;
        ppiVar3 = (int **)*ppiVar2;
      } while (ppiVar3 != (int **)0x0);
      *ppiVar2 = piVar5;
    }
  }
  goto LAB_0018d68e;
}


