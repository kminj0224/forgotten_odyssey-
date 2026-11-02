/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179e24  Symbol: FUN_00179e24 */

undefined4 FUN_00179e24(int param_1,int *param_2,char **param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_00179f80 + 0x179e30;
  if ((param_3 == (char **)0x0) || (param_2 == (int *)0x0)) {
LAB_00179f74:
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = *param_2;
    if (iVar4 == 0) {
      iVar5 = DAT_00179f98;
      if (param_2[6] == 0) {
LAB_00179f6a:
        FUN_00179364(param_1,iVar6 + iVar5,0);
        goto LAB_00179f74;
      }
    }
    else if (*(char ***)(iVar4 + 0xc) == (char **)0x0) {
      *(char ***)(iVar4 + 0xc) = param_3;
      if ((*(int *)(*param_2 + 0x10) != 0) && (*(int *)(*(int *)(*param_2 + 0x10) + 4) != 0)) {
        pcVar2 = *param_3;
        if ((pcVar2 != (char *)0x0) &&
           ((((iVar4 = strcmp(pcVar2,(char *)(iVar6 + DAT_00179f84)), iVar4 == 0 ||
              (iVar4 = strcmp(pcVar2,(char *)(iVar6 + DAT_00179f88)), iVar4 == 0)) &&
             (pcVar2 = (char *)param_2[4], *pcVar2 == -1)) && (pcVar2[1] == -2)))) {
          param_2[4] = (int)(pcVar2 + 2);
        }
        if (((*param_3 != (char *)0x0) &&
            (iVar4 = strcmp(*param_3,(char *)(iVar6 + DAT_00179f8c)), iVar4 == 0)) &&
           ((pcVar2 = (char *)param_2[4], *pcVar2 == -2 && (pcVar2[1] == -1)))) {
          param_2[4] = (int)(pcVar2 + 2);
        }
        if (((*param_3 != (char *)0x0) &&
            (iVar4 = strcmp(*param_3,(char *)(iVar6 + DAT_00179f90)), iVar4 == 0)) &&
           ((pcVar2 = (char *)param_2[4], *pcVar2 == -0x11 &&
            ((pcVar2[1] == -0x45 && (pcVar2[2] == -0x41)))))) {
          param_2[4] = (int)(pcVar2 + 3);
        }
        iVar3 = param_2[4];
        iVar4 = param_2[3];
        FUN_0018a7b0(*(undefined4 *)(*param_2 + 0x10),iVar3 - iVar4);
        *(undefined4 *)(*param_2 + 0x14) = *(undefined4 *)(*param_2 + 0x10);
        iVar5 = *param_2;
        uVar1 = FUN_00189cd8();
        *(undefined4 *)(iVar5 + 0x10) = uVar1;
        *(int *)(*param_2 + 0x20) = iVar3 - iVar4;
        iVar4 = *param_2;
        iVar3 = *(int *)(*(int *)(iVar4 + 0x14) + 4);
        if (*(int *)(param_1 + 0x20) == 0) {
          iVar4 = FUN_001a3934(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10));
        }
        else {
          iVar4 = FUN_001a3b7c();
        }
        iVar5 = DAT_00179f94;
        if (iVar4 < 0) goto LAB_00179f6a;
        iVar6 = *param_2;
        *(int *)(iVar6 + 0x20) =
             (iVar3 + *(int *)(iVar6 + 0x20)) - *(int *)(*(int *)(iVar6 + 0x14) + 4);
        iVar6 = **(int **)(*param_2 + 0x10);
        param_2[4] = iVar6;
        param_2[3] = iVar6;
        param_2[5] = iVar6 + *(int *)(*(int *)(*param_2 + 0x10) + 4);
      }
    }
    else if (*(char ***)(iVar4 + 0xc) != param_3) {
      FUN_001a3260();
      *(char ***)(*param_2 + 0xc) = param_3;
    }
    uVar1 = 0;
  }
  return uVar1;
}


