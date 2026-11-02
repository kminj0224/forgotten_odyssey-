/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ff44  Symbol: FUN_0017ff44 */

int FUN_0017ff44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x28) == 1) && (*(int *)(param_1 + 0xac) != 3)) {
    iVar5 = 0;
    pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    do {
      cVar1 = *pcVar3;
      if (((byte)(cVar1 - 9U) < 2) || (cVar1 == ' ')) {
        if (cVar1 == '\n') {
          *(int *)(*(int *)(param_1 + 0x24) + 0x1c) = *(int *)(*(int *)(param_1 + 0x24) + 0x1c) + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = 1;
        }
      }
      else if (cVar1 != '\r') {
        *(char **)(*(int *)(param_1 + 0x24) + 0x10) = pcVar3;
        return iVar5;
      }
      pcVar3 = pcVar3 + 1;
      iVar5 = iVar5 + 1;
      if (*pcVar3 == '\0') {
        *(char **)(*(int *)(param_1 + 0x24) + 0x10) = pcVar3;
        FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa,0,pcVar3,param_4);
        pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      }
    } while( true );
  }
  iVar5 = 0;
  do {
    bVar2 = **(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    while (((uVar4 = (uint)bVar2, uVar4 - 9 < 2 || (uVar4 == 0x20)) || (uVar4 == 0xd))) {
      FUN_0017a4a4(param_1);
      iVar5 = iVar5 + 1;
      bVar2 = **(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    }
    while (((uVar4 == 0 && (1 < *(int *)(param_1 + 0x28))) && (*(int *)(param_1 + 0xac) != 5))) {
      FUN_0017c6c4(param_1);
      uVar4 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    }
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
  } while (((uVar4 - 9 < 2) || (uVar4 == 0x20)) || (uVar4 == 0xd));
  return iVar5;
}


