/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a30d4  Symbol: FUN_001a30d4 */

void FUN_001a30d4(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code **ppcVar6;
  
  iVar1 = DAT_001a3138;
  iVar4 = DAT_001a3130 + 0x1a30e0;
  piVar3 = (int *)(iVar4 + DAT_001a3134);
  if (*piVar3 != 0) {
    for (iVar5 = 0; iVar2 = DAT_001a3138, iVar5 < piVar3[1]; iVar5 = iVar5 + 1) {
      if (*(int *)(*piVar3 + iVar5 * 8) != 0) {
        (***(code ***)(iVar4 + iVar1))();
      }
      if (*(int *)(*piVar3 + iVar5 * 8 + 4) != 0) {
        (***(code ***)(iVar4 + iVar1))();
      }
    }
    piVar3[1] = 0;
    ppcVar6 = *(code ***)(iVar4 + iVar2);
    piVar3[2] = 0;
    (**ppcVar6)(*piVar3);
    *piVar3 = 0;
  }
  return;
}


