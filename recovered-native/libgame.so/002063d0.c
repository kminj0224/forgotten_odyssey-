/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002063d0  Symbol: FUN_002063d0 */

int FUN_002063d0(int *param_1,int *param_2,undefined *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar4 = (int *)param_1[2];
  piVar6 = (int *)param_1[3];
  *param_3 = 1;
  if (piVar4 < piVar6) {
    iVar3 = *piVar4;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x24))();
  }
  iVar5 = 0;
  do {
    while( true ) {
      if (iVar3 == -1) {
        return iVar5;
      }
      piVar6 = (int *)param_1[3];
      piVar4 = (int *)param_1[2];
      iVar1 = (int)piVar6 - (int)piVar4 >> 2;
      if (iVar1 < 2) break;
      iVar3 = (**(code **)(*param_2 + 0x30))(param_2,piVar4,iVar1);
      param_1[2] = param_1[2] + iVar3 * 4;
      iVar5 = iVar5 + iVar3;
      if (iVar3 < iVar1) {
LAB_002064bc:
        *param_3 = 0;
        return iVar5;
      }
LAB_0020644c:
      iVar3 = (**(code **)(*param_1 + 0x24))(param_1);
    }
    piVar2 = (int *)param_2[5];
    if (piVar2 < (int *)param_2[6]) {
      *piVar2 = iVar3;
      param_2[5] = (int)(piVar2 + 1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x34))(param_2,iVar3);
      if (iVar3 == -1) goto LAB_002064bc;
      piVar4 = (int *)param_1[2];
      piVar6 = (int *)param_1[3];
    }
    iVar5 = iVar5 + 1;
    if (piVar4 < piVar6) {
      iVar3 = *piVar4;
      param_1[2] = (int)(piVar4 + 1);
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    }
    if (iVar3 == -1) {
      return iVar5;
    }
    if ((int *)param_1[3] <= (int *)param_1[2]) goto LAB_0020644c;
    iVar3 = *(int *)param_1[2];
  } while( true );
}


