/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017cc78  Symbol: FUN_0017cc78 */

char * FUN_0017cc78(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  int local_28;
  int local_24;
  
  iVar7 = DAT_0017cdc0 + 0x17cc82;
  cVar8 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if ((0x19 < (byte)(cVar8 + 0xbfU)) && (0x19 < (byte)(cVar8 + 0x9fU))) {
    FUN_0017b7fc(param_1,0x4f,0);
    return (char *)0x0;
  }
  pcVar2 = (char *)(***(code ***)(iVar7 + DAT_0017cdc4))(10);
  if (pcVar2 == (char *)0x0) {
    FUN_00179430(param_1,0);
    return (char *)0x0;
  }
  *pcVar2 = cVar8;
  FUN_0017a4a4(param_1);
  iVar1 = DAT_0017cdc8;
  cVar8 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  local_24 = 10;
  local_28 = 1;
  while ((((((byte)(cVar8 + 0xbfU) < 0x1a || ((byte)(cVar8 + 0x9fU) < 0x1a)) ||
           ((byte)(cVar8 - 0x30U) < 10)) || ((cVar8 == '.' || (cVar8 == '-')))) || (cVar8 == '_')))
  {
    iVar4 = local_28 + 1;
    pcVar3 = pcVar2;
    if (local_24 <= iVar4) {
      local_24 = local_24 << 1;
      pcVar3 = (char *)(***(code ***)(iVar7 + iVar1))(pcVar2,local_24);
      if (pcVar3 == (char *)0x0) {
        FUN_00179430(param_1,0);
        (***(code ***)(iVar7 + DAT_0017cdcc))(pcVar2);
        return (char *)0x0;
      }
    }
    pcVar3[local_28] = cVar8;
    FUN_0017a4a4(param_1);
    iVar5 = *(int *)(param_1 + 0x24);
    pcVar6 = *(char **)(iVar5 + 0x10);
    cVar8 = *pcVar6;
    pcVar2 = pcVar3;
    local_28 = iVar4;
    if (cVar8 == '\0') {
      if (((*(int *)(param_1 + 0x124) == 0) && (500 < (int)pcVar6 - *(int *)(iVar5 + 0xc))) &&
         (*(int *)(iVar5 + 0x14) - (int)pcVar6 <= DAT_0017cdd0)) {
        FUN_0017cc50(param_1);
      }
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
          0xfa)) {
        FUN_0017c738(param_1);
      }
      cVar8 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    }
  }
  pcVar2[local_28] = '\0';
  return pcVar2;
}


