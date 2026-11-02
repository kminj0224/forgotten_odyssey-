/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a3a8  Symbol: FUN_0017a3a8 */

void FUN_0017a3a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__format;
  code **ppcVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_0017c498();
  iVar1 = __divsi3(param_1,DAT_0017a41c);
  iVar4 = DAT_0017a420 + 0x17a3c2;
  if (iVar1 != 2) {
    __format = (char *)(iVar4 + DAT_0017a42c);
    (***(code ***)(iVar4 + DAT_0017a424))(**(undefined4 **)(iVar4 + DAT_0017a428),__format,iVar1,2);
    fprintf((FILE *)(*(int *)(iVar4 + DAT_0017a430) + 0xa8),__format,iVar1,2);
  }
  if (DAT_0017a434 < param_1) {
    ppcVar3 = *(code ***)(iVar4 + DAT_0017a424);
    iVar1 = iVar4 + DAT_0017a438;
    uVar5 = **(undefined4 **)(iVar4 + DAT_0017a428);
    uVar2 = __divsi3(param_1,100);
    (**ppcVar3)(uVar5,iVar1,uVar2,0xcf);
  }
  return;
}


