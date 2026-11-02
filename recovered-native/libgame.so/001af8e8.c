/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af8e8  Symbol: FUN_001af8e8 */

undefined4 * FUN_001af8e8(int *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  if (DAT_001af968 < param_3) {
    FUN_001af0e8(param_1,3);
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 + 8) - (param_3 & 7);
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)jpeg_get_large(param_1,param_3 + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_001af0e8(param_1,4);
  }
  *(uint *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 0x10 + param_3;
  iVar3 = iVar3 + (param_2 + 0xe) * 4;
  uVar2 = *(undefined4 *)(iVar3 + 4);
  puVar1[1] = param_3;
  *puVar1 = uVar2;
  puVar1[2] = 0;
  *(undefined4 **)(iVar3 + 4) = puVar1;
  return puVar1 + 4;
}


