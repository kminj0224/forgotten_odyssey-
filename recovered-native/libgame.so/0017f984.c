/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017f984  Symbol: FUN_0017f984 */

char * FUN_0017f984(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_1c [2];
  
  if (param_3 == (char *)0x0) {
    pcVar2 = (char *)FUN_0017f910();
    return pcVar2;
  }
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  for (pcVar2 = param_3; (cVar1 = *pcVar3, cVar1 != '\0' && (*pcVar2 == cVar1)); pcVar2 = pcVar2 + 1
      ) {
    pcVar3 = pcVar3 + 1;
  }
  if ((*pcVar2 == '\0') && (pcVar2 = param_2, cVar1 == ':')) {
    while( true ) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      if ((cVar1 == '\0') || (*pcVar2 != cVar1)) break;
      pcVar2 = pcVar2 + 1;
    }
    if ((*pcVar2 == '\0') &&
       ((((cVar1 == '>' || ((byte)(cVar1 - 9U) < 2)) || (cVar1 == ' ')) || (cVar1 == '\r')))) {
      *(char **)(*(int *)(param_1 + 0x24) + 0x10) = pcVar3;
      return (char *)0x1;
    }
  }
  pcVar2 = (char *)FUN_0017f794(param_1,local_1c);
  if (pcVar2 != param_2) {
    return pcVar2;
  }
  if (param_3 == local_1c[0]) {
    return (char *)0x1;
  }
  return pcVar2;
}


