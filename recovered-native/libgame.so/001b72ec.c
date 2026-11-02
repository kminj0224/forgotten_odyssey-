/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b72ec  Symbol: FUN_001b72ec */

void FUN_001b72ec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *local_34;
  int local_30;
  
  iVar1 = DAT_001b7644 + 0x1b7302;
  iVar3 = param_1[0x74];
  if (param_1[0x38] == 0) {
    if (((param_1[0x66] == 0) && (param_1[0x68] == 0)) && (param_1[0x69] == 0)) {
      if (param_1[0x37] == 0) {
        iVar9 = param_1[0x67];
        if (iVar9 < 0x40) goto LAB_001b77c8;
      }
      else {
        iVar9 = param_1[0x67];
LAB_001b77c8:
        if (param_1[0x6c] != iVar9) goto LAB_001b7430;
      }
    }
    else {
LAB_001b7430:
      *(undefined4 *)(*param_1 + 0x14) = 0x7d;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    if (param_1[0x6c] == 0x3f) {
      *(int *)(iVar3 + 4) = iVar1 + DAT_001b7858;
    }
    else {
      *(int *)(iVar3 + 4) = iVar1 + DAT_001b7648;
    }
    if (0 < param_1[0x54]) {
      piVar6 = param_1 + 0x55;
      iVar11 = 0;
      iVar9 = iVar3;
      do {
        iVar5 = *piVar6;
        iVar2 = *(int *)(iVar5 + 0x14);
        FUN_001b704c(param_1,1,iVar2,(iVar2 + 0x10) * 4 + iVar3);
        if (param_1[0x6c] != 0) {
          iVar2 = *(int *)(iVar5 + 0x18);
          FUN_001b704c(param_1,0,iVar2,(iVar2 + 0x14) * 4 + iVar3);
        }
        *(undefined4 *)(iVar9 + 0x14) = 0;
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar11 < param_1[0x54]);
    }
    if (0 < param_1[0x5b]) {
      iVar11 = iVar1 + DAT_001b764c;
      piVar6 = param_1 + 0x5c;
      iVar1 = iVar1 + DAT_001b7654;
      puVar4 = (undefined4 *)(iVar3 + 0x88);
      iVar9 = 0;
      do {
        iVar2 = param_1[*piVar6 + 0x55];
        puVar4[-10] = *(undefined4 *)((*(int *)(iVar2 + 0x14) + 0x10) * 4 + iVar3);
        *puVar4 = *(undefined4 *)((*(int *)(iVar2 + 0x18) + 0x14) * 4 + iVar3);
        if (*(int *)(iVar2 + 0x34) == 0) {
          puVar4[10] = 0;
        }
        else {
          if ((uint)param_1[0x6c] < 0x31) {
                    /* WARNING: Could not emulate address calculation at 0x001b75be */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*(int *)(iVar1 + param_1[0x6c] * 4) + iVar1))();
            return;
          }
          uVar8 = *(int *)(iVar2 + 0x28) - 1;
          if (7 < uVar8) {
            uVar8 = 7;
          }
          uVar10 = *(int *)(iVar2 + 0x24) - 1;
          if (7 < uVar10) {
            uVar10 = 7;
          }
          puVar4[10] = *(int *)((uVar8 * 8 + uVar10) * 4 + iVar11 + 0x6c) + 1;
        }
        iVar9 = iVar9 + 1;
        piVar6 = piVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar9 < param_1[0x5b]);
    }
    goto LAB_001b754c;
  }
  iVar9 = param_1[0x66];
  if (iVar9 == 0) {
    if (param_1[0x67] == 0) goto LAB_001b7590;
LAB_001b732c:
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(int *)(*param_1 + 0x18) = param_1[0x66];
    *(int *)(*param_1 + 0x1c) = param_1[0x67];
    *(int *)(*param_1 + 0x20) = param_1[0x68];
    *(int *)(*param_1 + 0x24) = param_1[0x69];
    (**(code **)*param_1)(param_1);
    iVar9 = param_1[0x66];
  }
  else {
    if (((param_1[0x67] < iVar9) || (param_1[0x6c] < param_1[0x67])) || (param_1[0x54] != 1))
    goto LAB_001b732c;
LAB_001b7590:
    if (((param_1[0x68] != 0) && (param_1[0x68] + -1 != param_1[0x69])) || (0xd < param_1[0x69]))
    goto LAB_001b732c;
  }
  if (0 < param_1[0x54]) {
    local_34 = param_1 + 0x55;
    local_30 = 0;
    while( true ) {
      iVar11 = *(int *)(*local_34 + 4);
      piVar6 = (int *)(param_1[0x28] + iVar11 * 0x100);
      if ((iVar9 != 0) && (*piVar6 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x76;
        *(int *)(*param_1 + 0x18) = iVar11;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        iVar9 = param_1[0x66];
      }
      if (iVar9 <= param_1[0x67]) {
        puVar7 = (uint *)(piVar6 + iVar9);
        do {
          if (param_1[0x68] != (*puVar7 & (int)~*puVar7 >> 0x1f)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x76;
            *(int *)(*param_1 + 0x18) = iVar11;
            *(int *)(*param_1 + 0x1c) = iVar9;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          iVar9 = iVar9 + 1;
          *puVar7 = param_1[0x69];
          puVar7 = puVar7 + 1;
        } while (iVar9 <= param_1[0x67]);
        iVar9 = param_1[0x66];
      }
      local_30 = local_30 + 1;
      local_34 = local_34 + 1;
      if (param_1[0x54] <= local_30) break;
      iVar9 = param_1[0x66];
    }
  }
  if (param_1[0x68] == 0) {
    if (iVar9 != 0) {
      *(int *)(iVar3 + 4) = iVar1 + DAT_001b7854;
      goto LAB_001b7738;
    }
    *(int *)(iVar3 + 4) = iVar1 + DAT_001b7848;
    iVar1 = param_1[0x54];
  }
  else {
    if (iVar9 == 0) {
      *(int *)(iVar3 + 4) = iVar1 + DAT_001b7850;
    }
    else {
      *(int *)(iVar3 + 4) = iVar1 + DAT_001b784c;
    }
LAB_001b7738:
    iVar1 = param_1[0x54];
  }
  if (0 < iVar1) {
    piVar6 = param_1 + 0x55;
    iVar11 = 0;
    iVar9 = *piVar6;
    iVar1 = iVar3;
    if (param_1[0x66] != 0) goto LAB_001b7788;
    do {
      if (param_1[0x68] == 0) {
        FUN_001b704c(param_1,1,*(int *)(iVar9 + 0x14),(*(int *)(iVar9 + 0x14) + 10) * 4 + iVar3 + 4)
        ;
      }
      while( true ) {
        *(undefined4 *)(iVar1 + 0x14) = 0;
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 1;
        iVar1 = iVar1 + 4;
        if (param_1[0x54] <= iVar11) goto LAB_001b7722;
        iVar9 = *piVar6;
        if (param_1[0x66] == 0) break;
LAB_001b7788:
        iVar2 = (*(int *)(iVar9 + 0x18) + 10) * 4 + iVar3;
        FUN_001b704c(param_1,0,*(int *)(iVar9 + 0x18),iVar2 + 4);
        *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar2 + 4);
      }
    } while( true );
  }
LAB_001b7722:
  *(undefined4 *)(iVar3 + 0x10) = 0;
LAB_001b754c:
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(int *)(iVar3 + 0x28) = param_1[0x46];
  return;
}


