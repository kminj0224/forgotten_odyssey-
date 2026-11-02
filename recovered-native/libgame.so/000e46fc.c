/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e46fc  Symbol: Draw_Unit_Point */

/* Market_Unit::Draw_Unit_Point(bool, int) */

void __thiscall Market_Unit::Draw_Unit_Point(Market_Unit *this,bool param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_24;
  
  iVar6 = *(int *)(DAT_000e47a8 + 0xe4708);
  if (param_1) {
    iVar7 = 0;
    local_24 = 0;
    iVar2 = **(int **)(DAT_000e47ac + 0xe4716);
    iVar3 = **(int **)(DAT_000e47b0 + 0xe4724);
    do {
      piVar5 = (int *)(iVar6 + local_24);
      if (*piVar5 == param_2) {
        *(int *)(this + 0x14c) = piVar5[4];
        uVar1 = __divsi3(piVar5[3],10);
        *(undefined4 *)(this + 0x150) = uVar1;
        *(int *)(this + 0x144) = piVar5[6];
        uVar1 = __divsi3(piVar5[5],10);
        *(undefined4 *)(this + 0x148) = uVar1;
        iVar4 = *(int *)(iVar2 + iVar3 * 0x24 + iVar7 + DAT_000e47b4);
        if (iVar4 < 0x14) {
          iVar4 = piVar5[7] + piVar5[8] * iVar4;
        }
        else {
          iVar4 = 100;
        }
        *(int *)(this + 0x154) = iVar4;
      }
      iVar7 = iVar7 + 4;
      local_24 = local_24 + 0x2c;
    } while (local_24 != 0x18c);
  }
  else {
    iVar2 = 0;
    do {
      piVar5 = (int *)(iVar6 + iVar2);
      if (*piVar5 == param_2) {
        *(undefined4 *)(this + 0x14c) = 0;
        *(undefined4 *)(this + 0x150) = 0;
        *(int *)(this + 0x154) = piVar5[1];
      }
      iVar2 = iVar2 + 0x2c;
    } while (iVar2 != 0x18c);
  }
  return;
}


