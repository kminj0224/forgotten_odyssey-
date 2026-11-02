/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00175794  Symbol: png_handle_cHRM */

void png_handle_cHRM(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  FILE *__stream;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  int local_2c;
  
  iVar1 = DAT_00175adc;
  iVar19 = DAT_00175ad8 + 0x1757aa;
  local_2c = **(int **)(iVar19 + DAT_00175adc);
  iVar13 = *(int *)(param_1 + 300);
  if (-1 < iVar13 << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar19 + DAT_00175b1c);
  }
  iVar10 = DAT_00175b24;
  if (-1 < iVar13 << 0x1d) {
    if (iVar13 << 0x1e < 0) {
      png_warning(param_1,iVar19 + DAT_00175b20);
    }
    if (((param_2 == 0) || (iVar10 = DAT_00175b28, (*(uint *)(param_2 + 8) & DAT_00175ae0) != 4)) &&
       (iVar10 = DAT_00175ae4, param_3 == 0x20)) {
      png_crc_read(param_1,&local_4c,0x20);
      iVar13 = png_crc_finish(param_1,0);
      if (iVar13 == 0) {
        iVar10 = (uint)local_4c * 0x1000000 + (uint)local_4b * 0x10000 + (uint)local_49 +
                 (uint)local_4a * 0x100;
        uVar2 = __floatsisf(iVar10);
        uVar2 = __divsf3(uVar2,DAT_00175ae8);
        iVar11 = (uint)local_48 * 0x1000000 + (uint)local_47 * 0x10000 + (uint)local_45 +
                 (uint)local_46 * 0x100;
        uVar3 = __floatsisf(iVar11);
        uVar3 = __divsf3(uVar3,DAT_00175ae8);
        iVar12 = (uint)local_44 * 0x1000000 + (uint)local_43 * 0x10000 + (uint)local_41 +
                 (uint)local_42 * 0x100;
        uVar4 = __floatsisf(iVar12);
        uVar4 = __divsf3(uVar4,DAT_00175ae8);
        iVar14 = (uint)local_40 * 0x1000000 + (uint)local_3f * 0x10000 + (uint)local_3d +
                 (uint)local_3e * 0x100;
        uVar5 = __floatsisf(iVar14);
        uVar5 = __divsf3(uVar5,DAT_00175ae8);
        iVar15 = (uint)local_3c * 0x1000000 + (uint)local_3b * 0x10000 + (uint)local_39 +
                 (uint)local_3a * 0x100;
        uVar6 = __floatsisf(iVar15);
        uVar6 = __divsf3(uVar6,DAT_00175ae8);
        iVar16 = (uint)local_38 * 0x1000000 + (uint)local_37 * 0x10000 + (uint)local_35 +
                 (uint)local_36 * 0x100;
        uVar7 = __floatsisf(iVar16);
        uVar7 = __divsf3(uVar7,DAT_00175ae8);
        iVar17 = (uint)local_34 * 0x1000000 + (uint)local_33 * 0x10000 + (uint)local_31 +
                 (uint)local_32 * 0x100;
        uVar8 = __floatsisf(iVar17);
        uVar8 = __divsf3(uVar8,DAT_00175ae8);
        iVar20 = (uint)local_30 * 0x1000000 + (uint)local_2f * 0x10000 + (uint)local_2d +
                 (uint)local_2e * 0x100;
        uVar9 = __floatsisf(iVar20);
        uVar9 = __divsf3(uVar9,DAT_00175ae8);
        iVar13 = DAT_00175b10;
        if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x14)) {
          uVar21 = __extendsfdf2(uVar2);
          __extendsfdf2(uVar3);
          __extendsfdf2(uVar4);
          __extendsfdf2(uVar5);
          uVar22 = __extendsfdf2(uVar6);
          uVar23 = __extendsfdf2(uVar7);
          uVar24 = __extendsfdf2(uVar8);
          uVar25 = __extendsfdf2(uVar9);
          png_set_cHRM(param_1,param_2,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
          png_set_cHRM_fixed(param_1,param_2,iVar10,iVar11,iVar12,iVar14,iVar15,iVar16,iVar17,iVar20
                             ,uVar22,uVar23,uVar24,uVar25);
        }
        else if (((2000 < (uint)(DAT_00175aec + iVar10)) ||
                 ((2000 < (uint)(DAT_00175af0 + iVar11) || (2000 < (uint)(DAT_00175af4 + iVar12)))))
                || ((2000 < (uint)(iVar14 + DAT_00175af8) ||
                    ((((2000 < (uint)(iVar15 + DAT_00175afc) ||
                       (2000 < (uint)(iVar16 + DAT_00175b00))) ||
                      (2000 < (uint)(iVar17 + DAT_00175b04))) ||
                     (2000 < (uint)(iVar20 + DAT_00175b08))))))) {
          png_warning(param_1,iVar19 + DAT_00175b0c);
          iVar13 = *(int *)(iVar19 + iVar13);
          pcVar18 = (char *)(DAT_00175b14 + iVar19);
          uVar21 = __extendsfdf2(uVar2);
          uVar22 = __extendsfdf2(uVar3);
          uVar23 = __extendsfdf2(uVar4);
          uVar24 = __extendsfdf2(uVar5);
          __stream = (FILE *)(iVar13 + 0xa8);
          fprintf(__stream,pcVar18,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                  (int)((ulonglong)uVar22 >> 0x20),(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                  (int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
          pcVar18 = (char *)(DAT_00175b18 + iVar19);
          uVar21 = __extendsfdf2(uVar6);
          uVar22 = __extendsfdf2(uVar7);
          uVar23 = __extendsfdf2(uVar8);
          uVar24 = __extendsfdf2(uVar9);
          fprintf(__stream,pcVar18,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                  (int)((ulonglong)uVar22 >> 0x20),(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                  (int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
        }
      }
      goto LAB_001757f4;
    }
  }
  png_warning(param_1,iVar19 + iVar10);
  png_crc_finish(param_1,param_3);
LAB_001757f4:
  if (local_2c == **(int **)(iVar19 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


