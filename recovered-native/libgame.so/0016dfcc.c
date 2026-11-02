/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016dfcc  Symbol: png_do_unshift */

void png_do_unshift(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint local_30 [5];
  
  uVar6 = (uint)*(byte *)(param_1 + 2);
  puVar7 = local_30;
  if (uVar6 != 3) {
    iVar4 = *param_1;
    if ((int)(uVar6 << 0x1e) < 0) {
      uVar5 = (uint)*(byte *)((int)param_1 + 9);
      local_30[0] = uVar5 - *param_3;
      iVar8 = 3;
      local_30[1] = uVar5 - param_3[1];
      local_30[2] = uVar5 - param_3[2];
    }
    else {
      uVar5 = (uint)*(byte *)((int)param_1 + 9);
      iVar8 = 1;
      local_30[0] = uVar5 - param_3[3];
    }
    if ((int)(uVar6 << 0x1d) < 0) {
      local_30[iVar8] = uVar5 - param_3[4];
      iVar8 = iVar8 + 1;
    }
    bVar3 = false;
    do {
      if ((int)*puVar7 < 1) {
        *puVar7 = 0;
      }
      else {
        bVar3 = true;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_30 + iVar8);
    if (bVar3) {
      if (uVar5 == 4) {
        uVar6 = param_1[1];
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            param_2[uVar5] =
                 (byte)((int)(uint)param_2[uVar5] >> (local_30[0] & 0xff)) &
                 ((byte)(0xf0 >> (local_30[0] & 0xff)) & 0xf0 | (byte)(0xf >> (local_30[0] & 0xff)))
            ;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
      }
      else if (uVar5 < 5) {
        if ((uVar5 == 2) && (uVar6 = param_1[1], uVar6 != 0)) {
          uVar5 = 0;
          do {
            param_2[uVar5] = param_2[uVar5] >> 1 & 0x55;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
      }
      else if (uVar5 == 8) {
        uVar6 = iVar8 * iVar4;
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            bVar1 = param_2[uVar5];
            __aeabi_uidivmod(uVar5,iVar8);
            param_2[uVar5] = (byte)((int)(uint)bVar1 >> (local_30[extraout_r1_00] & 0xff));
            uVar5 = uVar5 + 1;
          } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
        }
      }
      else if ((uVar5 == 0x10) && (uVar6 = iVar8 * iVar4, uVar6 != 0)) {
        uVar5 = 0;
        do {
          bVar1 = *param_2;
          bVar2 = param_2[1];
          __aeabi_uidivmod(uVar5,iVar8);
          uVar5 = uVar5 + 1;
          iVar4 = (int)((uint)bVar1 * 0x100 + (uint)bVar2 & 0xffff) >>
                  (local_30[extraout_r1] & 0xff);
          *param_2 = (byte)((uint)iVar4 >> 8);
          param_2[1] = (byte)iVar4;
          param_2 = param_2 + 2;
        } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
      }
    }
  }
  return;
}


