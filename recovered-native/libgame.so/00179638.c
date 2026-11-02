/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179638  Symbol: FUN_00179638 */

int * FUN_00179638(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_00179720 + 0x179644;
  if (**(int **)(iVar5 + DAT_00179724) != 0) {
    (***(code ***)(iVar5 + DAT_00179728))
              (**(undefined4 **)(iVar5 + DAT_0017972c),iVar5 + DAT_00179730,param_2);
  }
  if (param_1 != 0) {
    iVar1 = FUN_0018fdf4(param_2,0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_001795e0(param_1);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      *piVar2 = iVar1;
      piVar2 = (int *)FUN_0018f748(param_1,piVar2);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar1 = piVar2[1];
      if (piVar2[1] == 0) {
        iVar1 = param_2;
      }
      iVar1 = FUN_0019c904(iVar1);
      iVar3 = FUN_0018f794();
      if (piVar2[1] != 0) {
        (***(code ***)(iVar5 + DAT_0017973c))();
      }
      iVar4 = FUN_00193d34(iVar1);
      piVar2[1] = iVar4;
      if (iVar1 != 0) {
        (***(code ***)(iVar5 + DAT_0017973c))(iVar1);
      }
      iVar1 = *piVar2;
      piVar2[2] = iVar3;
      iVar5 = **(int **)(iVar1 + 0x10);
      piVar2[3] = iVar5;
      piVar2[4] = **(int **)(iVar1 + 0x10);
      piVar2[5] = iVar5 + *(int *)(*(int *)(iVar1 + 0x10) + 4);
      if (iVar3 == 0) {
        return piVar2;
      }
      if (*(int *)(param_1 + 0xb4) != 0) {
        return piVar2;
      }
      iVar5 = FUN_0019c904(iVar3);
      *(int *)(param_1 + 0xb4) = iVar5;
      return piVar2;
    }
    iVar1 = DAT_00179738;
    if (param_2 == 0) {
      param_2 = 0;
      iVar1 = DAT_00179734;
    }
    FUN_001900d0(param_1,iVar5 + iVar1,param_2);
  }
  return (int *)0x0;
}


