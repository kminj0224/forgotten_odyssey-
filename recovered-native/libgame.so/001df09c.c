/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001df09c  Symbol: FUN_001df09c */

int ** FUN_001df09c(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int *param_7,int param_8,int param_9,int param_10,int param_11
                   ,uint *param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int *local_30;
  int *local_2c;
  
  iVar3 = param_10;
  iVar2 = param_9;
  local_30 = param_3;
  local_2c = param_4;
  uVar12 = FUN_001da5b8(param_11 + 0x6c);
  iVar1 = DAT_001df22c;
  uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
  piVar4 = (int *)uVar12;
  if (iVar3 == 2) {
    iVar9 = 10;
  }
  else if (iVar3 == 4) {
    iVar9 = 1000;
  }
  else {
    iVar9 = 1;
  }
  iVar10 = 0;
  iVar11 = 0;
  while( true ) {
    iVar5 = FUN_001df02c(&local_30,uVar8);
    iVar6 = FUN_001df02c(&param_5);
    if (iVar5 == iVar6) break;
    if (iVar11 == iVar3) goto LAB_001df140;
    iVar5 = FUN_001d8014(&local_30);
    uVar7 = (uint)*(byte *)((int)piVar4 + iVar5 + 0x11d);
    uVar12 = CONCAT44(iVar5,uVar7);
    if ((uVar7 == 0) &&
       (uVar12 = (**(code **)(*piVar4 + 0x20))(piVar4,iVar5,0x2a), (int)uVar12 != 0x2a)) {
      *(char *)((int)piVar4 + iVar5 + 0x11d) = (char)uVar12;
    }
    uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar7 = (int)uVar12 - 0x30;
    if (9 < (uVar7 & 0xff)) goto LAB_001df118;
    iVar10 = uVar7 + iVar10 * 10;
    iVar5 = iVar9 * iVar10;
    if ((iVar5 - iVar2 != 0 && iVar2 <= iVar5) || (iVar5 + iVar9 <= param_8)) goto LAB_001df118;
    iVar9 = (int)((longlong)iVar1 * (longlong)iVar9 >> 0x22) - (iVar9 >> 0x1f);
    if (local_30 != (int *)0x0) {
      if ((uint)local_30[2] < (uint)local_30[3]) {
        local_30[2] = local_30[2] + 1;
      }
      else {
        (**(code **)(*local_30 + 0x28))();
        uVar8 = extraout_r1;
      }
      local_2c = (int *)0xffffffff;
    }
    iVar11 = iVar11 + 1;
  }
  if (iVar11 != iVar3) {
LAB_001df118:
    if (iVar11 != 2 || iVar3 != 4) {
      *param_12 = *param_12 | 4;
      goto LAB_001df148;
    }
    iVar10 = iVar10 + -100;
  }
LAB_001df140:
  *param_7 = iVar10;
LAB_001df148:
  *param_1 = local_30;
  param_1[1] = local_2c;
  return param_1;
}


