/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173600  Symbol: png_combine_row */

void png_combine_row(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  void *__src;
  size_t __n;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint local_2c;
  
  if (param_3 == 0xff) {
    bVar1 = *(byte *)(param_1 + DAT_0017386c);
    if (bVar1 < 8) {
      __n = *(int *)(param_1 + 0x18c) * (uint)bVar1 + 7 >> 3;
    }
    else {
      __n = *(int *)(param_1 + 0x18c) * (uint)(bVar1 >> 3);
    }
    memcpy(param_2,(void *)(*(int *)(param_1 + 0x1b0) + 1),__n);
  }
  else {
    bVar1 = *(byte *)(param_1 + DAT_0017386c);
    if (bVar1 == 2) {
      uVar5 = *(uint *)(param_1 + 0x18c);
      if (*(int *)(param_1 + 0x134) << 0xf < 0) {
        iVar8 = 2;
        uVar7 = 6;
        local_2c = 0;
      }
      else {
        iVar8 = -2;
        uVar7 = 0;
        local_2c = 6;
      }
      if (uVar5 != 0) {
        pbVar6 = (byte *)(*(int *)(param_1 + 0x1b0) + 1);
        uVar2 = 0;
        uVar3 = 0x80;
        uVar4 = local_2c;
        do {
          if ((uVar3 & param_3) != 0) {
            *param_2 = (byte)(((int)(uint)*pbVar6 >> (uVar4 & 0xff) & 3U) << (uVar4 & 0xff)) |
                       (byte)(DAT_00173878 >> (6 - uVar4 & 0xff)) & *param_2;
          }
          if (uVar4 == uVar7) {
            pbVar6 = pbVar6 + 1;
            param_2 = param_2 + 1;
            uVar4 = local_2c;
            if (uVar3 != 1) goto LAB_00173806;
LAB_00173844:
            uVar3 = 0x80;
          }
          else {
            uVar4 = uVar4 + iVar8;
            if (uVar3 == 1) goto LAB_00173844;
LAB_00173806:
            uVar3 = (int)uVar3 >> 1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar5);
      }
    }
    else if (bVar1 == 4) {
      uVar5 = *(uint *)(param_1 + 0x18c);
      if (*(int *)(param_1 + 0x134) << 0xf < 0) {
        iVar8 = 4;
        uVar7 = 4;
        local_2c = 0;
      }
      else {
        iVar8 = -4;
        uVar7 = 0;
        local_2c = 4;
      }
      if (uVar5 != 0) {
        pbVar6 = (byte *)(*(int *)(param_1 + 0x1b0) + 1);
        uVar2 = 0;
        uVar3 = 0x80;
        uVar4 = local_2c;
        do {
          if ((uVar3 & param_3) != 0) {
            *param_2 = (byte)(((int)(uint)*pbVar6 >> (uVar4 & 0xff) & 0xfU) << (uVar4 & 0xff)) |
                       (byte)(DAT_00173870 >> (4 - uVar4 & 0xff)) & *param_2;
          }
          if (uVar4 == uVar7) {
            pbVar6 = pbVar6 + 1;
            param_2 = param_2 + 1;
            uVar4 = local_2c;
            if (uVar3 != 1) goto LAB_001736ec;
LAB_00173728:
            uVar3 = 0x80;
          }
          else {
            uVar4 = uVar4 + iVar8;
            if (uVar3 == 1) goto LAB_00173728;
LAB_001736ec:
            uVar3 = (int)uVar3 >> 1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar5);
      }
    }
    else if (bVar1 == 1) {
      uVar5 = *(uint *)(param_1 + 0x18c);
      if (*(int *)(param_1 + 0x134) << 0xf < 0) {
        iVar8 = 1;
        uVar7 = 7;
        local_2c = 0;
      }
      else {
        uVar7 = 0;
        local_2c = 7;
        iVar8 = -1;
      }
      if (uVar5 != 0) {
        pbVar6 = (byte *)(*(int *)(param_1 + 0x1b0) + 1);
        uVar3 = 0;
        uVar2 = 0x80;
        uVar4 = local_2c;
        do {
          if ((uVar2 & param_3) != 0) {
            *param_2 = (byte)(((int)(uint)*pbVar6 >> (uVar4 & 0xff) & 1U) << (uVar4 & 0xff)) |
                       (byte)(DAT_00173874 >> (7 - uVar4 & 0xff)) & *param_2;
          }
          if (uVar4 == uVar7) {
            pbVar6 = pbVar6 + 1;
            param_2 = param_2 + 1;
            uVar4 = local_2c;
            if (uVar2 != 1) goto LAB_00173780;
LAB_001737be:
            uVar2 = 0x80;
          }
          else {
            uVar4 = uVar4 + iVar8;
            if (uVar2 == 1) goto LAB_001737be;
LAB_00173780:
            uVar2 = (int)uVar2 >> 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x18c);
      uVar7 = (uint)(bVar1 >> 3);
      if (uVar5 != 0) {
        __src = (void *)(*(int *)(param_1 + 0x1b0) + 1);
        uVar4 = 0x80;
        iVar8 = 0;
        do {
          if ((uVar4 & param_3) == 0) {
            if (uVar4 == 1) goto LAB_00173670;
LAB_00173650:
            uVar4 = uVar4 >> 1;
          }
          else {
            memcpy(param_2,__src,uVar7);
            if (uVar4 != 1) goto LAB_00173650;
LAB_00173670:
            uVar4 = 0x80;
          }
          if (uVar5 <= iVar8 + 1U) {
            return;
          }
          iVar8 = iVar8 + 1;
          __src = (void *)((int)__src + uVar7);
          param_2 = param_2 + uVar7;
        } while( true );
      }
    }
  }
  return;
}


