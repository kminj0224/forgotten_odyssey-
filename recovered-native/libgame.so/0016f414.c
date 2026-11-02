/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016f414  Symbol: png_do_quantize */

void png_do_quantize(uint *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar7 = *param_1;
  cVar3 = *(char *)(param_1 + 2);
  if (param_3 == 0) {
LAB_0016f436:
    if ((param_4 != 0) &&
       (((cVar3 == '\x03' && (*(char *)((int)param_1 + 9) == '\b')) && (uVar7 != 0)))) {
      uVar5 = 0;
      do {
        param_2[uVar5] = *(byte *)(param_4 + (uint)param_2[uVar5]);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
  }
  else {
    if ((cVar3 == '\x02') && (*(char *)((int)param_1 + 9) == '\b')) {
      uVar5 = 8;
      if (uVar7 != 0) {
        uVar5 = 0;
        pbVar6 = param_2;
        do {
          bVar4 = *pbVar6;
          pbVar1 = pbVar6 + 1;
          pbVar2 = pbVar6 + 2;
          pbVar6 = pbVar6 + 3;
          param_2[uVar5] =
               *(byte *)(param_3 +
                        (((int)(uint)*pbVar1 >> 3) << 5 | ((int)(uint)bVar4 >> 3) << 10 |
                        (int)(uint)*pbVar2 >> 3));
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
LAB_0016f488:
        uVar5 = (uint)*(byte *)((int)param_1 + 9);
      }
    }
    else {
      if ((param_3 == 0) || ((cVar3 != '\x06' || (*(char *)((int)param_1 + 9) != '\b'))))
      goto LAB_0016f436;
      uVar5 = 8;
      if (uVar7 != 0) {
        uVar5 = 0;
        pbVar6 = param_2;
        do {
          bVar4 = *pbVar6;
          pbVar1 = pbVar6 + 1;
          pbVar2 = pbVar6 + 2;
          pbVar6 = pbVar6 + 4;
          param_2[uVar5] =
               *(byte *)(param_3 +
                        (((int)(uint)*pbVar1 >> 3) << 5 | ((int)(uint)bVar4 >> 3) << 10 |
                        (int)(uint)*pbVar2 >> 3));
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
        goto LAB_0016f488;
      }
    }
    *(undefined *)(param_1 + 2) = 3;
    *(undefined *)((int)param_1 + 10) = 1;
    *(char *)((int)param_1 + 0xb) = (char)uVar5;
    if (uVar5 < 8) {
      param_1[1] = uVar5 * uVar7 + 7 >> 3;
    }
    else {
      param_1[1] = (uVar5 >> 3) * uVar7;
    }
  }
  return;
}


