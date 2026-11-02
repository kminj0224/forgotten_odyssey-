/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016f508  Symbol: png_do_read_intrapixel */

void png_do_read_intrapixel(uint *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = DAT_0016f5b0;
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if ((int)(uVar3 << 0x1e) < 0) {
    uVar5 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      iVar6 = 3;
      if (uVar3 != 2) {
        if (uVar3 != 6) {
          return;
        }
        iVar6 = 4;
      }
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          *param_2 = param_2[1] + *param_2;
          param_2[2] = param_2[1] + param_2[2];
          param_2 = param_2 + iVar6;
        } while (uVar4 < uVar5);
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      iVar6 = 6;
      if (uVar3 != 2) {
        if (uVar3 != 6) {
          return;
        }
        iVar6 = 8;
      }
      if (uVar5 != 0) {
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 1;
          uVar1 = CONCAT11(*param_2,param_2[1]) + 0x10000 + (uint)CONCAT11(param_2[2],param_2[3]) &
                  uVar4;
          param_2[1] = (char)uVar1;
          uVar2 = (uint)CONCAT11(param_2[2],param_2[3]) + (uint)CONCAT11(param_2[4],param_2[5]) +
                  0x10000 & uVar4;
          *param_2 = (char)(uVar1 >> 8);
          param_2[4] = (char)(uVar2 >> 8);
          param_2[5] = (char)uVar2;
          param_2 = param_2 + iVar6;
        } while (uVar3 < uVar5);
      }
    }
  }
  return;
}


