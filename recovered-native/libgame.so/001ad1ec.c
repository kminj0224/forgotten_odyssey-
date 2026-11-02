/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad1ec  Symbol: jinit_upsampler */

void jinit_upsampler(int *param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  
  iVar18 = DAT_001ad390;
  piVar2 = (int *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x76] = (int)piVar2;
  iVar18 = iVar18 + 0x1ad216;
  *piVar2 = DAT_001ad394 + iVar18;
  piVar2[1] = DAT_001ad398 + iVar18;
  piVar2[2] = 0;
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    (**(code **)*param_1)(param_1);
  }
  iVar15 = param_1[0x36];
  if (param_1[9] < 1) {
    return;
  }
  iVar17 = 0;
  iVar7 = DAT_001ad39c + iVar18;
  iVar8 = DAT_001ad3a0 + iVar18;
  iVar9 = DAT_001ad3a4 + iVar18;
  iVar10 = DAT_001ad3a8 + iVar18;
  piVar16 = piVar2;
  do {
    iVar6 = *(int *)(iVar15 + 0x24);
    iVar11 = param_1[0x50];
    iVar5 = *(int *)(iVar15 + 8);
    iVar3 = __divsi3(*(int *)(iVar15 + 0x28) * *(int *)(iVar15 + 0xc),param_1[0x51]);
    iVar12 = param_1[0x4e];
    iVar13 = param_1[0x4f];
    piVar16[0x19] = iVar3;
    if (*(int *)(iVar15 + 0x34) == 0) {
      piVar16[0xd] = iVar18 + DAT_001ad3ac;
LAB_001ad264:
      if (param_1[9] <= iVar17 + 1) {
        return;
      }
    }
    else {
      iVar5 = __divsi3(iVar6 * iVar5,iVar11);
      if ((iVar3 == iVar13) && (iVar5 == iVar12)) {
        piVar16[0xd] = iVar10;
        goto LAB_001ad264;
      }
      if (iVar5 * 2 - iVar12 == 0) {
        if (iVar3 == iVar13) {
          piVar16[0xd] = iVar9;
        }
        else {
          if (iVar3 * 2 - iVar13 != 0) goto LAB_001ad2de;
          piVar16[0xd] = iVar8;
        }
      }
      else {
LAB_001ad2de:
        __aeabi_idivmod(iVar12,iVar5);
        if ((extraout_r1 == 0) && (__aeabi_idivmod(iVar13,iVar3), extraout_r1_00 == 0)) {
          piVar16[0xd] = iVar7;
          uVar1 = __divsi3(iVar12,iVar5);
          *(undefined *)((int)piVar2 + iVar17 + 0x8c) = uVar1;
          uVar1 = __divsi3(iVar13,iVar3);
          *(undefined *)((int)piVar2 + iVar17 + 0x96) = uVar1;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x27;
          (**(code **)*param_1)(param_1);
        }
      }
      pcVar14 = *(code **)(param_1[1] + 8);
      uVar4 = jround_up(param_1[0x1c],param_1[0x4e]);
      iVar3 = (*pcVar14)(param_1,1,uVar4,param_1[0x4f]);
      piVar16[3] = iVar3;
      if (param_1[9] <= iVar17 + 1) {
        return;
      }
    }
    iVar17 = iVar17 + 1;
    piVar16 = piVar16 + 1;
    iVar15 = iVar15 + 0x58;
  } while( true );
}


