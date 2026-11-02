/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016e110  Symbol: png_do_chop */

void png_do_chop(int *param_1,undefined *param_2)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    uVar4 = (uint)*(byte *)((int)param_1 + 10);
    iVar2 = *param_1;
    uVar5 = uVar4 * iVar2;
    if (uVar5 != 0) {
      uVar4 = 0;
      puVar3 = param_2;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 2;
        param_2[uVar4] = uVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
      uVar4 = (uint)*(byte *)((int)param_1 + 10);
      iVar2 = *param_1;
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(char *)((int)param_1 + 0xb) = (char)(uVar4 << 3);
    param_1[1] = iVar2 * uVar4;
  }
  return;
}


