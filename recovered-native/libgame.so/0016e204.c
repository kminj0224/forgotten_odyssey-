/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016e204  Symbol: png_do_read_invert_alpha */

void png_do_read_invert_alpha(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar3 = *param_1;
  if (*(char *)(param_1 + 2) == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (uVar3 != 0) {
        pbVar4 = (byte *)(param_2 + param_1[1] + -1);
        uVar1 = 0;
        do {
          uVar1 = uVar1 + 1;
          *pbVar4 = ~*pbVar4;
          pbVar4 = pbVar4 + -4;
        } while (uVar1 < uVar3);
      }
    }
    else if (uVar3 != 0) {
      pbVar4 = (byte *)(param_2 + param_1[1] + -2);
      uVar1 = 0;
      do {
        uVar1 = uVar1 + 1;
        pbVar4[1] = ~pbVar4[1];
        *pbVar4 = ~*pbVar4;
        pbVar4 = pbVar4 + -8;
      } while (uVar1 < uVar3);
    }
  }
  else if (*(char *)(param_1 + 2) == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (uVar3 != 0) {
        uVar1 = 0;
        iVar2 = param_2 + param_1[1];
        do {
          uVar1 = uVar1 + 1;
          *(byte *)(iVar2 + -1) = ~*(byte *)(iVar2 + -1);
          iVar2 = iVar2 + -2;
        } while (uVar1 < uVar3);
      }
    }
    else if (uVar3 != 0) {
      pbVar4 = (byte *)(param_2 + param_1[1] + -2);
      uVar1 = 0;
      do {
        uVar1 = uVar1 + 1;
        pbVar4[1] = ~pbVar4[1];
        *pbVar4 = ~*pbVar4;
        pbVar4 = pbVar4 + -4;
      } while (uVar1 < uVar3);
    }
  }
  return;
}


