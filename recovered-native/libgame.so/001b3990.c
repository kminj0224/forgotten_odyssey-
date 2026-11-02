/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b3990  Symbol: FUN_001b3990 */

undefined FUN_001b3990(int *param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar2 = puVar3[1];
  if (iVar2 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      iVar2 = puVar3[1];
    }
    else {
      iVar2 = puVar3[1];
    }
  }
  puVar3[1] = iVar2 + -1;
  uVar1 = *(undefined *)*puVar3;
  *puVar3 = (undefined *)*puVar3 + 1;
  return uVar1;
}


