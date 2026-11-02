/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145a98  Symbol: calculateVertexPoints */

/* cocos2d::CCGrid3D::calculateVertexPoints() */

void __thiscall cocos2d::CCGrid3D::calculateVertexPoints(CCGrid3D *this)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  size_t __size;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar24;
  int local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88 [4];
  int local_78 [4];
  undefined4 local_68 [2];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  (**(code **)(**(int **)(this + 0x20) + 0x18))();
  uVar3 = __floatunsisf();
  (**(code **)(**(int **)(this + 0x20) + 0x1c))();
  uVar4 = __floatunsisf();
  iVar5 = (**(code **)(**(int **)(this + 0x20) + 0x24))();
  iVar20 = *(int *)(this + 0x18);
  iVar21 = *(int *)(this + 0x1c);
  uVar6 = *(undefined4 *)(iVar5 + 4);
  iVar5 = (iVar20 + 1) * (iVar21 + 1);
  __size = iVar5 * 0xc;
  pvVar7 = malloc(__size);
  *(void **)(this + 0x38) = pvVar7;
  pvVar8 = malloc(__size);
  *(void **)(this + 0x3c) = pvVar8;
  pvVar8 = malloc(iVar5 * 8);
  *(void **)(this + 0x34) = pvVar8;
  pvVar9 = malloc(iVar20 * iVar21 * 0xc);
  *(void **)(this + 0x40) = pvVar9;
  for (local_f8 = 0; (int)local_f8 < *(int *)(this + 0x18); local_f8 = local_f8 + 1) {
    for (local_f4 = 0; iVar5 = *(int *)(this + 0x1c), (int)local_f4 < iVar5; local_f4 = local_f4 + 1
        ) {
      iVar20 = *(int *)(this + 0x18);
      uVar19 = *(undefined4 *)(this + 0x24);
      uVar10 = __floatsisf(local_f8);
      uVar10 = __mulsf3(uVar10,uVar19);
      uVar19 = __addsf3(uVar10,uVar19);
      uVar22 = *(undefined4 *)(this + 0x28);
      uVar11 = __floatsisf(local_f4);
      uVar11 = __mulsf3(uVar11,uVar22);
      uVar22 = __addsf3(uVar11,uVar22);
      uVar16 = iVar5 + 1U & 0xffff;
      uVar17 = (local_f4 & 0xffff) + ((local_f8 & 0xffff) + 1) * uVar16;
      uVar18 = uVar17 & 0xffff;
      uVar16 = (local_f4 & 0xffff) + (local_f8 & 0xffff) * uVar16;
      uVar14 = uVar18 + 1 & 0xffff;
      uVar13 = uVar16 & 0xffff;
      uVar15 = uVar13 + 1 & 0xffff;
      uVar1 = (undefined2)uVar17;
      uVar2 = (undefined2)(uVar13 + 1);
      puVar12 = (undefined4 *)((int)pvVar9 + (local_f4 * iVar20 + local_f8) * 0xc);
      local_88[1] = uVar18 * 3;
      *puVar12 = CONCAT22(uVar1,(short)uVar16);
      puVar12[1] = CONCAT22(uVar1,uVar2);
      puVar12[2] = CONCAT22(uVar2,(short)(uVar18 + 1));
      local_88[0] = uVar13 * 3;
      local_88[2] = uVar14 * 3;
      local_88[3] = uVar15 * 3;
      memset(&local_b8,0,0xc);
      local_b8 = uVar10;
      local_b4 = uVar11;
      memset(&local_ac,0,0xc);
      local_ac = uVar19;
      local_a8 = uVar11;
      memset(&local_a0,0,0xc);
      local_a0 = uVar19;
      local_9c = uVar22;
      memset(&local_94,0,0xc);
      local_48 = local_b8;
      local_44 = local_b4;
      local_40 = local_b0;
      local_3c = local_ac;
      puVar12 = &local_48;
      local_38 = local_a8;
      local_34 = local_a4;
      local_30 = local_a0;
      local_2c = local_9c;
      local_28 = local_98;
      local_1c = local_8c;
      local_94 = uVar10;
      local_90 = uVar22;
      local_78[0] = uVar13 * 2;
      local_78[1] = uVar18 * 2;
      local_78[2] = uVar14 * 2;
      local_78[3] = uVar15 * 2;
      local_24 = uVar10;
      local_20 = uVar22;
      uVar24 = CCPoint::CCPoint((CCPoint *)local_68,extraout_s0,extraout_s1);
      uVar24 = CCPoint::CCPoint(aCStack_60,(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
      uVar24 = CCPoint::CCPoint(aCStack_58,(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
      CCPoint::CCPoint(aCStack_50,(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
      puVar23 = local_68;
      local_fc = 0;
      do {
        iVar5 = *(int *)((int)local_88 + local_fc);
        *(undefined4 *)(iVar5 * 4 + (int)pvVar7) = *puVar12;
        *(undefined4 *)((iVar5 + 1) * 4 + (int)pvVar7) = puVar12[1];
        *(undefined4 *)((iVar5 + 2) * 4 + (int)pvVar7) = puVar12[2];
        iVar5 = *(int *)((int)local_78 + local_fc);
        uVar10 = __divsf3(*puVar23,uVar3);
        *(undefined4 *)(iVar5 * 4 + (int)pvVar8) = uVar10;
        iVar5 = (iVar5 + 1) * 4;
        if (this[0x30] == (CCGrid3D)0x0) {
          uVar10 = __divsf3(puVar23[1],uVar4);
          *(undefined4 *)(iVar5 + (int)pvVar8) = uVar10;
        }
        else {
          uVar10 = __subsf3(uVar6,puVar23[1]);
          uVar10 = __divsf3(uVar10,uVar4);
          *(undefined4 *)(iVar5 + (int)pvVar8) = uVar10;
        }
        puVar12 = puVar12 + 3;
        puVar23 = puVar23 + 2;
        local_fc = local_fc + 4;
      } while (local_fc != 0x10);
    }
  }
  memcpy(*(void **)(this + 0x3c),*(void **)(this + 0x38),
         (*(int *)(this + 0x1c) + 1) * (*(int *)(this + 0x18) + 1) * 0xc);
  return;
}


