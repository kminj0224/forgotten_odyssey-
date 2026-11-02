/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab6fe  Symbol: FUN_001ab6fe */

void FUN_001ab6fe(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  bVar1 = *param_4;
  param_4 = param_4 + 1;
  if (param_3 == 1) {
    uVar2 = FUN_001ac1d4();
  }
  if ((int)((uint)bVar1 * 0x100 + -2 + (uint)*param_4) < 1) {
    FUN_001ac0ba((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_4 + 1);
  }
  FUN_001ab7a8();
  return;
}


