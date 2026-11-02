/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019541c  Symbol: FUN_0019541c */

void FUN_0019541c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code **ppcVar5;
  int iVar6;
  
  iVar1 = DAT_001954bc;
  iVar6 = DAT_001954b8 + 0x195428;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x50);
  }
  do {
    if (param_2 == (int *)0x0) {
      return;
    }
    piVar2 = (int *)param_2[4];
    if (3 < *param_2 - 1U) {
      FUN_00194f00(0,iVar6 + DAT_001954c0);
      return;
    }
    if (param_2[3] != 0) {
      FUN_0019541c(param_1);
    }
    iVar3 = param_2[2];
    if (iVar4 == 0) {
      if (iVar3 != 0) {
        (***(code ***)(iVar6 + iVar1))(iVar3);
      }
      iVar3 = param_2[6];
      if (iVar3 != 0) {
        ppcVar5 = *(code ***)(iVar6 + iVar1);
        goto LAB_001954a2;
      }
    }
    else {
      if ((iVar3 != 0) && (iVar3 = FUN_0019ccb4(iVar4), iVar3 == 0)) {
        (***(code ***)(iVar6 + iVar1))(param_2[2]);
      }
      if ((param_2[6] != 0) && (iVar3 = FUN_0019ccb4(iVar4), iVar3 == 0)) {
        ppcVar5 = *(code ***)(iVar6 + iVar1);
        iVar3 = param_2[6];
LAB_001954a2:
        (**ppcVar5)(iVar3);
      }
    }
    (***(code ***)(iVar6 + iVar1))(param_2);
    param_2 = piVar2;
  } while( true );
}


