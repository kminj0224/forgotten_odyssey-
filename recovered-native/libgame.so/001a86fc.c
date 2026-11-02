/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a86fc  Symbol: FUN_001a86fc */

void FUN_001a86fc(int param_1,int param_2,uint *param_3,uint param_4,undefined4 *param_5,
                 uint *param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar7 = *(int *)(param_1 + 0x18c);
  do {
    uVar2 = *param_3;
    if (param_4 <= uVar2) {
      return;
    }
    if (param_7 <= *param_6) {
      return;
    }
    uVar3 = *(int *)(param_1 + 0x110) - *(int *)(iVar7 + 0x34);
    uVar9 = param_4 - uVar2;
    if (uVar3 < param_4 - uVar2) {
      uVar9 = uVar3;
    }
    (**(code **)(*(int *)(param_1 + 0x198) + 4))
              (param_1,param_2 + uVar2 * 4,iVar7 + 8,*(int *)(iVar7 + 0x34),uVar9);
    *param_3 = *param_3 + uVar9;
    iVar4 = *(int *)(iVar7 + 0x34) + uVar9;
    iVar5 = *(int *)(iVar7 + 0x30) - uVar9;
    *(int *)(iVar7 + 0x34) = iVar4;
    *(int *)(iVar7 + 0x30) = iVar5;
    if (iVar5 == 0) {
      iVar6 = *(int *)(param_1 + 0x110);
      if (iVar4 < iVar6) {
        if (0 < *(int *)(param_1 + 0x4c)) {
          iVar8 = 0;
          iVar5 = iVar7;
          while( true ) {
            FUN_001a86bc(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(param_1 + 0x1c),iVar4,iVar6);
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            if (*(int *)(param_1 + 0x4c) <= iVar8) break;
            iVar4 = *(int *)(iVar7 + 0x34);
            iVar6 = *(int *)(param_1 + 0x110);
          }
          iVar6 = *(int *)(param_1 + 0x110);
        }
        *(int *)(iVar7 + 0x34) = iVar6;
        iVar5 = *(int *)(param_1 + 0x110);
        iVar4 = iVar6;
        goto LAB_001a873c;
      }
      if (iVar4 != iVar6) goto LAB_001a8740;
LAB_001a87aa:
      (**(code **)(*(int *)(param_1 + 0x19c) + 4))(param_1,iVar7 + 8,0,param_5,*param_6);
      *(undefined4 *)(iVar7 + 0x34) = 0;
      *param_6 = *param_6 + 1;
      iVar4 = *(int *)(iVar7 + 0x30);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x110);
LAB_001a873c:
      if (iVar4 == iVar5) goto LAB_001a87aa;
LAB_001a8740:
      iVar4 = *(int *)(iVar7 + 0x30);
    }
    if ((iVar4 == 0) && (uVar2 = *param_6, uVar2 < param_7)) {
      iVar7 = *(int *)(param_1 + 0x54);
      if (0 < *(int *)(param_1 + 0x4c)) {
        iVar4 = 0;
        while( true ) {
          iVar5 = __divsi3(*(int *)(iVar7 + 0x28) * *(int *)(iVar7 + 0xc),
                           *(undefined4 *)(param_1 + 0x118));
          uVar1 = *param_5;
          param_5 = param_5 + 1;
          iVar4 = iVar4 + 1;
          FUN_001a86bc(uVar1,*(int *)(iVar7 + 0x24) * *(int *)(iVar7 + 0x1c),iVar5 * uVar2,
                       iVar5 * param_7);
          iVar7 = iVar7 + 0x58;
          if (*(int *)(param_1 + 0x4c) <= iVar4) break;
          uVar2 = *param_6;
        }
      }
      *param_6 = param_7;
      return;
    }
  } while( true );
}


