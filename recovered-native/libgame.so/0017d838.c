/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d838  Symbol: FUN_0017d838 */

int FUN_0017d838(int *param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char *local_1c [2];
  
  iVar6 = DAT_0017d9b0 + 0x17d844;
  if (param_2 == (char **)0x0) {
    return 0;
  }
  local_1c[0] = *param_2;
  if (local_1c[0] == (char *)0x0) {
    return 0;
  }
  if (*local_1c[0] != '&') {
    return 0;
  }
  local_1c[0] = local_1c[0] + 1;
  iVar1 = FUN_0017d3f8(param_1,local_1c);
  iVar2 = DAT_0017d9b8;
  if (iVar1 == 0) {
    FUN_0017bae0(param_1,0x44,iVar6 + DAT_0017d9b4);
LAB_0017d896:
    *param_2 = local_1c[0];
    return 0;
  }
  if (*local_1c[0] != ';') {
    FUN_0017b7fc(param_1,0x17,0);
    (***(code ***)(iVar6 + iVar2))(iVar1);
    goto LAB_0017d896;
  }
  local_1c[0] = local_1c[0] + 1;
  if ((-1 < param_1[0x5a] << 0xb) && (iVar2 = FUN_001a256c(iVar1), iVar2 != 0)) goto LAB_0017d994;
  param_1[0x6e] = param_1[0x6e] + 1;
  if ((*param_1 == 0) ||
     ((((pcVar4 = *(code **)(*param_1 + 0x14), pcVar4 == (code *)0x0 ||
        (iVar2 = (*pcVar4)(param_1[1],iVar1), iVar2 == 0)) &&
       ((-1 < param_1[0x5a] << 0xb || (iVar2 = FUN_001a256c(iVar1), iVar2 == 0)))) &&
      (((int *)param_1[1] != param_1 || (iVar2 = FUN_0019f210(param_1,iVar1), iVar2 == 0)))))) {
    if ((param_1[7] == 1) || ((param_1[0x16] == 0 && (param_1[0x17] == 0)))) {
      FUN_0017b798(param_1,0x1a,iVar6 + DAT_0017d9bc,iVar1);
    }
    else {
      FUN_0017bf54(param_1,0x1b,iVar6 + DAT_0017d9bc,iVar1);
    }
    iVar2 = 0;
    goto LAB_0017d994;
  }
  iVar5 = *(int *)(iVar2 + 0x30);
  if (iVar5 == 3) {
    uVar3 = 0x1c;
    iVar5 = iVar6 + DAT_0017d9c0;
  }
  else if (param_1[0x2b] == 0xc) {
    if (iVar5 == 2) {
      iVar5 = iVar6 + DAT_0017d9c4;
      uVar3 = 0x1d;
    }
    else {
      if (((*(int *)(iVar2 + 0x28) == 0) || (iVar5 == 6)) ||
         (iVar5 = FUN_0019c42c(*(int *)(iVar2 + 0x28),0x3c), iVar5 == 0)) goto LAB_0017d97e;
      uVar3 = 0x26;
      iVar5 = iVar6 + DAT_0017d9c8;
    }
  }
  else {
LAB_0017d97e:
    if (1 < *(int *)(iVar2 + 0x30) - 4U) goto LAB_0017d994;
    uVar3 = 0x1e;
    iVar5 = iVar6 + DAT_0017d9cc;
  }
  FUN_0017b798(param_1,uVar3,iVar5,iVar1);
LAB_0017d994:
  (***(code ***)(iVar6 + DAT_0017d9b8))(iVar1);
  *param_2 = local_1c[0];
  return iVar2;
}


