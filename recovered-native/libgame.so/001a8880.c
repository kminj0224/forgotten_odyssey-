/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8880  Symbol: FUN_001a8880 */

void FUN_001a8880(int param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,
                 uint *param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_3c;
  
  iVar7 = *(int *)(param_1 + 0x18c);
  iVar1 = *(int *)(param_1 + 0x110) * 3;
  do {
    uVar2 = *param_6;
LAB_001a88c0:
    if (param_7 <= uVar2) {
      return;
    }
    uVar3 = *param_3;
    if (uVar3 < param_4) {
      uVar2 = *(int *)(iVar7 + 0x3c) - *(int *)(iVar7 + 0x34);
      local_3c = param_4 - uVar3;
      if (uVar2 < param_4 - uVar3) {
        local_3c = uVar2;
      }
      (**(code **)(*(int *)(param_1 + 0x198) + 4))
                (param_1,param_2 + uVar3 * 4,iVar7 + 8,*(int *)(iVar7 + 0x34),local_3c);
      if ((*(int *)(iVar7 + 0x30) == *(int *)(param_1 + 0x20)) &&
         (iVar5 = *(int *)(param_1 + 0x4c), 0 < iVar5)) {
        iVar6 = 0;
        iVar4 = iVar7;
        do {
          iVar8 = 1;
          if (0 < *(int *)(param_1 + 0x110)) {
            do {
              jcopy_sample_rows(*(undefined4 *)(iVar4 + 8),0,*(undefined4 *)(iVar4 + 8),-iVar8,1,
                                *(undefined4 *)(param_1 + 0x1c));
              iVar8 = iVar8 + 1;
            } while (iVar8 <= *(int *)(param_1 + 0x110));
            iVar5 = *(int *)(param_1 + 0x4c);
          }
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar6 < iVar5);
      }
      *param_3 = *param_3 + local_3c;
      iVar5 = *(int *)(iVar7 + 0x3c);
      iVar4 = local_3c + *(int *)(iVar7 + 0x34);
      *(int *)(iVar7 + 0x34) = iVar4;
      *(uint *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) - local_3c;
      uVar2 = *param_6;
LAB_001a88bc:
      if (iVar5 == iVar4) goto LAB_001a8914;
      goto LAB_001a88c0;
    }
    if (*(int *)(iVar7 + 0x30) != 0) {
      return;
    }
    iVar5 = *(int *)(iVar7 + 0x3c);
    iVar4 = *(int *)(iVar7 + 0x34);
    if (iVar5 <= iVar4) goto LAB_001a88bc;
    if (0 < *(int *)(param_1 + 0x4c)) {
      iVar8 = 0;
      iVar6 = iVar7;
      while( true ) {
        FUN_001a86bc(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(param_1 + 0x1c),iVar4,iVar5);
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 4;
        if (*(int *)(param_1 + 0x4c) <= iVar8) break;
        iVar4 = *(int *)(iVar7 + 0x34);
        iVar5 = *(int *)(iVar7 + 0x3c);
      }
      iVar5 = *(int *)(iVar7 + 0x3c);
    }
    *(int *)(iVar7 + 0x34) = iVar5;
    uVar2 = *param_6;
LAB_001a8914:
    (**(code **)(*(int *)(param_1 + 0x19c) + 4))
              (param_1,iVar7 + 8,*(undefined4 *)(iVar7 + 0x38),param_5,uVar2);
    *param_6 = *param_6 + 1;
    iVar5 = *(int *)(param_1 + 0x110) + *(int *)(iVar7 + 0x38);
    *(int *)(iVar7 + 0x38) = iVar5;
    if (iVar1 <= iVar5) {
      *(undefined4 *)(iVar7 + 0x38) = 0;
    }
    iVar5 = *(int *)(iVar7 + 0x34);
    if (iVar1 <= iVar5) {
      iVar5 = 0;
      *(undefined4 *)(iVar7 + 0x34) = 0;
    }
    *(int *)(iVar7 + 0x3c) = iVar5 + *(int *)(param_1 + 0x110);
  } while( true );
}


