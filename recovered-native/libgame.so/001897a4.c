/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001897a4  Symbol: FUN_001897a4 */

void FUN_001897a4(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = DAT_001897e8;
  iVar4 = DAT_001897e4 + 0x1897ae;
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)param_1[2];
    while (iVar2 = DAT_001897e8, piVar3 != (int *)0x0) {
      piVar3 = (int *)*piVar3;
      (***(code ***)(iVar4 + iVar1))();
    }
    piVar3 = (int *)*param_1;
    while (piVar3 != (int *)0x0) {
      piVar3 = (int *)*piVar3;
      (***(code ***)(iVar4 + iVar2))();
    }
    (***(code ***)(iVar4 + iVar2))(param_1);
  }
  return;
}


