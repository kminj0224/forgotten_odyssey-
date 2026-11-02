/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af0fc  Symbol: FUN_001af0fc */

void FUN_001af0fc(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  
  iVar1 = param_2[2];
  iVar2 = param_2[4];
  iVar8 = param_2[6];
  if (iVar2 < 1) {
    return;
  }
  iVar6 = param_2[5];
  if (iVar2 < iVar6) {
    iVar3 = param_2[7] - iVar8;
    if (iVar3 < iVar2) goto LAB_001af1b2;
LAB_001af12a:
    iVar6 = param_2[1] - iVar8;
    iVar3 = iVar2;
    if (iVar2 <= iVar6) goto LAB_001af132;
  }
  else {
    iVar3 = param_2[7] - iVar8;
    iVar2 = iVar6;
    if (iVar6 <= iVar3) goto LAB_001af12a;
LAB_001af1b2:
    iVar6 = param_2[1] - iVar8;
    if (iVar3 <= iVar6) goto LAB_001af132;
  }
  iVar3 = iVar6;
LAB_001af132:
  if (0 < iVar3) {
    iVar8 = iVar8 * iVar1;
    iVar2 = 0;
    while( true ) {
      iVar6 = iVar3 * iVar1;
      if (param_3 == 0) {
        uVar5 = *(undefined4 *)(iVar2 * 4 + *param_2);
        pcVar7 = (code *)param_2[0xc];
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 * 4 + *param_2);
        pcVar7 = (code *)param_2[0xd];
      }
      (*pcVar7)(param_1,param_2 + 0xc,uVar5,iVar8,iVar6);
      iVar4 = param_2[5];
      iVar2 = iVar2 + iVar4;
      if (param_2[4] <= iVar2) break;
      iVar3 = param_2[4] - iVar2;
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      iVar4 = param_2[7] - (iVar2 + param_2[6]);
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      iVar4 = param_2[1] - (iVar2 + param_2[6]);
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      if (iVar3 < 1) {
        return;
      }
      iVar8 = iVar8 + iVar6;
    }
  }
  return;
}


