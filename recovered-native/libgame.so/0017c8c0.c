/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c8c0  Symbol: FUN_0017c8c0 */

void ** FUN_0017c8c0(void *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void **ppvVar2;
  void *pvVar3;
  int *piVar4;
  size_t __n;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  
  iVar6 = DAT_0017ca70 + 0x17c8cc;
  if ((param_4 < 4) || (param_3 == 0)) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_001a2fd8(param_3,param_4);
  }
  iVar1 = FUN_0018fb60(local_2c);
  if (iVar1 == 0) {
    return (void **)0x0;
  }
  ppvVar2 = (void **)FUN_00179dd4();
  iVar5 = DAT_0017ca78;
  if (ppvVar2 == (void **)0x0) {
    FUN_00179430(0,iVar6 + DAT_0017ca74);
    FUN_0018ff94(iVar1);
    return (void **)0x0;
  }
  ppvVar2[0x5b] = (void *)0x1;
  pvVar3 = (void *)(***(code ***)(iVar6 + iVar5))((int)ppvVar2[0x30] * 0xc);
  ppvVar2[0x56] = pvVar3;
  if (pvVar3 == (void *)0x0) {
LAB_0017c936:
    FUN_00179430(ppvVar2,0);
    FUN_0018ff94(iVar1);
    FUN_00179908(ppvVar2);
  }
  else {
    if (param_1 != (void *)0x0) {
      if (*ppvVar2 != *(void **)(iVar6 + DAT_0017ca7c)) {
        (***(code ***)(iVar6 + DAT_0017ca80))();
      }
      pvVar3 = (void *)(***(code ***)(iVar6 + DAT_0017ca78))(0x80);
      *ppvVar2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_0017c936;
      memset(pvVar3,0,0x80);
      if (*(int *)((int)param_1 + 0x6c) == DAT_0017ca84) {
        __n = 0x80;
      }
      else {
        __n = 0x70;
      }
      memcpy(*ppvVar2,param_1,__n);
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
    piVar4 = (int *)FUN_001795e0(ppvVar2);
    if (piVar4 != (int *)0x0) {
      if (param_5 == 0) {
        piVar4[1] = 0;
LAB_0017c9e2:
        *piVar4 = iVar1;
        piVar4[3] = **(int **)(iVar1 + 0x10);
        piVar4[4] = **(int **)(iVar1 + 0x10);
        piVar4[5] = **(int **)(iVar1 + 0x10) + (*(int **)(iVar1 + 0x10))[1];
        FUN_0017bfa0(ppvVar2,piVar4);
        if ((param_4 == 0) || (param_3 == 0)) {
          ppvVar2[0x40] = (void *)0x0;
        }
        else {
          piVar4 = (int *)ppvVar2[9];
          if ((piVar4 != (int *)0x0) && (iVar6 = *piVar4, iVar6 != 0)) {
            iVar1 = piVar4[3];
            iVar7 = piVar4[4];
            iVar5 = **(int **)(iVar6 + 0x10);
            FUN_00190bbc(iVar6,param_4,param_3);
                    /* WARNING: Load size is inaccurate */
            *(int *)((int)ppvVar2[9] + 0xc) = **(int **)(*ppvVar2[9] + 0x10) + (iVar1 - iVar5);
            *(int *)((int)ppvVar2[9] + 0x10) = *(int *)((int)ppvVar2[9] + 0xc) + (iVar7 - iVar1);
                    /* WARNING: Load size is inaccurate */
            piVar4 = *(int **)(*ppvVar2[9] + 0x10);
            *(int *)((int)ppvVar2[9] + 0x14) = *piVar4 + piVar4[1];
          }
        }
        if (local_2c != 0) {
          FUN_00179fd4(ppvVar2,local_2c);
          return ppvVar2;
        }
        return ppvVar2;
      }
      iVar6 = FUN_00193d34(param_5);
      piVar4[1] = iVar6;
      if (iVar6 != 0) goto LAB_0017c9e2;
    }
    FUN_00179908(ppvVar2);
    FUN_0018ff94(iVar1);
  }
  return (void **)0x0;
}


