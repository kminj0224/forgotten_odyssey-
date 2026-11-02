/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b3b88  Symbol: FUN_001b3b88 */

void FUN_001b3b88(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int local_38;
  
  iVar2 = DAT_001b3ee0 + 0x1b3b9e;
  iVar4 = param_1[0x74];
  if (param_1[0x38] == 0) {
    if ((((param_1[0x66] != 0) || (param_1[0x68] != 0)) || (param_1[0x69] != 0)) ||
       ((param_1[0x67] < 0x40 && (param_1[0x67] != param_1[0x6c])))) {
      *(undefined4 *)(*param_1 + 0x14) = 0x7d;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    *(int *)(iVar4 + 4) = iVar2 + DAT_001b3ee4;
    goto LAB_001b3cde;
  }
  iVar7 = param_1[0x66];
  if (iVar7 == 0) {
    if (param_1[0x67] == 0) goto LAB_001b3ddc;
LAB_001b3bc6:
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(int *)(*param_1 + 0x18) = param_1[0x66];
    *(int *)(*param_1 + 0x1c) = param_1[0x67];
    *(int *)(*param_1 + 0x20) = param_1[0x68];
    *(int *)(*param_1 + 0x24) = param_1[0x69];
    (**(code **)*param_1)(param_1);
    iVar7 = param_1[0x66];
  }
  else {
    if (((param_1[0x67] < iVar7) || (param_1[0x6c] < param_1[0x67])) || (param_1[0x54] != 1))
    goto LAB_001b3bc6;
LAB_001b3ddc:
    if (((param_1[0x68] != 0) && (param_1[0x68] + -1 != param_1[0x69])) || (0xd < param_1[0x69]))
    goto LAB_001b3bc6;
  }
  if (0 < param_1[0x54]) {
    piVar10 = param_1 + 0x55;
    local_38 = 0;
    while( true ) {
      iVar3 = *(int *)(*piVar10 + 4);
      piVar8 = (int *)(param_1[0x28] + iVar3 * 0x100);
      if ((iVar7 != 0) && (*piVar8 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x76;
        *(int *)(*param_1 + 0x18) = iVar3;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        iVar7 = param_1[0x66];
      }
      if (iVar7 <= param_1[0x67]) {
        puVar9 = (uint *)(piVar8 + iVar7);
        do {
          if (param_1[0x68] != (*puVar9 & (int)~*puVar9 >> 0x1f)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x76;
            *(int *)(*param_1 + 0x18) = iVar3;
            *(int *)(*param_1 + 0x1c) = iVar7;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          iVar7 = iVar7 + 1;
          *puVar9 = param_1[0x69];
          puVar9 = puVar9 + 1;
        } while (iVar7 <= param_1[0x67]);
        iVar7 = param_1[0x66];
      }
      piVar10 = piVar10 + 1;
      local_38 = local_38 + 1;
      if (param_1[0x54] <= local_38) break;
      iVar7 = param_1[0x66];
    }
  }
  if (param_1[0x68] == 0) {
    if (iVar7 == 0) {
      *(int *)(iVar4 + 4) = iVar2 + DAT_001b3ee8;
    }
    else {
      *(int *)(iVar4 + 4) = iVar2 + DAT_001b3f28;
    }
  }
  else if (iVar7 == 0) {
    *(int *)(iVar4 + 4) = iVar2 + DAT_001b3eec;
  }
  else {
    *(int *)(iVar4 + 4) = iVar2 + DAT_001b3ef0;
  }
LAB_001b3cde:
  if (0 < param_1[0x54]) {
    piVar10 = param_1 + 0x55;
    iVar7 = 0;
    iVar2 = iVar4;
    do {
      iVar3 = *piVar10;
      if (param_1[0x38] == 0) {
LAB_001b3d24:
        uVar5 = *(uint *)(iVar3 + 0x14);
        if (uVar5 < 0x10) {
          iVar6 = (uVar5 + 0xe) * 4;
          pvVar1 = *(void **)(iVar6 + iVar4);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(uint *)(*param_1 + 0x18) = uVar5;
          (**(code **)*param_1)(param_1);
          iVar6 = (uVar5 + 0xe) * 4;
          pvVar1 = *(void **)(iVar6 + iVar4);
        }
        if (pvVar1 == (void *)0x0) {
          pvVar1 = (void *)(**(code **)param_1[1])(param_1,1,0x40);
          *(void **)(iVar6 + iVar4) = pvVar1;
        }
        memset(pvVar1,0,0x40);
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        if (param_1[0x38] == 0) {
          iVar6 = param_1[0x6c];
        }
        else {
          iVar6 = param_1[0x66];
        }
        if (iVar6 != 0) {
LAB_001b3d5e:
          uVar5 = *(uint *)(iVar3 + 0x18);
          if (uVar5 < 0x10) {
            iVar3 = (uVar5 + 0x1e) * 4;
            pvVar1 = *(void **)(iVar3 + iVar4);
          }
          else {
            *(undefined4 *)(*param_1 + 0x14) = 0x32;
            *(uint *)(*param_1 + 0x18) = uVar5;
            (**(code **)*param_1)(param_1);
            iVar3 = (uVar5 + 0x1e) * 4;
            pvVar1 = *(void **)(iVar3 + iVar4);
          }
          if (pvVar1 == (void *)0x0) {
            pvVar1 = (void *)(**(code **)param_1[1])(param_1,1,0x100);
            *(void **)(iVar3 + iVar4) = pvVar1;
          }
          memset(pvVar1,0,0x100);
        }
      }
      else {
        if (param_1[0x66] != 0) goto LAB_001b3d5e;
        if (param_1[0x68] == 0) goto LAB_001b3d24;
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar7 < param_1[0x54]);
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0xfffffff0;
  *(int *)(iVar4 + 0x34) = param_1[0x46];
  return;
}


