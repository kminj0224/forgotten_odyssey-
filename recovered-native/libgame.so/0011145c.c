/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011145c  Symbol: Unit_Attack_Collision_Pass */

/* Unit_Attack_Collision_Pass(_Unit_Stage*) */

bool Unit_Attack_Collision_Pass(_Unit_Stage *param_1)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  
  puVar2 = *(uint **)(param_1 + 4);
  iVar1 = __aeabi_fcmple(puVar2[9],0);
  bVar3 = false;
  if (iVar1 == 0) {
    if (*puVar2 < 2) {
      iVar1 = -4;
    }
    else {
      iVar1 = -7;
    }
    bVar3 = puVar2[0x19] + iVar1 != 0;
  }
  return bVar3;
}


