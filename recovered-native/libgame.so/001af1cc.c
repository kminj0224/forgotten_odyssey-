/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af1cc  Symbol: FUN_001af1cc */

void FUN_001af1cc(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  
  iVar5 = param_2[2];
  iVar1 = param_2[4];
  iVar8 = param_2[6];
  if (iVar1 < 1) {
    return;
  }
  iVar6 = param_2[5];
  if (iVar1 < iVar6) {
    iVar2 = param_2[7] - iVar8;
    if (iVar2 < iVar1) goto LAB_001af284;
LAB_001af1fc:
    iVar6 = param_2[1] - iVar8;
    iVar2 = iVar1;
    if (iVar1 <= iVar6) goto LAB_001af204;
  }
  else {
    iVar2 = param_2[7] - iVar8;
    iVar1 = iVar6;
    if (iVar6 <= iVar2) goto LAB_001af1fc;
LAB_001af284:
    iVar6 = param_2[1] - iVar8;
    if (iVar2 <= iVar6) goto LAB_001af204;
  }
  iVar2 = iVar6;
LAB_001af204:
  if (0 < iVar2) {
    iVar8 = iVar8 * iVar5 * 0x80;
    iVar1 = 0;
    while( true ) {
      iVar6 = iVar2 * iVar5 * 0x80;
      if (param_3 == 0) {
        uVar4 = *(undefined4 *)(iVar1 * 4 + *param_2);
        pcVar7 = (code *)param_2[0xc];
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 * 4 + *param_2);
        pcVar7 = (code *)param_2[0xd];
      }
      (*pcVar7)(param_1,param_2 + 0xc,uVar4,iVar8,iVar6);
      iVar3 = param_2[5];
      iVar1 = iVar1 + iVar3;
      if (param_2[4] <= iVar1) break;
      iVar2 = param_2[4] - iVar1;
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = param_2[7] - (iVar1 + param_2[6]);
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = param_2[1] - (iVar1 + param_2[6]);
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar8 = iVar8 + iVar6;
    }
  }
  return;
}


