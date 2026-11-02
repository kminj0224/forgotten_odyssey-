/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001afd4c  Symbol: FUN_001afd4c */

void FUN_001afd4c(undefined param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_2[6];
  puVar1 = (undefined *)*puVar3;
  *puVar1 = param_1;
  *puVar3 = puVar1 + 1;
  iVar2 = puVar3[1];
  puVar3[1] = iVar2 + -1;
  if ((iVar2 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_2), iVar2 == 0)) {
    *(undefined4 *)(*param_2 + 0x14) = 0x19;
    (**(code **)*param_2)(param_2);
  }
  return;
}


