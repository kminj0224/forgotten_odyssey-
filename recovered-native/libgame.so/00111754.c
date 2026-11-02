/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00111754  Symbol: Unit_Attack_Timeing */

/* Unit_Attack_Timeing(_Unit_Stage*) */

byte Unit_Attack_Timeing(_Unit_Stage *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(iVar3 + 0x44);
  iVar2 = __aeabi_fcmpeq(uVar4,0);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar3 + 0x3c),uVar4);
    if (iVar2 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(iVar3 + 0x4c) ^ 1;
    }
  }
  else {
    bVar1 = 1;
  }
  return bVar1;
}


