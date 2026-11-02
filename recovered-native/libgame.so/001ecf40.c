/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ecf40  Symbol: FUN_001ecf40 */

uint FUN_001ecf40(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*param_1 + -0xc);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = iVar1 - 1;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  do {
    uVar2 = param_3;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    param_3 = uVar2 - 1;
  } while (*(byte *)(*param_1 + uVar2) != param_2);
  return uVar2;
}


