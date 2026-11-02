/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00187390  Symbol: FUN_00187390 */

void FUN_00187390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = DAT_00187434 + 0x18739e;
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '[') {
    *(undefined4 *)(param_1 + 0xac) = 3;
    FUN_0017a4a4(param_1);
    do {
      pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      if (*pcVar3 == ']') goto LAB_00187400;
      iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x24);
      FUN_0017ff44(param_1);
      FUN_001872c8(param_1);
      FUN_00181300(param_1);
      while( true ) {
        pcVar1 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
        if ((*pcVar1 != '\0') || (*(int *)(param_1 + 0x28) < 2)) break;
        FUN_0017c6c4(param_1);
      }
    } while ((pcVar1 != pcVar3) || (iVar4 != *(int *)(*(int *)(param_1 + 0x24) + 0x24)));
    FUN_0017b7fc(param_1,1,iVar2 + DAT_00187438);
LAB_00187400:
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == ']') {
      FUN_0017a4a4(param_1);
      FUN_0017ff44(param_1);
    }
  }
  pcVar3 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (*pcVar3 != '>') {
    FUN_0017b7fc(param_1,0x3d,0,pcVar3,param_4);
  }
  FUN_0017a4a4(param_1);
  return;
}


