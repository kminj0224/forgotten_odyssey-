/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196374  Symbol: FUN_00196374 */

undefined4 FUN_00196374(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = DAT_001963f0 + 0x19637e;
  if (param_1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar6 = param_1[0x2e];
    if (iVar6 != 0) {
      if (*(int *)(iVar4 + DAT_001963f4) == 0) {
        return 0;
      }
      piVar5 = (int *)(iVar4 + DAT_001963f8 + 0x14);
      do {
        if (*piVar5 == 0) {
          return 0;
        }
        iVar1 = FUN_0019c30c(iVar6);
        piVar5 = piVar5 + 1;
      } while (iVar1 == 0);
    }
    iVar4 = iVar4 + DAT_001963fc;
    FUN_00196190(param_1,iVar4);
    FUN_001961d4(param_1,iVar4);
    FUN_00195ca8(param_1,iVar4);
    if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x38), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1[1],iVar4,0,pcVar3,param_4);
    }
    uVar2 = 1;
  }
  return uVar2;
}


