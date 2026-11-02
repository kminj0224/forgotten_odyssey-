/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001951d8  Symbol: FUN_001951d8 */

void FUN_001951d8(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = DAT_001952ec + 0x1951e4;
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (param_3 != 0) {
    FUN_0018a990(param_1,iVar5 + DAT_001952f0,param_3,param_4,param_4);
  }
  uVar4 = *param_2;
  if (uVar4 == 2) {
    if (param_2[6] != 0) {
      FUN_0018ab00(param_1);
      FUN_0018a990(param_1,iVar5 + DAT_001952f8);
    }
    FUN_0018ab00(param_1,param_2[2]);
    goto LAB_001952ba;
  }
  if (uVar4 < 3) {
    if (uVar4 == 1) {
      FUN_0018a990(param_1,iVar5 + DAT_001952f4);
      goto LAB_001952ba;
    }
LAB_001952b0:
    FUN_00194f00(0,iVar5 + DAT_00195304);
  }
  else {
    if (uVar4 == 3) {
      FUN_001951d8(param_1,(int *)param_2[3],*(int *)param_2[3] - 3U < 2);
      FUN_0018a990(param_1,iVar5 + DAT_001952fc);
      piVar1 = (int *)param_2[4];
      if (*piVar1 == 4) goto LAB_001952a0;
      if (*piVar1 == 3) {
LAB_0019529a:
        if (piVar1[1] != 1) goto LAB_001952a0;
      }
LAB_001952aa:
      uVar3 = 0;
    }
    else {
      if (uVar4 != 4) goto LAB_001952b0;
      FUN_001951d8(param_1,(int *)param_2[3],*(int *)param_2[3] - 3U < 2);
      FUN_0018a990(param_1,iVar5 + DAT_00195300);
      piVar1 = (int *)param_2[4];
      if (*piVar1 != 3) {
        if (*piVar1 == 4) goto LAB_0019529a;
        goto LAB_001952aa;
      }
LAB_001952a0:
      uVar3 = 1;
    }
    FUN_001951d8(param_1,piVar1,uVar3);
  }
LAB_001952ba:
  if (param_3 != 0) {
    FUN_0018a990(param_1,iVar5 + DAT_00195308);
  }
  uVar4 = param_2[1];
  iVar2 = DAT_00195310;
  if (((uVar4 == 3) || (iVar2 = DAT_00195314, uVar4 == 4)) || (iVar2 = DAT_0019530c, uVar4 == 2)) {
    FUN_0018a990(param_1,iVar5 + iVar2);
  }
  return;
}


