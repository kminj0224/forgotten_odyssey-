/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a58d8  Symbol: FUN_001a58d8 */

undefined4 FUN_001a58d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_001a5938 + 0x1a58e4;
  if (param_1 != (int *)0x0) {
    puVar3 = *(undefined4 **)*param_1;
    while ((puVar3 != (undefined4 *)*param_1 &&
           (iVar1 = (*(code *)param_1[2])
                              (puVar3[2],param_2,(code *)param_1[2],(undefined4 *)*param_1,param_4),
           iVar1 < 0))) {
      puVar3 = (undefined4 *)*puVar3;
    }
    piVar2 = (int *)(***(code ***)(iVar4 + DAT_001a593c))(0xc);
    if (piVar2 != (int *)0x0) {
      piVar5 = (int *)puVar3[1];
      piVar2[2] = param_2;
      *piVar2 = *piVar5;
      iVar4 = *piVar5;
      *piVar5 = (int)piVar2;
      *(int **)(iVar4 + 4) = piVar2;
      piVar2[1] = (int)piVar5;
      return 0;
    }
    (***(code ***)(iVar4 + DAT_001a5944))
              (**(undefined4 **)(iVar4 + DAT_001a5940),iVar4 + DAT_001a5948);
  }
  return 1;
}


