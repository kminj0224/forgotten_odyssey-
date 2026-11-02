/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016ab30  Symbol: png_do_swap */

void png_do_swap(int *param_1,undefined *param_2)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)((int)param_1 + 9) == '\x10') &&
     (uVar3 = (uint)*(byte *)((int)param_1 + 10) * *param_1, uVar3 != 0)) {
    uVar2 = 0;
    do {
      uVar1 = param_2[1];
      uVar2 = uVar2 + 1;
      param_2[1] = *param_2;
      *param_2 = uVar1;
      param_2 = param_2 + 2;
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return;
}


