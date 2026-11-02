/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c4fc  Symbol: FUN_0017c4fc */

void FUN_0017c4fc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0017c574 + 0x17c506;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x6c) == DAT_0017c578)) &&
       ((*(int *)(iVar2 + 0x74) != 0 || (*(int *)(iVar2 + 0x78) != 0)))) {
      param_1[0x51] = 1;
    }
    iVar1 = FUN_0019d178(param_1[0x4a],iVar3 + DAT_0017c57c,3);
    iVar2 = DAT_0017c580;
    param_1[0x4e] = iVar1;
    iVar1 = FUN_0019d178(param_1[0x4a],iVar3 + iVar2,5);
    iVar2 = DAT_0017c584;
    param_1[0x4f] = iVar1;
    iVar3 = FUN_0019d178(param_1[0x4a],iVar3 + iVar2,0x24);
    param_1[0x50] = iVar3;
    if (((param_1[0x4e] == 0) || (param_1[0x4f] == 0)) || (iVar3 == 0)) {
      FUN_00179430(param_1,0);
    }
  }
  return;
}


