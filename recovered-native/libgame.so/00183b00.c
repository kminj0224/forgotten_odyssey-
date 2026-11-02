/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00183b00  Symbol: FUN_00183b00 */

byte * FUN_00183b00(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *local_30;
  byte *local_2c;
  
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  pbVar7 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
  if ((*pbVar7 != 0x27) && (*pbVar7 != 0x22)) {
    FUN_0017b7fc(param_1,0x27,0);
    return (byte *)0x0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0xc;
  uVar3 = (uint)*pbVar7;
  pbVar7 = pbVar7 + 1;
  iVar4 = *(int *)(param_1 + 0x24);
  pbVar6 = *(byte **)(iVar4 + 0x14);
  if (pbVar6 <= pbVar7) {
    iVar8 = *(int *)(iVar4 + 0xc);
    if ((*(int *)(param_1 + 0x124) == 0) && ((int)pbVar6 - *(int *)(iVar4 + 0x10) < 0xfa)) {
      FUN_0017c738(param_1);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    if (iVar8 != iVar4) {
      pbVar7 = pbVar7 + (iVar4 - iVar8);
    }
    pbVar6 = *(byte **)(*(int *)(param_1 + 0x24) + 0x14);
  }
  local_2c = pbVar7;
  if (param_4 != 0) {
    while (local_2c = pbVar7, pbVar7 < pbVar6) {
      do {
        uVar5 = (uint)*pbVar7;
        local_2c = pbVar7;
        if ((uVar5 == uVar3) ||
           ((((uVar5 != 9 && (uVar5 != 0x20)) && (uVar5 != 10)) && (uVar5 != 0xd))))
        goto LAB_00183c2a;
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 < pbVar6);
      iVar8 = *(int *)(param_1 + 0x24);
      iVar4 = *(int *)(iVar8 + 0xc);
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) < 0xfa)) {
        FUN_0017c738(param_1);
      }
      iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
      if (iVar4 != iVar8) {
        pbVar7 = pbVar7 + (iVar8 - iVar4);
      }
      pbVar6 = *(byte **)(*(int *)(param_1 + 0x24) + 0x14);
    }
LAB_00183c2a:
    do {
      pbVar2 = pbVar7;
      if (pbVar6 <= pbVar7) goto LAB_00183c4c;
      do {
        uVar5 = (uint)*pbVar7;
        pbVar2 = pbVar7;
        if ((((uVar5 == uVar3) || (uVar5 < 0x20)) ||
            (((int)(uVar5 * 0x1000000) < 0 || ((uVar5 == 0x26 || (uVar5 == 0x3c)))))) ||
           ((pbVar7 = pbVar7 + 1, uVar5 == 0x20 && (pbVar2 = pbVar7, *pbVar7 == 0x20))))
        goto LAB_00183c4c;
      } while (pbVar7 < pbVar6);
      iVar8 = *(int *)(param_1 + 0x24);
      iVar4 = *(int *)(iVar8 + 0xc);
      if ((*(int *)(param_1 + 0x124) == 0) &&
         (*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) < 0xfa)) {
        FUN_0017c738(param_1);
      }
      iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
      if (iVar4 != iVar8) {
        iVar8 = iVar8 - iVar4;
        pbVar7 = pbVar7 + iVar8;
        local_2c = local_2c + iVar8;
      }
      pbVar6 = *(byte **)(*(int *)(param_1 + 0x24) + 0x14);
    } while( true );
  }
  while (pbVar7 < pbVar6) {
    do {
      uVar5 = (uint)*pbVar7;
      if ((((uVar5 == uVar3) || (uVar5 < 0x20)) || ((int)(uVar5 * 0x1000000) < 0)) ||
         ((uVar5 == 0x26 || (uVar5 == 0x3c)))) goto LAB_00183d28;
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 < pbVar6);
    iVar8 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(iVar8 + 0xc);
    if ((*(int *)(param_1 + 0x124) == 0) && (*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) < 0xfa)
       ) {
      FUN_0017c738(param_1);
    }
    iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    if (iVar4 != iVar8) {
      iVar8 = iVar8 - iVar4;
      local_2c = local_2c + iVar8;
      pbVar7 = pbVar7 + iVar8;
    }
    pbVar6 = *(byte **)(*(int *)(param_1 + 0x24) + 0x14);
  }
LAB_00183d28:
  bVar1 = *pbVar7;
  local_30 = pbVar7;
  goto joined_r0x00183cc8;
  while (pbVar2 = local_30 + -1, local_30[-1] == 0x20) {
LAB_00183c4c:
    local_30 = pbVar2;
    if (local_30 <= local_2c) break;
  }
  while (pbVar7 < pbVar6) {
    do {
      uVar5 = (uint)*pbVar7;
      if ((uVar5 == uVar3) ||
         ((((uVar5 != 9 && (uVar5 != 0x20)) && (uVar5 != 10)) && (uVar5 != 0xd))))
      goto LAB_00183cc2;
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 < pbVar6);
    iVar8 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(iVar8 + 0xc);
    if ((*(int *)(param_1 + 0x124) == 0) && (*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) < 0xfa)
       ) {
      FUN_0017c738(param_1);
    }
    iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    if (iVar4 != iVar8) {
      iVar8 = iVar8 - iVar4;
      local_2c = local_2c + iVar8;
      pbVar7 = pbVar7 + iVar8;
      local_30 = local_30 + iVar8;
    }
    pbVar6 = *(byte **)(*(int *)(param_1 + 0x24) + 0x14);
  }
LAB_00183cc2:
  bVar1 = *pbVar7;
joined_r0x00183cc8:
  if (bVar1 == uVar3) {
    if (param_2 == (int *)0x0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      local_2c = (byte *)FUN_0019c88c(local_2c,(int)local_30 - (int)local_2c);
    }
    else {
      *param_2 = (int)local_30 - (int)local_2c;
    }
    *(byte **)(*(int *)(param_1 + 0x24) + 0x10) = pbVar7 + 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    local_2c = (byte *)FUN_001835bc(param_1,param_2,param_4);
  }
  return local_2c;
}


