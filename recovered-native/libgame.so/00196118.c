/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196118  Symbol: FUN_00196118 */

undefined4 FUN_00196118(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = DAT_00196184 + 0x196124;
  if (*(int *)(iVar3 + DAT_00196188) == 0) {
    FUN_001958f0();
  }
  iVar2 = iVar3 + DAT_00196188;
  puVar6 = (undefined4 *)(iVar2 + 4);
  do {
    puVar5 = (undefined4 *)*puVar6;
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = FUN_0019c30c(*puVar5,param_1);
  } while ((iVar1 == 0) && (puVar6 = puVar6 + 1, puVar6 != (undefined4 *)(iVar2 + 0x194)));
  piVar4 = (int *)(iVar3 + DAT_0019618c + (((int)puVar5 - (iVar3 + DAT_0019618c) >> 2) + 1) * 4);
  do {
    if (*piVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_0019c30c(*piVar4,param_2);
    piVar4 = piVar4 + 1;
  } while (iVar3 == 0);
  return 1;
}


