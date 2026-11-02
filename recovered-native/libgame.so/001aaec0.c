/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aaec0  Symbol: FUN_001aaec0 */

undefined4 FUN_001aaec0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte **ppbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *local_34;
  undefined4 *local_30;
  uint local_2c;
  
  iVar3 = param_1[0x73];
  local_30 = *(undefined4 **)(iVar3 + 0xa4);
  ppbVar8 = (byte **)param_1[6];
  pbVar11 = *ppbVar8;
  pbVar7 = ppbVar8[1];
  if (local_30 == (undefined4 *)0x0) {
    if (pbVar7 == (byte *)0x0) {
      iVar2 = (*(code *)ppbVar8[3])(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      pbVar11 = *ppbVar8;
      pbVar7 = ppbVar8[1];
    }
    pbVar7 = pbVar7 + -1;
    bVar1 = *pbVar11;
    pbVar6 = pbVar11 + 1;
    if (pbVar7 == (byte *)0x0) {
      iVar2 = (*(code *)ppbVar8[3])(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      pbVar6 = *ppbVar8;
      pbVar7 = ppbVar8[1];
    }
    pbVar11 = pbVar6 + 1;
    pbVar7 = pbVar7 + -1;
    local_2c = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar6;
    if ((int)local_2c < 0) {
      uVar9 = 0;
      local_34 = (undefined4 *)0x0;
      goto LAB_001aaf68;
    }
    if (param_1[0x6d] == 0xfe) {
      uVar9 = *(uint *)(iVar3 + 0x60);
    }
    else {
      uVar9 = *(uint *)((param_1[0x6d] + -200) * 4 + iVar3 + 4);
    }
    if (local_2c < uVar9) {
      uVar9 = local_2c;
    }
    local_30 = (undefined4 *)(**(code **)(param_1[1] + 4))(param_1,1,uVar9 + 0x14);
    *local_30 = 0;
    *(char *)(local_30 + 1) = (char)param_1[0x6d];
    local_30[3] = uVar9;
    uVar10 = 0;
    local_30[2] = local_2c;
    local_34 = local_30 + 5;
    local_30[4] = local_34;
    *(undefined4 **)(iVar3 + 0xa4) = local_30;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
  }
  else {
    uVar10 = *(uint *)(iVar3 + 0xa8);
    uVar9 = local_30[3];
    local_34 = (undefined4 *)(local_30[4] + uVar10);
    local_2c = 0;
  }
LAB_001aaf0a:
  if (uVar10 < uVar9) {
    do {
      *ppbVar8 = pbVar11;
      ppbVar8[1] = pbVar7;
      *(uint *)(iVar3 + 0xa8) = uVar10;
      if (pbVar7 == (byte *)0x0) {
        iVar2 = (*(code *)ppbVar8[3])(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        pbVar7 = ppbVar8[1];
        pbVar11 = *ppbVar8;
        if (pbVar7 == (byte *)0x0) goto LAB_001aaf0a;
      }
      do {
        if (uVar9 <= uVar10) goto LAB_001aaf0a;
        bVar1 = *pbVar11;
        pbVar7 = pbVar7 + -1;
        pbVar11 = pbVar11 + 1;
        *(byte *)local_34 = bVar1;
        local_34 = (undefined4 *)((int)local_34 + 1);
        uVar10 = uVar10 + 1;
      } while (pbVar7 != (byte *)0x0);
      if (uVar9 <= uVar10) break;
    } while( true );
  }
  if (local_30 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)param_1[0x4d];
    if ((undefined4 *)param_1[0x4d] == (undefined4 *)0x0) {
      param_1[0x4d] = (int)local_30;
    }
    else {
      do {
        puVar4 = puVar5;
        puVar5 = (undefined4 *)*puVar4;
      } while (puVar5 != (undefined4 *)0x0);
      *puVar4 = local_30;
    }
    local_34 = (undefined4 *)local_30[4];
    local_2c = local_30[2] - uVar9;
  }
LAB_001aaf68:
  *(undefined4 *)(iVar3 + 0xa4) = 0;
  if (param_1[0x6d] == 0xe0) {
    FUN_001aab5c(param_1,local_34,uVar9,local_2c);
  }
  else if (param_1[0x6d] == 0xee) {
    FUN_001aacf4(param_1,local_34,uVar9,local_2c);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x5d;
    *(int *)(*param_1 + 0x18) = param_1[0x6d];
    *(uint *)(*param_1 + 0x1c) = local_2c + uVar9;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  *ppbVar8 = pbVar11;
  ppbVar8[1] = pbVar7;
  if (0 < (int)local_2c) {
    (**(code **)(param_1[6] + 0x10))(param_1,local_2c);
  }
  return 1;
}


