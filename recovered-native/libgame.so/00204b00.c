/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204b00  Symbol: FUN_00204b00 */

void FUN_00204b00(int param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  undefined in_r12;
  bool bVar5;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  bVar5 = (uVar4 & 0x800) != 0;
  if (bVar5) {
    in_r12 = 0x2b;
  }
  *param_2 = 0x25;
  if (bVar5) {
    param_2[1] = in_r12;
    param_2 = param_2 + 2;
  }
  else {
    param_2 = param_2 + 1;
  }
  puVar1 = param_2;
  if ((uVar4 & 0x400) != 0) {
    puVar1 = param_2 + 1;
    *param_2 = 0x23;
  }
  if (param_3 != 0) {
    puVar1[2] = (char)param_3;
  }
  *puVar1 = 0x2e;
  uVar3 = uVar4 & 0x104;
  puVar1[1] = 0x2a;
  if (param_3 != 0) {
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = puVar1 + 2;
  }
  if (uVar3 == 4) {
    *puVar1 = 0x66;
  }
  else {
    if (uVar3 == 0x100) {
      if ((uVar4 & 0x4000) == 0) {
        uVar2 = 0x65;
      }
      else {
        uVar2 = 0x45;
      }
      *puVar1 = uVar2;
      puVar1[1] = 0;
      return;
    }
    bVar5 = (uVar4 & 0x4000) == 0;
    if (bVar5) {
      uVar3 = 0x67;
    }
    uVar2 = (undefined)uVar3;
    if (!bVar5) {
      uVar2 = 0x47;
    }
    *puVar1 = uVar2;
  }
  puVar1[1] = 0;
  return;
}


