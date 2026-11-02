/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00186a30  Symbol: FUN_00186a30 */

undefined4 FUN_00186a30(int param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_3c;
  int local_38;
  int local_30;
  char *local_20;
  int local_1c [2];
  
  local_20 = (char *)0x0;
  iVar9 = DAT_00186cd8 + 0x186a46;
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    local_30 = 0x22;
  }
  else {
    if (cVar1 != '\'') {
      FUN_0017b7fc(param_1,0x24,0);
      return 0;
    }
    local_30 = 0x27;
  }
  pcVar2 = (char *)(***(code ***)(iVar9 + DAT_00186cdc))(100);
  if (pcVar2 == (char *)0x0) {
    FUN_00179430(param_1,0);
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0xac) = 0xb;
  if ((*(int *)(param_1 + 0x124) == 0) && (*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  FUN_0017a4a4(param_1);
  iVar3 = FUN_0017a70c(param_1,local_1c);
  iVar5 = DAT_00186ce0;
  local_38 = 100;
  local_3c = 0;
LAB_00186baa:
  if (0xff < iVar3) {
    if ((((uint)(iVar3 + DAT_00186ce4) <= DAT_00186ce8) || (iVar3 - 0x100U <= DAT_00186cec)) ||
       ((uint)(iVar3 + DAT_00186cf0) <= DAT_00186cf4)) goto LAB_00186bde;
LAB_00186bf0:
    pcVar2[local_3c] = '\0';
    iVar8 = DAT_00186cfc;
    iVar5 = iVar9 + DAT_00186cf8;
    local_20 = pcVar2;
    goto LAB_00186c7e;
  }
  if (((1 < iVar3 - 9U) && (iVar3 != 0xd)) && (iVar3 < 0x20)) goto LAB_00186bf0;
LAB_00186bde:
  if ((iVar3 == local_30) && (*(int *)(param_1 + 0x24) == iVar8)) goto LAB_00186bf0;
  pcVar4 = pcVar2;
  if (local_38 <= local_3c + 5) {
    local_38 = local_38 * 2;
    pcVar4 = (char *)(***(code ***)(iVar9 + iVar5))(pcVar2,local_38);
    if (pcVar4 == (char *)0x0) goto code_r0x00186ae4;
  }
  if (local_1c[0] == 1) {
    pcVar4[local_3c] = (char)iVar3;
    local_3c = local_3c + 1;
  }
  else {
    iVar3 = FUN_0017ab20(pcVar4 + local_3c,iVar3);
    local_3c = local_3c + iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (**(char **)(iVar3 + 0x10) == '\n') {
    iVar6 = 1;
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    iVar3 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar6 = *(int *)(iVar3 + 0x20) + 1;
  }
  *(int *)(iVar3 + 0x20) = iVar6;
  *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
       *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  while( true ) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((*pcVar2 != '\0') || (*(int *)(param_1 + 0x28) < 2)) break;
    FUN_0017c6c4(param_1);
  }
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - (int)pcVar2 < 0xfa)) {
    FUN_0017c738(param_1);
  }
  iVar3 = FUN_0017a70c(param_1,local_1c);
  pcVar2 = pcVar4;
  if (iVar3 == 0) {
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
    iVar3 = FUN_0017a70c(param_1,local_1c);
  }
  goto LAB_00186baa;
LAB_00186c7e:
  cVar1 = *local_20;
  if (cVar1 == '\0') goto LAB_00186c88;
  if ((cVar1 == '%') || ((cVar1 == '&' && (local_20[1] != '#')))) {
    local_20 = local_20 + 1;
    iVar6 = FUN_0017d3f8(param_1,&local_20);
    if ((iVar6 == 0) || (*local_20 != ';')) {
      FUN_0017bd20(param_1,0x57,iVar5,cVar1);
    }
    if (((cVar1 == '%') && (*(int *)(param_1 + 0xd8) == 1)) && (*(int *)(param_1 + 0x28) == 1)) {
      FUN_0017b7fc(param_1,0x58,0);
    }
    if (iVar6 != 0) {
      (***(code ***)(iVar9 + iVar8))(iVar6);
    }
    if (*local_20 == '\0') goto LAB_00186c88;
  }
  local_20 = local_20 + 1;
  goto LAB_00186c7e;
code_r0x00186ae4:
  FUN_00179430(param_1,0);
  goto LAB_00186c98;
LAB_00186c88:
  if (iVar3 == local_30) {
    FUN_0017a4a4(param_1);
    uVar7 = FUN_0018357c(param_1,pcVar2,2,0,0,0);
    if (param_2 == (char **)0x0) {
      (***(code ***)(iVar9 + DAT_00186cfc))(pcVar2);
      return uVar7;
    }
    *param_2 = pcVar2;
    return uVar7;
  }
  FUN_0017b7fc(param_1,0x25,0);
LAB_00186c98:
  (***(code ***)(iVar9 + DAT_00186cfc))(pcVar2);
  return 0;
}


