/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ab58  Symbol: png_do_packswap */

void png_do_packswap(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  iVar3 = DAT_0016ab98 + 0x16ab60;
  if (bVar1 < 8) {
    if (bVar1 == 1) {
      iVar3 = iVar3 + DAT_0016ab9c;
    }
    else if (bVar1 == 2) {
      iVar3 = iVar3 + DAT_0016aba4;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      iVar3 = iVar3 + DAT_0016aba0;
    }
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (param_2 < pbVar2) {
      do {
        *param_2 = *(byte *)(iVar3 + (uint)*param_2);
        param_2 = param_2 + 1;
      } while (param_2 < pbVar2);
    }
  }
  return;
}


