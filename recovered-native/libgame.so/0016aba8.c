/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016aba8  Symbol: png_do_strip_filler */

void png_do_strip_filler(uint *param_1,undefined *param_2,uint param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  
  cVar2 = *(char *)(param_1 + 2);
  uVar5 = *param_1;
  if (cVar2 == '\x02') {
LAB_0016abea:
    if (*(char *)((int)param_1 + 10) == '\x04') {
      if (*(char *)((int)param_1 + 9) == '\b') {
        if ((int)(param_3 << 0x18) < 0) {
          iVar8 = uVar5 * 2;
          if (1 < uVar5) {
            puVar4 = param_2 + 3;
            puVar7 = param_2 + 4;
            do {
              *puVar4 = *puVar7;
              puVar4[1] = puVar7[1];
              puVar1 = puVar7 + 2;
              puVar7 = puVar7 + 4;
              puVar4[2] = *puVar1;
              puVar4 = puVar4 + 3;
            } while (param_2 + uVar5 * 3 != puVar4);
          }
        }
        else {
          iVar8 = 0;
          if (uVar5 != 0) {
            uVar6 = 0;
            puVar4 = param_2;
            do {
              uVar6 = uVar6 + 1;
              *param_2 = puVar4[1];
              param_2[1] = puVar4[2];
              puVar7 = puVar4 + 3;
              puVar4 = puVar4 + 4;
              param_2[2] = *puVar7;
              param_2 = param_2 + 3;
            } while (uVar6 < uVar5);
            iVar8 = uVar5 << 1;
          }
        }
        *(undefined *)((int)param_1 + 0xb) = 0x18;
        param_1[1] = iVar8 + uVar5;
      }
      else {
        if ((int)(param_3 << 0x18) < 0) {
          if (1 < uVar5) {
            puVar4 = param_2 + 8;
            param_2 = param_2 + 6;
            uVar6 = 1;
            do {
              uVar6 = uVar6 + 1;
              *param_2 = *puVar4;
              param_2[1] = puVar4[1];
              param_2[2] = puVar4[2];
              param_2[3] = puVar4[3];
              param_2[4] = puVar4[4];
              puVar7 = puVar4 + 5;
              puVar4 = puVar4 + 8;
              param_2[5] = *puVar7;
              param_2 = param_2 + 6;
            } while (uVar6 != uVar5);
          }
        }
        else if (uVar5 != 0) {
          uVar6 = 0;
          puVar4 = param_2;
          do {
            uVar6 = uVar6 + 1;
            *param_2 = puVar4[2];
            param_2[1] = puVar4[3];
            param_2[2] = puVar4[4];
            param_2[3] = puVar4[5];
            param_2[4] = puVar4[6];
            puVar7 = puVar4 + 7;
            puVar4 = puVar4 + 8;
            param_2[5] = *puVar7;
            param_2 = param_2 + 6;
          } while (uVar6 < uVar5);
        }
        *(undefined *)((int)param_1 + 0xb) = 0x30;
        param_1[1] = uVar5 * 6;
      }
      *(undefined *)((int)param_1 + 10) = 3;
      goto LAB_0016abc6;
    }
  }
  else if (cVar2 == '\x06') {
    if ((param_3 & 0x400000) == 0) {
      return;
    }
    goto LAB_0016abea;
  }
  if (cVar2 != '\0') {
    if (cVar2 != '\x04') goto LAB_0016abc6;
    if ((param_3 & 0x400000) == 0) {
      return;
    }
  }
  if (*(char *)((int)param_1 + 10) == '\x02') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if ((int)(param_3 << 0x18) < 0) {
        if (uVar5 != 0) {
          uVar6 = 0;
          puVar4 = param_2;
          do {
            uVar3 = *puVar4;
            puVar4 = puVar4 + 2;
            param_2[uVar6] = uVar3;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar5);
        }
      }
      else if (uVar5 != 0) {
        uVar6 = 0;
        puVar4 = param_2;
        do {
          puVar7 = puVar4 + 1;
          puVar4 = puVar4 + 2;
          param_2[uVar6] = *puVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      *(undefined *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar5;
    }
    else {
      if ((int)(param_3 << 0x18) < 0) {
        if (1 < uVar5) {
          puVar4 = param_2 + 4;
          uVar6 = 1;
          param_2 = param_2 + 2;
          do {
            uVar6 = uVar6 + 1;
            *param_2 = *puVar4;
            puVar7 = puVar4 + 1;
            puVar4 = puVar4 + 4;
            param_2[1] = *puVar7;
            param_2 = param_2 + 2;
          } while (uVar6 != uVar5);
        }
      }
      else if (uVar5 != 0) {
        uVar6 = 0;
        puVar4 = param_2;
        do {
          uVar6 = uVar6 + 1;
          *param_2 = puVar4[2];
          puVar7 = puVar4 + 3;
          puVar4 = puVar4 + 4;
          param_2[1] = *puVar7;
          param_2 = param_2 + 2;
        } while (uVar6 < uVar5);
      }
      *(undefined *)((int)param_1 + 0xb) = 0x10;
      param_1[1] = uVar5 << 1;
    }
    *(undefined *)((int)param_1 + 10) = 1;
  }
LAB_0016abc6:
  if ((param_3 & 0x400000) != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
  }
  return;
}


