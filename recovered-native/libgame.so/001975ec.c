/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001975ec  Symbol: FUN_001975ec */

void ** FUN_001975ec(void *param_1,void *param_2,int param_3,int param_4,int param_5,int param_6)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  int **ppiVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  code **ppcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  FUN_0017c498();
  ppvVar1 = (void **)FUN_0018fb60(param_6);
  iVar10 = DAT_0019773c + 0x19760a;
  if (ppvVar1 == (void **)0x0) {
    return (void **)0x0;
  }
  ppvVar2 = (void **)FUN_001974d0();
  if (ppvVar2 == (void **)0x0) {
    FUN_0018ff94(ppvVar1);
    return (void **)0x0;
  }
  if ((param_6 == 1) || (ppvVar1[3] != (void *)0x0)) {
    ppvVar2[0x40] = (void *)0x1;
  }
  if (param_1 != (void *)0x0) {
    if (*ppvVar2 != *(void **)(iVar10 + DAT_00197740)) {
      (***(code ***)(iVar10 + DAT_00197744))();
    }
    pvVar3 = (void *)(***(code ***)(iVar10 + DAT_00197748))(0x80);
    *ppvVar2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
      ppcVar8 = *(code ***)(iVar10 + DAT_00197744);
      (**ppcVar8)(ppvVar1);
      pcVar6 = *ppcVar8;
      ppvVar1 = ppvVar2;
      goto LAB_00197666;
    }
    memcpy(pvVar3,param_1,0x80);
    if (param_2 != (void *)0x0) {
      ppvVar2[1] = param_2;
    }
  }
  if (param_5 == 0) {
    ppvVar2[0x2d] = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_0018f794(param_5);
    ppvVar2[0x2d] = pvVar3;
  }
  ppiVar4 = (int **)FUN_001960d0(ppvVar2);
  if (ppiVar4 != (int **)0x0) {
    if (param_5 == 0) {
      ppiVar4[1] = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_00193d34(param_5);
      ppiVar4[1] = piVar7;
    }
    *ppiVar4 = (int *)ppvVar1;
                    /* WARNING: Load size is inaccurate */
    ppiVar4[3] = *ppvVar1[4];
                    /* WARNING: Load size is inaccurate */
    ppiVar4[4] = *ppvVar1[4];
                    /* WARNING: Load size is inaccurate */
    ppiVar4[5] = (int *)(*ppvVar1[4] + *(int *)((int)ppvVar1[4] + 4));
    FUN_0017bfa0(ppvVar2,ppiVar4);
    if ((((0 < param_4) && (param_3 != 0)) && (piVar7 = (int *)ppvVar2[9], piVar7 != (int *)0x0)) &&
       (iVar10 = *piVar7, iVar10 != 0)) {
      iVar5 = piVar7[3];
      iVar9 = piVar7[4];
      iVar11 = **(int **)(iVar10 + 0x10);
      FUN_00190bbc(iVar10,param_4,param_3);
                    /* WARNING: Load size is inaccurate */
      *(int *)((int)ppvVar2[9] + 0xc) = **(int **)(*ppvVar2[9] + 0x10) + (iVar5 - iVar11);
      *(int *)((int)ppvVar2[9] + 0x10) = *(int *)((int)ppvVar2[9] + 0xc) + (iVar9 - iVar5);
                    /* WARNING: Load size is inaccurate */
      piVar7 = *(int **)(*ppvVar2[9] + 0x10);
      *(int *)((int)ppvVar2[9] + 0x14) = *piVar7 + piVar7[1];
    }
    ppvVar2[0x49] = (void *)0x1;
    return ppvVar2;
  }
  FUN_00179908(ppvVar2);
  pcVar6 = **(code ***)(iVar10 + DAT_00197744);
LAB_00197666:
  (*pcVar6)(ppvVar1);
  return (void **)0x0;
}


