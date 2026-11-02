/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001de584  Symbol: FUN_001de584 */

int ** FUN_001de584(int **param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                   byte param_6,char param_7)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  size_t __n;
  undefined auStack_78 [4];
  undefined *local_74;
  int *local_70;
  int local_6c;
  int *local_68;
  undefined4 local_64;
  int *local_60;
  undefined uStack_5c;
  int *local_58;
  undefined4 local_54;
  int *local_48;
  undefined4 local_44;
  int *local_30;
  undefined4 uStack_2c;
  
  uVar5 = *(uint *)(param_5 + 0xc);
  local_68 = param_3;
  local_64 = (int *)param_4;
  if ((uVar5 & 1) == 0) {
    FUN_001de250(&local_60,param_2,param_3,param_4,param_5,(uint)param_6,param_7);
    local_68 = local_60;
    local_64 = (int *)CONCAT31(local_64._1_3_,uStack_5c);
    goto LAB_001de5d8;
  }
  iVar2 = FUN_001c60f4(DAT_001de908 + 0x1de5f8);
  local_6c = *(int *)(*(int *)(param_5 + 0x6c) + 0xc);
  iVar4 = *(int *)(local_6c + iVar2 * 4);
  if (iVar4 == 0) {
    local_70 = (int *)operator_new(0x68);
    iVar4 = DAT_001de90c + 0x1de880;
    local_70[1] = 0;
    *local_70 = iVar4;
    local_70[2] = 0;
    local_70[3] = 0;
    *(undefined *)(local_70 + 4) = 0;
    local_70[5] = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    local_70[8] = 0;
    *(undefined *)(local_70 + 9) = 0;
    *(undefined *)((int)local_70 + 0x25) = 0;
    *(undefined *)(local_70 + 0x19) = 0;
    FUN_001da934(local_70,param_5 + 0x6c);
    FUN_001c5f50(*(undefined4 *)(param_5 + 0x6c),local_70,iVar2);
    iVar4 = *(int *)(local_6c + iVar2 * 4);
  }
  piVar1 = local_68;
  if (param_7 == '\0') {
    iVar2 = *(int *)(iVar4 + 0x20);
    iVar7 = *(int *)(param_5 + 8);
    local_6c = *(undefined4 *)(iVar4 + 0x1c);
    if (iVar7 <= iVar2) {
LAB_001de740:
      cVar6 = (char)local_64;
      *(undefined4 *)(param_5 + 8) = 0;
      local_30 = local_68;
      uStack_2c = local_64;
      if (((char)local_64 == '\0') &&
         (iVar4 = (**(code **)(*local_68 + 0x30))(local_68,local_6c,iVar2), iVar2 != iVar4)) {
        cVar6 = '\x01';
      }
      local_64 = (int *)CONCAT31(local_64._1_3_,cVar6);
      local_68 = piVar1;
      goto LAB_001de5d8;
    }
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x18);
    iVar7 = *(int *)(param_5 + 8);
    local_6c = *(undefined4 *)(iVar4 + 0x14);
    if (iVar7 <= iVar2) goto LAB_001de740;
  }
  __n = iVar7 - iVar2;
  local_74 = auStack_78 + -(__n + 0xe & 0xfffffff8);
  memset(local_74,(uint)param_6,__n);
  piVar1 = local_68;
  *(undefined4 *)(param_5 + 8) = 0;
  cVar6 = (char)local_64;
  if ((uVar5 & 0xb0) == 0x20) {
    local_30 = local_68;
    uStack_2c = local_64;
    if ((char)local_64 == '\0') {
      iVar4 = (**(code **)(*local_68 + 0x30))(local_68,local_6c,iVar2);
      if (iVar2 != iVar4) {
        cVar6 = '\x01';
      }
    }
    local_58 = piVar1;
    local_54 = CONCAT31((int3)((uint)uStack_2c >> 8),cVar6);
    local_30 = piVar1;
    uStack_2c._1_3_ = local_64._1_3_;
    if ((cVar6 == '\0') &&
       (local_68 = piVar1, local_64._0_1_ = cVar6, uStack_2c._0_1_ = cVar6,
       sVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,local_74,__n), __n != sVar3)) {
      cVar6 = '\x01';
    }
    local_64 = (int *)CONCAT31(local_64._1_3_,cVar6);
    local_68 = piVar1;
  }
  else {
    local_30 = local_68;
    uStack_2c = local_64;
    if (((char)local_64 == '\0') &&
       (sVar3 = (**(code **)(*local_68 + 0x30))(local_68,local_74,__n), __n != sVar3)) {
      cVar6 = '\x01';
    }
    local_44 = CONCAT31((int3)((uint)uStack_2c >> 8),cVar6);
    local_48 = piVar1;
    local_30 = piVar1;
    uStack_2c._1_3_ = local_64._1_3_;
    if ((cVar6 == '\0') &&
       (local_68 = piVar1, local_64._0_1_ = cVar6, uStack_2c._0_1_ = cVar6,
       iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,local_6c,iVar2), iVar2 != iVar4)) {
      cVar6 = '\x01';
    }
    local_64 = (int *)CONCAT31(local_64._1_3_,cVar6);
    local_68 = piVar1;
  }
LAB_001de5d8:
  *param_1 = local_68;
  param_1[1] = local_64;
  return param_1;
}


