/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a645c  Symbol: FUN_001a645c */

void FUN_001a645c(int *param_1,undefined param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[6];
  puVar1 = (undefined *)*puVar3;
  *puVar1 = param_2;
  *puVar3 = puVar1 + 1;
  iVar2 = puVar3[1];
  puVar3[1] = iVar2 + -1;
  if ((iVar2 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(), iVar2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  return;
}


