/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016f5b8  Symbol: png_build_gamma_table */

void png_build_gamma_table(int param_1,uint param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  double dVar21;
  double __y;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  uint local_38;
  
  iVar7 = DAT_0016f688 + 0x16f5ce;
  if (param_2 < 9) {
    uVar13 = *(undefined4 *)(param_1 + 0x224);
    uVar20 = __extendsfdf2(uVar13);
    iVar7 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f668,DAT_0016f66c);
    dVar21 = (double)CONCAT44(DAT_0016f674,DAT_0016f670);
    if (iVar7 != 0) {
      __mulsf3(uVar13,*(undefined4 *)(param_1 + 0x220));
      uVar20 = __extendsfdf2();
      dVar21 = (double)__divdf3(DAT_0016f998,DAT_0016f99c,(int)uVar20,
                                (int)((ulonglong)uVar20 >> 0x20));
    }
    iVar7 = png_malloc(param_1,0x100);
    *(int *)(param_1 + 0x228) = iVar7;
    iVar14 = 0;
    while( true ) {
      uVar20 = __floatsidf(iVar14);
      __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f678,DAT_0016f67c);
      pow(dVar21,(double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
      uVar20 = __muldf3();
      __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f680,DAT_0016f684);
      uVar1 = __fixunsdfsi();
      *(undefined *)(iVar7 + iVar14) = uVar1;
      iVar14 = iVar14 + 1;
      if (iVar14 == 0x100) break;
      iVar7 = *(int *)(param_1 + 0x228);
    }
    if ((DAT_0016f68c & *(uint *)(param_1 + 0x134)) == 0) {
      return;
    }
    uVar20 = __extendsfdf2(*(undefined4 *)(param_1 + 0x220));
    dVar21 = (double)__divdf3(DAT_0016fc08,DAT_0016fc0c,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
                             );
    uVar13 = png_malloc(param_1,0x100);
    *(undefined4 *)(param_1 + 0x230) = uVar13;
    iVar7 = 0;
    do {
      uVar20 = __floatsidf(iVar7);
      __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016fc20,DAT_0016fc24);
      iVar14 = *(int *)(param_1 + 0x230);
      pow(dVar21,(double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
      uVar20 = __muldf3();
      __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016fc10,DAT_0016fc14);
      uVar1 = __fixunsdfsi();
      puVar19 = (undefined *)(iVar14 + iVar7);
      iVar7 = iVar7 + 1;
      *puVar19 = uVar1;
    } while (iVar7 != 0x100);
    uVar13 = png_malloc(param_1,0x100);
    *(undefined4 *)(param_1 + 0x22c) = uVar13;
    uVar20 = __extendsfdf2(*(undefined4 *)(param_1 + 0x224));
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    iVar7 = __aeabi_dcmpgt((int)uVar20,uVar13,DAT_0016fc28,DAT_0016fc2c);
    if (iVar7 == 0) {
      dVar21 = (double)__extendsfdf2(*(undefined4 *)(param_1 + 0x220));
    }
    else {
      dVar21 = (double)__divdf3(DAT_0016fc08,DAT_0016fc0c,(int)uVar20,uVar13);
    }
    iVar7 = 0;
    do {
      uVar20 = __floatsidf(iVar7);
      __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016fc20,DAT_0016fc24);
      iVar14 = *(int *)(param_1 + 0x22c);
      pow(dVar21,(double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
      uVar20 = __muldf3();
      __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016fc10,DAT_0016fc14);
      uVar1 = __fixunsdfsi();
      puVar19 = (undefined *)(iVar14 + iVar7);
      iVar7 = iVar7 + 1;
      *puVar19 = uVar1;
    } while (iVar7 != 0x100);
    return;
  }
  if ((int)((uint)*(byte *)(param_1 + 0x1ea) << 0x1e) < 0) {
    uVar5 = (uint)*(byte *)(param_1 + DAT_0016f9bc);
    if ((uint)*(byte *)(param_1 + DAT_0016f9bc) < (uint)*(byte *)(param_1 + 0x240)) {
      uVar5 = (uint)*(byte *)(param_1 + 0x240);
    }
    uVar8 = (uint)*(byte *)(param_1 + DAT_0016f9c0);
    if (uVar8 <= uVar5) goto LAB_0016f6a0;
  }
  else {
    uVar5 = (uint)*(byte *)(param_1 + DAT_0016f9b0);
LAB_0016f6a0:
    uVar8 = uVar5;
    local_38 = 0;
    if (uVar8 == 0) goto LAB_0016f6ae;
  }
  local_38 = 0x10 - uVar8;
LAB_0016f6ae:
  if ((*(int *)(param_1 + 0x134) << 0x15 < 0) && ((int)local_38 < 5)) {
    local_38 = 5;
  }
  else if ((int)local_38 < 9) {
    local_38 = local_38 & (int)~local_38 >> 0x1f;
  }
  else {
    local_38 = 8;
  }
  *(uint *)(param_1 + 0x21c) = local_38 & 0xff;
  uVar5 = 8 - local_38;
  iVar9 = 1 << (uVar5 & 0xff);
  uVar13 = *(undefined4 *)(param_1 + 0x224);
  uVar20 = __extendsfdf2(uVar13);
  iVar14 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f990,DAT_0016f994);
  dVar21 = (double)CONCAT44(DAT_0016f99c,DAT_0016f998);
  if (iVar14 != 0) {
    __mulsf3(uVar13,*(undefined4 *)(param_1 + 0x220));
    uVar20 = __extendsfdf2();
    dVar21 = (double)__divdf3(DAT_0016fc08,DAT_0016fc0c,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
                             );
  }
  iVar14 = iVar9 * 4;
  uVar13 = png_calloc(param_1,iVar14);
  *(undefined4 *)(param_1 + 0x234) = uVar13;
  if ((*(uint *)(param_1 + 0x134) & 0x480) == 0) {
    if (0 < iVar9) {
      iVar15 = *(int *)(iVar7 + DAT_0016f9b4 + local_38 * 4 + 0x40);
      uVar5 = 0;
      iVar11 = 0;
      do {
        iVar16 = *(int *)(param_1 + 0x234);
        uVar13 = png_malloc(param_1,0x200);
        *(undefined4 *)(iVar16 + iVar11 * 4) = uVar13;
        iVar16 = 0;
        uVar8 = uVar5 >> 4;
        do {
          iVar17 = *(int *)(*(int *)(param_1 + 0x234) + iVar11 * 4);
          iVar10 = iVar16 * 2;
          uVar20 = __floatunsidf(iVar16 * 0x100 + uVar8);
          __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f9a0,DAT_0016f9a4);
          pow(dVar21,(double)CONCAT44(in_stack_ffffffbc,uVar5));
          uVar20 = __muldf3();
          __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f9a8,DAT_0016f9ac);
          uVar2 = __fixunsdfsi();
          iVar16 = iVar16 + 1;
          *(undefined2 *)(iVar17 + iVar10) = uVar2;
        } while (iVar16 != 0x100);
        uVar5 = uVar5 + iVar15;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar9);
    }
  }
  else {
    if (0 < iVar9) {
      iVar15 = 0;
      do {
        iVar16 = *(int *)(param_1 + 0x234);
        iVar11 = iVar15 * 4;
        uVar13 = png_malloc(param_1,0x200);
        iVar15 = iVar15 + 1;
        *(undefined4 *)(iVar16 + iVar11) = uVar13;
      } while (iVar15 < iVar9);
    }
    __y = (double)__divdf3(DAT_0016fc08,DAT_0016fc0c,SUB84(dVar21,0),
                           (int)((ulonglong)dVar21 >> 0x20));
    uVar8 = 0;
    uVar18 = 0xff >> (local_38 & 0xff);
    iVar15 = 0;
    do {
      uVar20 = __floatsidf(iVar15);
      uVar20 = __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016fc10,DAT_0016fc14);
      uVar3 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016fc18,DAT_0016fc1c);
      pow(dVar21,__y);
      uVar13 = extraout_r1;
      uVar20 = __floatunsidf(iVar9 << 8);
      __muldf3(uVar3,uVar13,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      uVar4 = __fixunsdfsi();
      dVar21 = (double)CONCAT44(uVar13,uVar3);
      in_stack_ffffffbc = (undefined4)((ulonglong)__y >> 0x20);
      if (uVar8 <= uVar4) {
        do {
          uVar6 = uVar8 & uVar18;
          uVar12 = uVar8 >> (uVar5 & 0xff);
          uVar8 = uVar8 + 1;
          *(ushort *)(uVar12 * 2 + *(int *)(uVar6 * 4 + *(int *)(param_1 + 0x234))) =
               (ushort)((uint)(iVar15 << 0x18) >> 0x10) | (ushort)iVar15;
        } while (uVar8 <= uVar4);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0x100);
    for (; uVar8 < (uint)(iVar9 << 8); uVar8 = uVar8 + 1) {
      *(undefined2 *)
       ((uVar8 >> (uVar5 & 0xff)) * 2 + *(int *)((uVar8 & uVar18) * 4 + *(int *)(param_1 + 0x234)))
           = 0xffff;
    }
  }
  if ((DAT_0016f9b8 & *(uint *)(param_1 + 0x134)) != 0) {
    uVar20 = __extendsfdf2(*(undefined4 *)(param_1 + 0x220));
    dVar21 = (double)__divdf3(DAT_0016f998,DAT_0016f99c,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
                             );
    uVar13 = png_calloc(param_1,iVar14);
    *(undefined4 *)(param_1 + 0x23c) = uVar13;
    if (0 < iVar9) {
      iVar15 = *(int *)(iVar7 + DAT_0016f9b4 + local_38 * 4 + 0x40);
      uVar5 = 0;
      iVar11 = 0;
      do {
        iVar16 = *(int *)(param_1 + 0x23c);
        uVar13 = png_malloc(param_1,0x200);
        *(undefined4 *)(iVar16 + iVar11 * 4) = uVar13;
        iVar16 = 0;
        uVar8 = uVar5 >> 4;
        do {
          iVar17 = *(int *)(*(int *)(param_1 + 0x23c) + iVar11 * 4);
          iVar10 = iVar16 * 2;
          uVar20 = __floatunsidf(iVar16 * 0x100 + uVar8);
          __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f9a0,DAT_0016f9a4);
          pow(dVar21,(double)CONCAT44(in_stack_ffffffbc,uVar5));
          uVar20 = __muldf3();
          __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f9a8,DAT_0016f9ac);
          uVar2 = __fixunsdfsi();
          iVar16 = iVar16 + 1;
          *(undefined2 *)(iVar17 + iVar10) = uVar2;
        } while (iVar16 != 0x100);
        uVar5 = uVar5 + iVar15;
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar9);
    }
    uVar20 = __extendsfdf2(*(undefined4 *)(param_1 + 0x224));
    uVar13 = (undefined4)((ulonglong)uVar20 >> 0x20);
    iVar15 = __aeabi_dcmpgt((int)uVar20,uVar13,DAT_0016f990,DAT_0016f994);
    if (iVar15 == 0) {
      dVar21 = (double)__extendsfdf2(*(undefined4 *)(param_1 + 0x220));
    }
    else {
      dVar21 = (double)__divdf3(DAT_0016f998,DAT_0016f99c,(int)uVar20,uVar13);
    }
    uVar13 = png_calloc(param_1,iVar14);
    *(undefined4 *)(param_1 + 0x238) = uVar13;
    if (0 < iVar9) {
      uVar5 = 0;
      iVar7 = *(int *)(iVar7 + DAT_0016f9b4 + local_38 * 4 + 0x40);
      iVar14 = 0;
      do {
        iVar15 = *(int *)(param_1 + 0x238);
        uVar13 = png_malloc(param_1,0x200);
        *(undefined4 *)(iVar15 + iVar14 * 4) = uVar13;
        iVar15 = 0;
        uVar8 = uVar5 >> 4;
        do {
          iVar16 = *(int *)(*(int *)(param_1 + 0x238) + iVar14 * 4);
          iVar11 = iVar15 * 2;
          uVar20 = __floatunsidf(iVar15 * 0x100 + uVar8);
          __divdf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f9a0,DAT_0016f9a4);
          pow(dVar21,(double)CONCAT44(in_stack_ffffffbc,uVar5));
          uVar20 = __muldf3();
          __adddf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_0016f9a8,DAT_0016f9ac);
          uVar2 = __fixunsdfsi();
          iVar15 = iVar15 + 1;
          *(undefined2 *)(iVar16 + iVar11) = uVar2;
        } while (iVar15 != 0x100);
        uVar5 = uVar5 + iVar7;
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar9);
    }
  }
  return;
}


