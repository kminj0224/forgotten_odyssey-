/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eac88  Symbol: FUN_001eac88 */

int * FUN_001eac88(int *param_1,char *param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  size_t sVar7;
  undefined4 *puVar8;
  
  if (param_2 == (char *)0x0) {
    iVar5 = (int)param_1 + *(int *)(*param_1 + -0xc);
    FUN_001d1404(iVar5,*(uint *)(iVar5 + 0x14) | 1);
    return param_1;
  }
  sVar1 = strlen(param_2);
  puVar2 = (undefined4 *)operator_new__(sVar1 << 2);
  if (sVar1 != 0) {
    cVar6 = *param_2;
    piVar3 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x80);
    if (piVar3 != (int *)0x0) {
      sVar7 = 0;
      puVar8 = puVar2;
      do {
        uVar4 = (**(code **)(*piVar3 + 0x28))(piVar3,cVar6);
        sVar7 = sVar7 + 1;
        *puVar8 = uVar4;
        if (sVar7 == sVar1) goto LAB_001ead24;
        param_2 = param_2 + 1;
        cVar6 = *param_2;
        piVar3 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x80);
        puVar8 = puVar8 + 1;
      } while (piVar3 != (int *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
LAB_001ead24:
  FUN_001ea858(param_1,puVar2,sVar1);
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete__(puVar2);
  }
  return param_1;
}


