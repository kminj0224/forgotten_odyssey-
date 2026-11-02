/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad560  Symbol: FUN_001ad560 */

void FUN_001ad560(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *__format;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = *(int *)(iVar4 + 0x14);
  if ((iVar3 < 1) || (*(int *)(iVar4 + 0x74) < iVar3)) {
    if ((*(int *)(iVar4 + 0x78) != 0) &&
       ((*(int *)(iVar4 + 0x7c) <= iVar3 && (iVar3 <= *(int *)(iVar4 + 0x80))))) {
      pcVar2 = *(char **)((iVar3 - *(int *)(iVar4 + 0x7c)) * 4 + *(int *)(iVar4 + 0x78));
      goto LAB_001ad57c;
    }
  }
  else {
    pcVar2 = *(char **)(iVar3 * 4 + *(int *)(iVar4 + 0x70));
LAB_001ad57c:
    __format = pcVar2;
    if (pcVar2 != (char *)0x0) goto LAB_001ad582;
  }
  *(int *)(iVar4 + 0x18) = iVar3;
  pcVar2 = **(char ***)(iVar4 + 0x70);
  __format = pcVar2;
LAB_001ad582:
  do {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') goto LAB_001ad594;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '%');
  if (*pcVar2 == 's') {
    sprintf(param_2,__format,iVar4 + 0x18);
  }
  else {
LAB_001ad594:
    sprintf(param_2,__format,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c),
            *(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),
            *(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c),
            *(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x34));
  }
  return;
}


