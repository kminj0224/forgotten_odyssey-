/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016fc30  Symbol: png_init_read_transformations */

void png_init_read_transformations(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  int extraout_r1;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined4 in_stack_ffffffb0;
  uint in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  uint local_40;
  uint local_38;
  uint local_34;
  byte local_30;
  uint local_2c;
  
  uVar15 = (uint)*(byte *)(param_1 + 0x1ea);
  iVar12 = DAT_0016ff98 + 0x16fc50;
  if (((int)(*(uint *)(param_1 + 0x134) << 0x17) < 0) && (-1 < (int)(uVar15 << 0x1e))) {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x800;
    if ((*(uint *)(param_1 + 0x134) & 0x1100) != 0x1100) goto switchD_0016fe74_caseD_0;
LAB_0016fe5a:
    if (-1 < (int)(uVar15 << 0x1e)) {
      if (*(byte *)(param_1 + DAT_0016ffac) < 0x11) {
        iVar12 = iVar12 + DAT_0016ffb0;
                    /* WARNING: Could not emulate address calculation at 0x0016fe70 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)(iVar12 + (uint)*(byte *)(param_1 + DAT_0016ffac) * 4) + iVar12))();
        return;
      }
      goto switchD_0016fe74_caseD_0;
    }
    if (uVar15 == 3) {
      iVar12 = (uint)*(byte *)(param_1 + 0x1fc) * 3;
      *(ushort *)(param_1 + 0x1fe) = (ushort)*(byte *)(iVar12 + *(int *)(param_1 + 0x1d8));
      iVar12 = *(int *)(param_1 + 0x1d8) + iVar12;
      *(ushort *)(param_1 + 0x200) = (ushort)*(byte *)(iVar12 + 1);
      *(ushort *)(param_1 + DAT_0016ffa4) = (ushort)*(byte *)(iVar12 + 2);
      if (((*(int *)(param_1 + 0x134) << 0xc < 0) && (-1 < *(int *)(param_1 + 0x134) << 6)) &&
         (uVar4 = *(ushort *)(param_1 + 0x1de), uVar4 != 0)) {
        iVar12 = 0;
        do {
          pbVar13 = (byte *)(*(int *)(param_1 + 0x24c) + iVar12);
          iVar12 = iVar12 + 1;
          *pbVar13 = ~*pbVar13;
        } while (iVar12 < (int)(uint)uVar4);
      }
      memcpy((void *)(param_1 + DAT_0016ff9c),(void *)(param_1 + 0x1fc),10);
      goto LAB_0016fedc;
    }
    memcpy((void *)(param_1 + DAT_00170318),(void *)(param_1 + 0x1fc),10);
LAB_0016fc94:
    uVar14 = *(uint *)(param_1 + 0x134);
  }
  else {
    if (((*(uint *)(param_1 + 0x134) & 0x4180) == 0x4080) &&
       ((*(short *)(param_1 + 0x200) == *(short *)(param_1 + 0x1fe) &&
        (sVar7 = *(short *)(param_1 + DAT_0016ffa4), sVar7 == *(short *)(param_1 + 0x200))))) {
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x800;
      *(short *)(param_1 + 0x204) = sVar7;
    }
    if ((*(uint *)(param_1 + 0x134) & 0x1100) == 0x1100) goto LAB_0016fe5a;
switchD_0016fe74_caseD_0:
    memcpy((void *)(param_1 + DAT_0016ff9c),(void *)(param_1 + 0x1fc),10);
    if (uVar15 != 3) goto LAB_0016fc94;
LAB_0016fedc:
    uVar14 = (uint)*(ushort *)(param_1 + 0x1de);
    if (uVar14 == 0) goto LAB_0016fc94;
    __mulsf3(*(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x220));
    uVar20 = __extendsfdf2();
    uVar20 = __subdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016ff88,DAT_0016ff8c);
    iVar12 = __aeabi_dcmplt((int)uVar20,DAT_0016ffb4 & (uint)((ulonglong)uVar20 >> 0x20),
                            DAT_0016ff90,DAT_0016ff94);
    if (iVar12 == 0) goto LAB_0016fc94;
    if (uVar14 != 0) {
      bVar18 = false;
      iVar12 = 0;
      do {
        if ((byte)(*(char *)(*(int *)(param_1 + 0x24c) + iVar12) - 1U) < 0xfe) {
          bVar18 = true;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar14);
      if (bVar18) goto LAB_0016fc94;
    }
    uVar14 = DAT_0016ffb8 & *(uint *)(param_1 + 0x134);
    *(uint *)(param_1 + 0x134) = uVar14;
  }
  if (((uVar14 & DAT_0016ffa0) == 0) ||
     (iVar9 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 0x220),0), iVar12 = DAT_00170308, iVar9 != 0)
     ) {
    bVar18 = uVar15 == 3;
    if (((int)(uVar14 << 0x18) < 0) && (bVar18)) {
      bVar5 = *(byte *)(param_1 + 0x1fe);
      bVar3 = *(byte *)(param_1 + 0x200);
      uVar15 = (uint)*(ushort *)(param_1 + 0x1de);
      pbVar13 = *(byte **)(param_1 + 0x1d8);
      bVar1 = *(byte *)(param_1 + DAT_0016ffa4);
      if (uVar15 != 0) {
        iVar12 = 0;
        do {
          while (uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x24c) + iVar12), uVar14 == 0) {
            pbVar13[2] = bVar1;
            pbVar13[1] = bVar3;
            *pbVar13 = bVar5;
LAB_0016fcfc:
            iVar12 = iVar12 + 1;
            pbVar13 = pbVar13 + 3;
            if ((int)uVar15 <= iVar12) goto LAB_0016fd92;
          }
          if (uVar14 == 0xff) goto LAB_0016fcfc;
          uVar14 = (0xff - uVar14) * (uint)bVar5 + uVar14 * *pbVar13 + 0x80;
          *pbVar13 = (byte)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff) >> 8);
          uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x24c) + iVar12);
          uVar14 = (0xff - uVar14) * (uint)bVar3 + uVar14 * pbVar13[1] + 0x80;
          pbVar13[1] = (byte)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff) >> 8);
          uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x24c) + iVar12);
          iVar12 = iVar12 + 1;
          uVar14 = (0xff - uVar14) * (uint)bVar1 + uVar14 * pbVar13[2] + 0x80;
          pbVar13[2] = (byte)((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff) >> 8);
          pbVar13 = pbVar13 + 3;
        } while (iVar12 < (int)uVar15);
LAB_0016fd92:
        uVar14 = *(uint *)(param_1 + 0x134);
      }
      uVar14 = uVar14 & 0xffffff7f | 0x40000;
      *(uint *)(param_1 + 0x134) = uVar14;
      bVar18 = true;
    }
    if (((uVar14 & 8) != 0) && (bVar18)) {
      sVar7 = *(short *)(param_1 + 0x1dc);
      uVar10 = 8 - *(byte *)(param_1 + 0x240);
      uVar14 = 8 - *(byte *)(param_1 + DAT_0016ffa8);
      uVar15 = 8 - *(byte *)(param_1 + DAT_0016ffa8 + 1);
      if (sVar7 != 0) {
        iVar12 = 0;
        do {
          pbVar13 = (byte *)(*(int *)(param_1 + 0x1d8) + iVar12);
          *pbVar13 = (byte)((int)(uint)*pbVar13 >> (uVar10 & -(uint)(uVar10 < 9) & 0xff));
          iVar9 = *(int *)(param_1 + 0x1d8) + iVar12;
          *(char *)(iVar9 + 1) =
               (char)((int)(uint)*(byte *)(iVar9 + 1) >> (uVar14 & -(uint)(uVar14 < 9) & 0xff));
          iVar9 = *(int *)(param_1 + 0x1d8) + iVar12;
          iVar12 = iVar12 + 3;
          *(char *)(iVar9 + 2) =
               (char)((int)(uint)*(byte *)(iVar9 + 2) >> (uVar15 & -(uint)(uVar15 < 9) & 0xff));
        } while (iVar12 != ((ushort)(sVar7 - 1) + 1) * 3);
      }
    }
    return;
  }
  png_build_gamma_table(param_1,*(undefined *)(param_1 + DAT_00170308));
  dVar21 = (double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8);
  uVar14 = *(int *)(param_1 + 0x134) << 0x18;
  if (-1 < (int)uVar14) {
    if (uVar15 == 3) {
      uVar4 = *(ushort *)(param_1 + 0x1dc);
      pbVar13 = *(byte **)(param_1 + 0x1d8);
      iVar12 = extraout_r1;
      if (uVar4 != 0) {
        iVar12 = 0;
        do {
          iVar12 = iVar12 + 3;
          *pbVar13 = *(byte *)(*(int *)(param_1 + 0x228) + (uint)*pbVar13);
          pbVar13[1] = *(byte *)(*(int *)(param_1 + 0x228) + (uint)pbVar13[1]);
          bVar5 = *(byte *)(*(int *)(param_1 + 0x228) + (uint)pbVar13[2]);
          uVar14 = (uint)bVar5;
          pbVar13[2] = bVar5;
          pbVar13 = pbVar13 + 3;
        } while (iVar12 != (uint)uVar4 * 3);
      }
      *(uint *)(param_1 + 0x134) = DAT_0017031c & *(uint *)(param_1 + 0x134);
      FUN_0016fda8(uVar14,iVar12,1);
      return;
    }
    FUN_0016fe32();
    return;
  }
  if (uVar15 != 3) {
    uVar19 = __floatunsidf((1 << (uint)*(byte *)(param_1 + iVar12)) + -1);
    dVar21 = (double)CONCAT44(DAT_001702fc,DAT_001702f8);
    cVar2 = *(char *)(param_1 + 500);
    if (cVar2 != '\x02') {
      if (cVar2 == '\x03') goto LAB_0017056a;
      if (cVar2 != '\x01') goto LAB_0017000c;
      __extendsfdf2(*(undefined4 *)(param_1 + 0x224));
      dVar21 = (double)CONCAT44(DAT_001705fc,DAT_001705f8);
      goto LAB_0017000c;
    }
    uVar17 = *(undefined4 *)(param_1 + 0x220);
    goto LAB_00170220;
  }
  pbVar13 = *(byte **)(param_1 + 0x1d8);
  uVar15 = (uint)*(ushort *)(param_1 + 0x1dc);
  cVar2 = *(char *)(param_1 + 500);
  if (cVar2 == '\x02') {
    uVar14 = 3;
    goto LAB_001705b0;
  }
  if (cVar2 == '\x03') {
    uVar17 = *(undefined4 *)(param_1 + 0x1f8);
    uVar20 = __extendsfdf2(uVar17);
    uVar14 = __divdf3(DAT_00170720,DAT_00170724,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    __mulsf3(uVar17,*(undefined4 *)(param_1 + 0x224));
    uVar20 = __extendsfdf2();
    dVar21 = (double)__divdf3(DAT_00170720,DAT_00170724,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
                             );
    uVar20 = __subdf3(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20),DAT_00170720,DAT_00170724);
    iVar12 = __aeabi_dcmplt((int)uVar20,DAT_00170740 & (uint)((ulonglong)uVar20 >> 0x20),
                            DAT_00170728,DAT_0017072c);
    if (iVar12 == 0) {
      uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x1fe));
      __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170730,DAT_00170734);
      pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
      uVar20 = __muldf3();
      __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170738,DAT_0017073c);
      uVar8 = __fixunsdfsi();
      uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x200));
      __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170730,DAT_00170734);
      pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
      uVar20 = __muldf3();
      __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170738,DAT_0017073c);
      local_2c = __fixunsdfsi();
      local_2c = local_2c & 0xff;
      uVar20 = __floatunsidf(*(undefined2 *)(param_1 + DAT_00170744));
      __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170730,DAT_00170734);
      pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
      uVar20 = __muldf3();
      __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170738,DAT_0017073c);
      bVar5 = __fixunsdfsi();
      uVar6 = *(undefined2 *)(param_1 + 0x1fe);
      goto LAB_001703a4;
    }
  }
  else {
    uVar14 = DAT_001705f8;
    if (cVar2 == '\x01') {
      uVar14 = __extendsfdf2(*(undefined4 *)(param_1 + 0x224));
      dVar21 = (double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8);
    }
  }
  uVar6 = *(undefined2 *)(param_1 + 0x1fe);
  local_2c = (uint)*(byte *)(param_1 + 0x200);
  bVar5 = *(byte *)(param_1 + DAT_00170610);
  uVar8 = uVar6;
LAB_001703a4:
  local_30 = (byte)uVar8;
  uVar20 = __floatunsidf(uVar6);
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170600,DAT_00170604);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170608,DAT_0017060c);
  local_40 = __fixunsdfsi();
  local_40 = local_40 & 0xff;
  uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x200));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170600,DAT_00170604);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170608,DAT_0017060c);
  local_38 = __fixunsdfsi();
  local_38 = local_38 & 0xff;
  uVar20 = __floatunsidf(*(undefined2 *)(param_1 + DAT_00170610));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170600,DAT_00170604);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170608,DAT_0017060c);
  uVar20 = __fixunsdfsi();
  uVar11 = (uint)((ulonglong)uVar20 >> 0x20);
  uVar10 = (uint)uVar20 & 0xff;
  local_34 = uVar10;
  while( true ) {
    if (uVar15 != 0) {
      iVar12 = 0;
      uVar11 = 0x228;
      in_stack_ffffffb0 = 0x1de;
      do {
        if ((iVar12 < (int)(uint)*(ushort *)(param_1 + 0x1de)) &&
           (uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x24c) + iVar12), uVar14 != 0xff)) {
          if (uVar14 == 0) {
            pbVar13[2] = bVar5;
            pbVar13[1] = (byte)local_2c;
            *pbVar13 = local_30;
            uVar10 = local_2c;
          }
          else {
            uVar14 = local_40 * (0xff - uVar14) +
                     uVar14 * *(byte *)(*(int *)(param_1 + 0x230) + (uint)*pbVar13) + 0x80;
            *pbVar13 = *(byte *)(*(int *)(param_1 + 0x22c) +
                                (((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff)) * 0x10000 >> 0x18)
                                );
            uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x24c) + iVar12);
            uVar14 = local_38 * (0xff - uVar14) +
                     uVar14 * *(byte *)(*(int *)(param_1 + 0x230) + (uint)pbVar13[1]) + 0x80;
            pbVar13[1] = *(byte *)(*(int *)(param_1 + 0x22c) +
                                  (((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff)) * 0x10000 >>
                                  0x18));
            uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x24c) + iVar12);
            uVar14 = local_34 * (0xff - uVar14) +
                     uVar14 * *(byte *)(*(int *)(param_1 + 0x230) + (uint)pbVar13[2]) + 0x80;
            bVar3 = *(byte *)(*(int *)(param_1 + 0x22c) +
                             (((uVar14 * 0x10000 >> 0x18) + (uVar14 & 0xffff)) * 0x10000 >> 0x18));
            uVar10 = (uint)bVar3;
            pbVar13[2] = bVar3;
          }
        }
        else {
          *pbVar13 = *(byte *)(*(int *)(param_1 + 0x228) + (uint)*pbVar13);
          pbVar13[1] = *(byte *)(*(int *)(param_1 + 0x228) + (uint)pbVar13[1]);
          bVar3 = *(byte *)(*(int *)(param_1 + 0x228) + (uint)pbVar13[2]);
          pbVar13[2] = bVar3;
          uVar10 = (uint)bVar3;
        }
        iVar12 = iVar12 + 1;
        pbVar13 = pbVar13 + 3;
        uVar14 = uVar15;
        in_stack_ffffffb4 = uVar15;
      } while (iVar12 < (int)uVar15);
    }
    uVar15 = DAT_00170614 & *(uint *)(param_1 + 0x134);
    uVar19 = CONCAT44(uVar14,uVar15) | 0x40000;
    *(uint *)(param_1 + 0x134) = uVar15 | 0x40000;
    FUN_0016fda8(uVar10,uVar11,1);
LAB_0017056a:
    uVar17 = *(undefined4 *)(param_1 + 0x1f8);
LAB_00170220:
    uVar20 = __extendsfdf2(uVar17);
    __divdf3(DAT_001702f8,DAT_001702fc,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    __mulsf3(uVar17,*(undefined4 *)(param_1 + 0x224));
    uVar20 = __extendsfdf2();
    dVar21 = (double)__divdf3(DAT_001702f8,DAT_001702fc,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
                             );
LAB_0017000c:
    uVar16 = (undefined4)(uVar19 >> 0x20);
    uVar17 = (undefined4)uVar19;
    uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x204));
    __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
    pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
    uVar20 = __muldf3();
    __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
    uVar6 = __fixunsdfsi();
    uVar14 = DAT_0017030c;
    *(undefined2 *)(param_1 + DAT_0017030c) = uVar6;
    uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x204));
    __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
    pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
    uVar20 = __muldf3();
    __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
    sVar7 = __fixunsdfsi();
    *(short *)(param_1 + 0x204) = sVar7;
    pbVar13 = DAT_00170310;
    if (((*(short *)(param_1 + 0x200) != *(short *)(param_1 + 0x1fe)) ||
        (*(short *)(DAT_00170310 + param_1) != *(short *)(param_1 + 0x200))) ||
       (sVar7 != *(short *)(DAT_00170310 + param_1))) break;
    uVar4 = *(ushort *)(param_1 + uVar14);
    uVar15 = (uint)uVar4;
    *(ushort *)(param_1 + 0x20c) = uVar4;
    iVar12 = DAT_00170618;
    *(short *)(pbVar13 + param_1) = sVar7;
    *(ushort *)(param_1 + iVar12) = uVar4;
    *(ushort *)(param_1 + 0x208) = uVar4;
    *(short *)(param_1 + 0x200) = sVar7;
    *(short *)(param_1 + 0x1fe) = sVar7;
    FUN_0016fe32();
LAB_001705b0:
    iVar12 = *(int *)(param_1 + 0x228);
    local_30 = *(byte *)(iVar12 + (uint)*(ushort *)(param_1 + 0x1fe));
    local_2c = (uint)*(byte *)(iVar12 + (uint)*(ushort *)(param_1 + 0x200));
    bVar5 = *(byte *)(iVar12 + (uint)*(ushort *)(param_1 + DAT_00170610));
    iVar12 = *(int *)(param_1 + 0x230);
    uVar10 = (uint)*(byte *)(iVar12 + (uint)*(ushort *)(param_1 + 0x1fe));
    uVar11 = (uint)*(byte *)(iVar12 + (uint)*(ushort *)(param_1 + 0x200));
    local_40 = uVar10;
    local_38 = uVar11;
    local_34 = (uint)*(byte *)(iVar12 + (uint)*(ushort *)(param_1 + DAT_00170610));
  }
  uVar20 = __floatunsidf();
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
  uVar6 = __fixunsdfsi();
  *(undefined2 *)(param_1 + 0x208) = uVar6;
  uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x200));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
  uVar6 = __fixunsdfsi();
  *(undefined2 *)(param_1 + DAT_00170314) = uVar6;
  pbVar13 = DAT_00170310;
  uVar20 = __floatunsidf(*(undefined2 *)(DAT_00170310 + param_1));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
  uVar6 = __fixunsdfsi();
  *(undefined2 *)(param_1 + 0x20c) = uVar6;
  uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x1fe));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
  uVar6 = __fixunsdfsi();
  *(undefined2 *)(param_1 + 0x1fe) = uVar6;
  uVar20 = __floatunsidf(*(undefined2 *)(param_1 + 0x200));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
  uVar6 = __fixunsdfsi();
  *(undefined2 *)(param_1 + 0x200) = uVar6;
  uVar20 = __floatunsidf(*(undefined2 *)(pbVar13 + param_1));
  __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar17,uVar16);
  pow((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0),dVar21);
  uVar20 = __muldf3();
  __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00170300,DAT_00170304);
  uVar6 = __fixunsdfsi();
  *(undefined2 *)(pbVar13 + param_1) = uVar6;
  FUN_0016fe32();
  return;
}


