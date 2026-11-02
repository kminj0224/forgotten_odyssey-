/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001915e0  Symbol: FUN_001915e0 */

int * FUN_001915e0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_001916e4 + 0x1915ec;
  if (param_1 == 0) {
    piVar1 = (int *)FUN_00191314(param_2,param_3,param_4);
  }
  else {
    if (*(int *)(iVar4 + DAT_001916e8 + 0xc) == 0) {
      FUN_00191114();
    }
    piVar1 = (int *)(param_1 + -0x18);
    iVar2 = *(int *)(param_1 + -0x10);
    if (*(int *)(iVar4 + DAT_001916e8) == iVar2) {
      FUN_00190f28();
    }
    iVar3 = DAT_001916e8;
    if (*piVar1 == DAT_001916ec) {
      *piVar1 = DAT_001916fc;
      iVar3 = iVar4 + iVar3;
      FUN_0019c274(*(undefined4 *)(iVar3 + 0x10));
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) - *(int *)(param_1 + -0xc);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
      FUN_0019c278(*(undefined4 *)(iVar3 + 0x10));
      piVar1 = (int *)realloc(piVar1,param_2 + 0x18);
      if (piVar1 != (int *)0x0) {
        if (*(int *)(iVar3 + 0x14) == param_1) {
          (***(code ***)(iVar4 + DAT_001916f0))
                    (**(undefined4 **)(iVar4 + DAT_001916f4),iVar4 + DAT_00191700,param_1,piVar1[3],
                     param_2);
          FUN_00190f28();
        }
        *piVar1 = DAT_001916ec;
        piVar1[1] = 2;
        piVar1[3] = param_2;
        piVar1[2] = iVar2;
        iVar2 = DAT_001916e8;
        piVar1[4] = param_3;
        iVar2 = iVar4 + iVar2;
        piVar1[5] = param_4;
        FUN_0019c274(*(undefined4 *)(iVar2 + 0x10));
        uVar5 = param_2 + *(int *)(iVar2 + 4);
        *(uint *)(iVar2 + 4) = uVar5;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        if (*(uint *)(iVar2 + 0x18) < uVar5) {
          *(uint *)(iVar2 + 0x18) = uVar5;
        }
        FUN_0019c278(*(undefined4 *)(iVar4 + DAT_001916e8 + 0x10));
        return piVar1 + 6;
      }
    }
    else {
      (***(code ***)(iVar4 + DAT_001916f0))
                (**(undefined4 **)(iVar4 + DAT_001916f4),iVar4 + DAT_001916f8,piVar1);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


