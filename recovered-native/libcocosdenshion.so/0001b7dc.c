/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001b7dc  Symbol: FUN_0001b7dc */

void FUN_0001b7dc(int param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  
  sVar2 = strlen(param_2);
  if (sVar2 == 0) {
    return;
  }
  sVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x104);
  do {
    while (cVar1 = param_2[sVar4], iVar3 == 0xff) {
      *(undefined *)(param_1 + 0x103) = 0;
      (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
      sVar4 = sVar4 + 1;
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
      *(char *)(param_1 + 4) = cVar1;
      *(undefined4 *)(param_1 + 0x104) = 1;
      *(char *)(param_1 + 0x108) = cVar1;
      iVar3 = 1;
      if (sVar4 == sVar2) {
        return;
      }
    }
    sVar4 = sVar4 + 1;
    *(char *)(param_1 + iVar3 + 4) = cVar1;
    *(int *)(param_1 + 0x104) = iVar3 + 1;
    *(char *)(param_1 + 0x108) = cVar1;
    iVar3 = iVar3 + 1;
  } while (sVar4 != sVar2);
  return;
}


