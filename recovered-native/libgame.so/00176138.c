/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176138  Symbol: png_do_write_interlace */

void png_do_write_interlace(uint *param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  undefined uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint local_68;
  undefined *local_64;
  uint local_60 [4];
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44 [4];
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar4 = (uint *)(DAT_001763c8 + 0x176154 + DAT_001763cc);
  local_44[0] = *puVar4;
  local_44[1] = puVar4[1];
  local_44[2] = puVar4[2];
  local_44[3] = puVar4[3];
  uStack_34 = puVar4[4];
  uStack_30 = puVar4[5];
  local_2c = puVar4[6];
  local_60[0] = puVar4[7];
  local_60[1] = puVar4[8];
  local_60[2] = puVar4[9];
  local_60[3] = puVar4[10];
  uStack_50 = puVar4[0xb];
  uStack_4c = puVar4[0xc];
  local_48 = puVar4[0xd];
  if (5 < param_3) {
    return;
  }
  uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
  if (uVar7 == 2) {
    uVar5 = *param_1;
    local_68 = local_44[param_3];
    if (local_68 < uVar5) {
      uVar6 = local_60[param_3];
      iVar9 = local_68 + uVar6;
      uVar8 = ~local_68;
      uVar1 = 0;
      uVar3 = 6;
      uVar7 = local_68;
      puVar10 = param_2;
      do {
        while( true ) {
          uVar1 = uVar1 | ((int)(uint)(byte)param_2[uVar7 >> 2] >> ((uVar8 & 3) << 1) & 3U) <<
                          (uVar3 & 0xff);
          uVar2 = (undefined)uVar1;
          if (uVar3 == 0) break;
          iVar9 = iVar9 + uVar6;
          uVar3 = uVar3 - 2;
          uVar7 = uVar7 + uVar6;
          uVar8 = uVar8 + -uVar6;
          if (uVar5 <= iVar9 - uVar6) goto LAB_00176298;
        }
        *puVar10 = uVar2;
        iVar9 = iVar9 + uVar6;
        puVar10 = puVar10 + 1;
        uVar3 = 6;
        uVar1 = 0;
        uVar2 = 0;
        uVar7 = uVar7 + uVar6;
        uVar8 = uVar8 + -uVar6;
      } while (iVar9 - uVar6 < uVar5);
LAB_00176298:
      if (uVar3 != 6) {
        *puVar10 = uVar2;
        uVar5 = *param_1;
        uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
        goto LAB_001761f0;
      }
LAB_001763b4:
      uVar5 = *param_1;
      uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
      goto LAB_001761f0;
    }
LAB_001763c2:
    uVar6 = local_60[param_3];
  }
  else {
    if (uVar7 == 4) {
      uVar5 = *param_1;
      local_68 = local_44[param_3];
      if (uVar5 <= local_68) goto LAB_001763c2;
      uVar6 = local_60[param_3];
      uVar1 = 0;
      iVar9 = local_68 + uVar6;
      uVar3 = 4;
      uVar7 = local_68;
      local_64 = param_2;
      do {
        while( true ) {
          uVar1 = uVar1 | ((int)(uint)(byte)param_2[uVar7 >> 1] >> ((uVar7 & 1) == 0) * '\x04' &
                          0xfU) << (uVar3 & 0xff);
          uVar2 = (undefined)uVar1;
          if (uVar3 == 0) break;
          iVar9 = iVar9 + uVar6;
          uVar3 = uVar3 - 4;
          uVar7 = uVar7 + uVar6;
          if (uVar5 <= iVar9 - uVar6) goto LAB_001763a2;
        }
        iVar9 = iVar9 + uVar6;
        *local_64 = uVar2;
        local_64 = local_64 + 1;
        uVar1 = 0;
        uVar2 = 0;
        uVar3 = 4;
        uVar7 = uVar7 + uVar6;
      } while (iVar9 - uVar6 < uVar5);
LAB_001763a2:
      if (uVar3 == 4) goto LAB_001763b4;
      *local_64 = uVar2;
    }
    else {
      if (uVar7 != 1) {
        uVar5 = *param_1;
        local_68 = local_44[param_3];
        uVar1 = (uint)(*(byte *)((int)param_1 + 0xb) >> 3);
        if (local_68 < uVar5) {
          uVar6 = local_60[param_3];
          iVar9 = local_68 + uVar6;
          puVar10 = param_2 + local_68 * uVar1;
          while( true ) {
            if (param_2 != puVar10) {
              memcpy(param_2,puVar10,uVar1);
            }
            iVar9 = iVar9 + uVar6;
            puVar10 = puVar10 + uVar6 * uVar1;
            if (uVar5 <= iVar9 - uVar6) break;
            param_2 = param_2 + uVar1;
          }
          uVar5 = *param_1;
          uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
        }
        else {
          uVar6 = local_60[param_3];
        }
        goto LAB_001761f0;
      }
      uVar5 = *param_1;
      local_68 = local_44[param_3];
      if (uVar5 <= local_68) goto LAB_001763c2;
      uVar6 = local_60[param_3];
      iVar9 = local_68 + uVar6;
      uVar8 = ~local_68;
      uVar3 = 7;
      uVar1 = 0;
      uVar7 = local_68;
      puVar10 = param_2;
      do {
        while( true ) {
          uVar1 = uVar1 | ((int)(uint)(byte)param_2[uVar7 >> 3] >> (uVar8 & 7) & 1U) <<
                          (uVar3 & 0xff);
          uVar2 = (undefined)uVar1;
          if (uVar3 == 0) break;
          iVar9 = iVar9 + uVar6;
          uVar3 = uVar3 - 1;
          uVar7 = uVar7 + uVar6;
          uVar8 = uVar8 + -uVar6;
          if (uVar5 <= iVar9 - uVar6) goto LAB_00176324;
        }
        iVar9 = iVar9 + uVar6;
        *puVar10 = uVar2;
        puVar10 = puVar10 + 1;
        uVar1 = 0;
        uVar2 = 0;
        uVar3 = 7;
        uVar7 = uVar7 + uVar6;
        uVar8 = uVar8 + -uVar6;
      } while (iVar9 - uVar6 < uVar5);
LAB_00176324:
      if (uVar3 != 7) {
        *puVar10 = uVar2;
        uVar5 = *param_1;
        uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
        goto LAB_001761f0;
      }
    }
    uVar5 = *param_1;
    uVar7 = (uint)*(byte *)((int)param_1 + 0xb);
  }
LAB_001761f0:
  uVar5 = __udivsi3((uVar6 + uVar5 + -1) - local_68,uVar6);
  *param_1 = uVar5;
  if (uVar7 < 8) {
    param_1[1] = uVar7 * uVar5 + 7 >> 3;
  }
  else {
    param_1[1] = (uVar7 >> 3) * uVar5;
  }
  return;
}


