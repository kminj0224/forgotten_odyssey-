/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014591a  Symbol: calculateVertexPoints */

/* cocos2d::CCTiledGrid3D::calculateVertexPoints() */

void __thiscall cocos2d::CCTiledGrid3D::calculateVertexPoints(CCTiledGrid3D *this)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  short *psVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  size_t __size;
  int iVar13;
  short sVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_48;
  int local_3c;
  
  (**(code **)(**(int **)(this + 0x20) + 0x18))();
  uVar3 = __floatunsisf();
  (**(code **)(**(int **)(this + 0x20) + 0x1c))();
  uVar4 = __floatunsisf();
  iVar5 = (**(code **)(**(int **)(this + 0x20) + 0x24))();
  uVar6 = *(undefined4 *)(iVar5 + 4);
  iVar5 = *(int *)(this + 0x18) * *(int *)(this + 0x1c);
  __size = iVar5 * 0x30;
  puVar7 = (undefined4 *)malloc(__size);
  *(undefined4 **)(this + 0x38) = puVar7;
  pvVar8 = malloc(__size);
  *(void **)(this + 0x3c) = pvVar8;
  puVar9 = (undefined4 *)malloc(iVar5 * 0x20);
  *(undefined4 **)(this + 0x34) = puVar9;
  psVar10 = (short *)malloc(iVar5 * 0xc);
  *(short **)(this + 0x40) = psVar10;
  for (iVar13 = 0; iVar13 < *(int *)(this + 0x18); iVar13 = iVar13 + 1) {
    local_3c = 0;
    while( true ) {
      if (*(int *)(this + 0x1c) <= local_3c) break;
      uVar16 = *(undefined4 *)(this + 0x24);
      uVar11 = __floatsisf(iVar13);
      uVar11 = __mulsf3(uVar11,uVar16);
      uVar16 = __addsf3(uVar11,uVar16);
      uVar15 = *(undefined4 *)(this + 0x28);
      uVar12 = __floatsisf(local_3c);
      uVar12 = __mulsf3(uVar12,uVar15);
      local_48 = __addsf3(uVar12,uVar15);
      puVar7[3] = uVar16;
      puVar7[9] = uVar16;
      *puVar7 = uVar11;
      puVar7[1] = uVar12;
      puVar7[2] = 0;
      puVar7[4] = uVar12;
      puVar7[5] = 0;
      puVar7[6] = uVar11;
      puVar7[7] = local_48;
      puVar7[8] = 0;
      puVar7[10] = local_48;
      puVar7[0xb] = 0;
      puVar7 = puVar7 + 0xc;
      if (this[0x30] != (CCTiledGrid3D)0x0) {
        uVar12 = __subsf3(uVar6,uVar12);
        local_48 = __subsf3(uVar6,local_48);
      }
      uVar11 = __divsf3(uVar11,uVar3);
      *puVar9 = uVar11;
      uVar12 = __divsf3(uVar12,uVar4);
      puVar9[1] = uVar12;
      uVar16 = __divsf3(uVar16,uVar3);
      puVar9[2] = uVar16;
      puVar9[3] = uVar12;
      puVar9[4] = uVar11;
      uVar11 = __divsf3(local_48,uVar4);
      puVar9[5] = uVar11;
      puVar9[6] = uVar16;
      local_3c = local_3c + 1;
      puVar9[7] = uVar11;
      puVar9 = puVar9 + 8;
    }
  }
  sVar14 = 0;
  for (iVar13 = 0; iVar13 < iVar5; iVar13 = iVar13 + 1) {
    sVar2 = sVar14 + 1;
    *psVar10 = sVar14;
    psVar10[2] = sVar14 + 2;
    psVar10[4] = sVar14 + 2;
    sVar1 = sVar14 + 3;
    sVar14 = sVar14 + 4;
    psVar10[1] = sVar2;
    psVar10[3] = sVar2;
    psVar10[5] = sVar1;
    psVar10 = psVar10 + 6;
  }
  memcpy(*(void **)(this + 0x3c),*(void **)(this + 0x38),__size);
  return;
}


