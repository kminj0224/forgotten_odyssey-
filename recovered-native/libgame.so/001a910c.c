/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a910c  Symbol: jinit_downsampler */

void jinit_downsampler(int *param_1)

{
  bool bVar1;
  undefined uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  
  iVar6 = DAT_001a92d4 + 0x1a9122;
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x67] = (int)piVar3;
  *piVar3 = iVar6 + DAT_001a92d8;
  piVar3[1] = iVar6 + DAT_001a92dc;
  piVar3[2] = 0;
  if (param_1[0x37] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    (**(code **)*param_1)(param_1);
  }
  iVar13 = param_1[0x15];
  if (param_1[0x13] < 1) {
    return;
  }
  iVar7 = iVar6 + DAT_001a92e0;
  bVar1 = true;
  iVar15 = 0;
  iVar8 = iVar6 + DAT_001a92e4;
  iVar9 = iVar6 + DAT_001a92e8;
  iVar10 = iVar6 + DAT_001a92ec;
  piVar14 = piVar3;
  do {
    iVar4 = __divsi3(*(int *)(iVar13 + 0x24) * *(int *)(iVar13 + 8),param_1[0x45]);
    iVar5 = __divsi3(*(int *)(iVar13 + 0x28) * *(int *)(iVar13 + 0xc),param_1[0x46]);
    iVar11 = param_1[0x43];
    iVar12 = param_1[0x44];
    piVar14[0xd] = iVar5;
    if ((iVar12 != iVar5) || (iVar11 != iVar4)) {
      if (iVar4 * 2 - iVar11 == 0) {
        if (iVar12 != iVar5) {
          if (iVar5 * 2 - iVar12 != 0) goto LAB_001a919a;
          if (param_1[0x39] == 0) {
            piVar14[3] = iVar8;
          }
          else {
            piVar14[3] = iVar9;
            piVar3[2] = 1;
          }
        }
        else {
          piVar14[3] = iVar10;
          bVar1 = false;
        }
      }
      else {
LAB_001a919a:
        __aeabi_idivmod(iVar11,iVar4);
        if ((extraout_r1 == 0) && (__aeabi_idivmod(iVar12,iVar5), extraout_r1_00 == 0)) {
          piVar14[3] = iVar7;
          uVar2 = __divsi3(iVar11,iVar4);
          *(undefined *)((int)piVar3 + iVar15 + 0x5c) = uVar2;
          uVar2 = __divsi3(iVar12,iVar5);
          *(undefined *)((int)piVar3 + iVar15 + 0x66) = uVar2;
          bVar1 = false;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x27;
          (**(code **)*param_1)(param_1);
        }
      }
LAB_001a91e8:
      if (param_1[0x13] <= iVar15 + 1) {
LAB_001a9258:
        if (bVar1) {
          return;
        }
        if (param_1[0x39] == 0) {
          return;
        }
        *(undefined4 *)(*param_1 + 0x14) = 0x65;
        (**(code **)(*param_1 + 4))(param_1,0);
        return;
      }
    }
    else {
      if (param_1[0x39] == 0) {
        piVar14[3] = iVar6 + DAT_001a92f4;
        goto LAB_001a91e8;
      }
      piVar14[3] = iVar6 + DAT_001a92f0;
      piVar3[2] = 1;
      if (param_1[0x13] <= iVar15 + 1) goto LAB_001a9258;
    }
    iVar15 = iVar15 + 1;
    piVar14 = piVar14 + 1;
    iVar13 = iVar13 + 0x58;
  } while( true );
}


