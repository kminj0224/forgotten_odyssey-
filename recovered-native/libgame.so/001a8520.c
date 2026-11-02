/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a8520  Symbol: jinit_c_prep_controller */

void jinit_c_prep_controller(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  void *__src;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  void *__dest;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = DAT_001a86ac + 0x1a8536;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 3;
    (**(code **)*param_1)();
  }
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x40);
  iVar8 = iVar10 + DAT_001a86b0;
  param_1[99] = (int)piVar3;
  *piVar3 = iVar8;
  if (*(int *)(param_1[0x67] + 8) == 0) {
    piVar3[1] = iVar10 + DAT_001a86b4;
    iVar10 = param_1[0x15];
    if (0 < param_1[0x13]) {
      iVar8 = 0;
      do {
        iVar6 = param_1[1];
        puVar5 = (undefined4 *)(iVar10 + 8);
        iVar8 = iVar8 + 1;
        piVar1 = (int *)(iVar10 + 0x1c);
        iVar10 = iVar10 + 0x58;
        uVar4 = __divsi3(*piVar1 * param_1[0x43] * param_1[0x45],*puVar5);
        iVar6 = (**(code **)(iVar6 + 8))(param_1,1,uVar4,param_1[0x44]);
        piVar3[2] = iVar6;
        piVar3 = piVar3 + 1;
      } while (iVar8 < param_1[0x13]);
    }
  }
  else {
    piVar3[1] = iVar10 + DAT_001a86b8;
    iVar6 = param_1[99];
    iVar12 = param_1[0x44];
    iVar10 = (**(code **)param_1[1])(param_1,1,iVar12 * param_1[0x13] * 0x14);
    iVar8 = param_1[0x15];
    if (0 < param_1[0x13]) {
      __dest = (void *)(iVar12 * 4 + iVar10);
      iVar13 = 0;
      while( true ) {
        iVar11 = param_1[1];
        uVar4 = __divsi3(param_1[0x45] * param_1[0x43] * *(int *)(iVar8 + 0x1c),
                         *(undefined4 *)(iVar8 + 8));
        __src = (void *)(**(code **)(iVar11 + 8))(param_1,1,uVar4,iVar12 * 3);
        memcpy(__dest,__src,iVar12 * 0xc);
        if (0 < iVar12) {
          puVar5 = (undefined4 *)((int)__src + iVar12 * 8);
          puVar7 = (undefined4 *)(iVar10 + iVar12 * 0x10);
          iVar9 = 0;
          iVar11 = 0;
          do {
            uVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            iVar11 = iVar11 + 1;
            *(undefined4 *)(iVar10 + iVar9) = uVar4;
            puVar2 = (undefined4 *)((int)__src + iVar9);
            iVar9 = iVar9 + 4;
            *puVar7 = *puVar2;
            puVar7 = puVar7 + 1;
          } while (iVar11 != iVar12);
        }
        *(void **)(iVar6 + 8) = __dest;
        __dest = (void *)((int)__dest + iVar12 * 0x14);
        iVar13 = iVar13 + 1;
        iVar6 = iVar6 + 4;
        if (param_1[0x13] <= iVar13) break;
        iVar8 = iVar8 + 0x58;
        iVar10 = iVar10 + iVar12 * 0x14;
      }
    }
  }
  return;
}


