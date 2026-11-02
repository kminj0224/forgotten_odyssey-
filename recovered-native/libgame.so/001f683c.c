/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f683c  Symbol: FUN_001f683c */

int ** FUN_001f683c(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int *param_7,int param_8,int param_9,int param_10,int param_11
                   ,uint *param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_30;
  int *local_2c;
  
  iVar4 = param_10;
  iVar3 = param_9;
  iVar2 = param_8;
  local_30 = param_3;
  local_2c = param_4;
  piVar5 = (int *)FUN_001f1db0(param_11 + 0x6c);
  iVar1 = DAT_001f69b0;
  if (iVar4 == 2) {
    iVar9 = 10;
  }
  else if (iVar4 == 4) {
    iVar9 = 1000;
  }
  else {
    iVar9 = 1;
  }
  iVar10 = 0;
  iVar11 = 0;
  while( true ) {
    iVar6 = FUN_001f67d0(&local_30);
    iVar7 = FUN_001f67d0(&param_5);
    if (iVar6 == iVar7) break;
    if (iVar11 == iVar4) goto LAB_001f68e4;
    uVar8 = FUN_001ef914(&local_30);
    iVar6 = (**(code **)(*piVar5 + 0x30))(piVar5,uVar8,0x2a);
    if (9 < (iVar6 - 0x30U & 0xff)) goto LAB_001f68bc;
    iVar10 = (iVar6 - 0x30U) + iVar10 * 10;
    iVar6 = iVar9 * iVar10;
    if ((iVar6 - iVar3 != 0 && iVar3 <= iVar6) || (iVar6 + iVar9 <= iVar2)) goto LAB_001f68bc;
    iVar9 = (int)((longlong)iVar1 * (longlong)iVar9 >> 0x22) - (iVar9 >> 0x1f);
    if (local_30 != (int *)0x0) {
      if ((uint)local_30[2] < (uint)local_30[3]) {
        local_30[2] = local_30[2] + 4;
      }
      else {
        (**(code **)(*local_30 + 0x28))();
      }
      local_2c = (int *)0xffffffff;
    }
    iVar11 = iVar11 + 1;
  }
  if (iVar11 != iVar4) {
LAB_001f68bc:
    if (iVar11 != 2 || iVar4 != 4) {
      *param_12 = *param_12 | 4;
      goto LAB_001f68ec;
    }
    iVar10 = iVar10 + -100;
  }
LAB_001f68e4:
  *param_7 = iVar10;
LAB_001f68ec:
  *param_1 = local_30;
  param_1[1] = local_2c;
  return param_1;
}


