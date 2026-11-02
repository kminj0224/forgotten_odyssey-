/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f5b0  Symbol: FUN_0001f5b0 */

int FUN_0001f5b0(byte *param_1,code *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  byte *pbVar9;
  bool bVar10;
  undefined auStack_180 [4];
  byte *local_17c;
  byte *local_178;
  undefined4 local_174;
  byte *local_170;
  undefined *local_16c;
  undefined4 local_168;
  int local_164;
  undefined *local_160;
  undefined4 local_15c;
  size_t local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined auStack_144 [256];
  uint local_44;
  byte local_40;
  code *local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_24;
  
  if ((*param_1 == 0x5f) && (param_1[1] == 0x5a)) {
    cVar7 = '\x01';
    goto LAB_0001f644;
  }
  iVar4 = strncmp((char *)param_1,(char *)(DAT_0001f830 + 0x1f5e4),8);
  if (iVar4 == 0) {
    bVar1 = param_1[8];
    if ((bVar1 != 0x2e && bVar1 != 0x5f) && (cVar7 = '\0', bVar1 != 0x24)) goto LAB_0001f644;
    bVar1 = param_1[9];
    bVar10 = bVar1 == 0x49;
    cVar7 = bVar1 == 0x44 || bVar10;
    if (bVar1 != 0x44 && !bVar10) goto LAB_0001f644;
    if (param_1[10] == 0x5f) {
      if (bVar10) {
        cVar7 = '\x02';
      }
      else {
        cVar7 = '\x03';
      }
      goto LAB_0001f644;
    }
  }
  cVar7 = '\0';
LAB_0001f644:
  local_158 = strlen((char *)param_1);
  local_164 = local_158 * 2;
  iVar4 = -(local_158 * 0x18 + 8);
  local_16c = auStack_180 + iVar4;
  local_178 = param_1 + local_158;
  iVar2 = -(local_158 * 4 + 0xe & 0xfffffff8);
  local_160 = auStack_180 + iVar2 + iVar4;
  local_174 = 0x11;
  local_168 = 0;
  local_15c = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  local_17c = param_1;
  local_170 = param_1;
  if (cVar7 == '\x01') {
    iVar4 = FUN_0001aacc(&local_17c,1);
  }
  else if (cVar7 == '\0') {
    local_16c = auStack_180 + iVar4;
    local_160 = auStack_180 + iVar2 + iVar4;
    iVar4 = FUN_000192a8(&local_17c);
  }
  else {
    pbVar9 = param_1 + 0xb;
    if (cVar7 == '\x02') {
      uVar8 = 0x3c;
    }
    else {
      uVar8 = 0x3d;
    }
    if ((param_1[0xb] == 0x5f) && (param_1[0xc] == 0x5a)) {
      local_170 = param_1 + 0xd;
      local_16c = auStack_180 + iVar4;
      local_160 = auStack_180 + iVar2 + iVar4;
      uVar6 = FUN_0001a3c8(&local_17c);
    }
    else {
      local_170 = pbVar9;
      local_16c = auStack_180 + iVar4;
      local_160 = auStack_180 + iVar2 + iVar4;
      sVar5 = strlen((char *)pbVar9);
      uVar6 = FUN_000188ac(&local_17c,pbVar9,sVar5);
    }
    iVar4 = FUN_00018710(&local_17c,uVar8,uVar6,0);
    pbVar9 = local_170;
    sVar5 = strlen((char *)local_170);
    local_170 = pbVar9 + sVar5;
  }
  local_40 = *local_170;
  local_44 = (uint)local_40;
  if (local_44 == 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      local_148 = 0x11;
      local_3c = param_2;
      local_38 = param_3;
      local_34 = local_44;
      local_30 = local_44;
      local_2c = local_44;
      local_24 = local_44;
      FUN_0001e2ac(&local_148,iVar4);
      uVar3 = local_44;
      auStack_144[local_44] = 0;
      (*local_3c)(auStack_144,uVar3,local_38);
      iVar4 = 1 - local_2c;
      if (1 < local_2c) {
        iVar4 = 0;
      }
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


