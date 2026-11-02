/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d34b4  Symbol: FUN_001d34b4 */

int * FUN_001d34b4(int *param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  byte local_14 [8];
  
  param_1[1] = 0;
  FUN_001d2644(local_14,param_1,1);
  uVar3 = (uint)local_14[0];
  if (uVar3 != 0) {
    piVar5 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78);
    pbVar4 = (byte *)piVar5[2];
    if (pbVar4 < (byte *)piVar5[3]) {
      uVar2 = (uint)*pbVar4;
      piVar5[2] = (int)(pbVar4 + 1);
    }
    else {
      uVar2 = (**(code **)(*piVar5 + 0x28))(piVar5);
      if (uVar2 == 0xffffffff) {
        uVar3 = 2;
        goto LAB_001d34e8;
      }
    }
    param_1[1] = 1;
    uVar3 = 0;
    *param_2 = (char)uVar2;
  }
LAB_001d34e8:
  if (param_1[1] == 0) {
    uVar3 = uVar3 | 4;
  }
  else if (uVar3 == 0) {
    return param_1;
  }
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d0d2c(iVar1,uVar3 | *(uint *)(iVar1 + 0x14));
  return param_1;
}


