/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2714  Symbol: FUN_001b2714 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001b2714(int *param_1,int param_2)

{
  short **ppsVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int local_7c;
  int local_68;
  int local_54;
  char *local_4c [2];
  int local_44;
  int local_40;
  undefined4 local_3c [4];
  int *local_2c;
  
  iVar7 = param_1[0x69];
  local_4c[0] = *(char **)param_1[6];
  local_4c[1] = ((char **)param_1[6])[1];
  local_44 = *(int *)(iVar7 + 0xc);
  local_40 = *(int *)(iVar7 + 0x10);
  local_3c[0] = *(undefined4 *)(iVar7 + 0x14);
  local_3c[1] = *(undefined4 *)(iVar7 + 0x18);
  local_3c[2] = *(undefined4 *)(iVar7 + 0x1c);
  local_3c[3] = *(undefined4 *)(iVar7 + 0x20);
  local_2c = param_1;
  if ((param_1[0x3b] == 0) || (iVar9 = *(int *)(iVar7 + 0x24), iVar9 != 0)) {
LAB_001b2768:
    if (0 < param_1[0x4f]) {
      local_68 = 0;
      local_54 = 0;
      do {
        iVar8 = *(int *)((int)param_1 + local_68 + 0x140);
        psVar3 = *(short **)(param_2 + local_68);
        iVar2 = *(int *)(iVar7 + (*(int *)(param_1[iVar8 + 0x49] + 0x14) + 10) * 4 + 4);
        puVar11 = *(undefined4 **)(iVar7 + (*(int *)(param_1[iVar8 + 0x49] + 0x18) + 0xe) * 4 + 4);
        iVar4 = local_2c[0x60];
        iVar8 = iVar8 + 4;
        piVar5 = (int *)local_2c[0x5f];
        iVar9 = (int)*psVar3 - (int)local_4c[iVar8];
        if (iVar9 < 0) {
          iVar13 = iVar9 + -1;
          iVar9 = -iVar9;
LAB_001b27ea:
          iVar10 = 0;
          do {
            iVar9 = iVar9 >> 1;
            iVar10 = iVar10 + 1;
          } while (iVar9 != 0);
          iVar9 = iVar13;
          if (0xb < iVar10) {
            *(undefined4 *)(*local_2c + 0x14) = 6;
            (**(code **)*local_2c)();
          }
        }
        else {
          iVar10 = 0;
          iVar13 = iVar9;
          if (iVar9 != 0) goto LAB_001b27ea;
        }
        iVar2 = FUN_001b2268(local_4c,*(undefined4 *)(iVar10 * 4 + iVar2),
                             *(undefined *)(iVar2 + iVar10 + 0x400));
        if ((iVar2 == 0) ||
           ((iVar10 != 0 && (iVar9 = FUN_001b2268(local_4c,iVar9,iVar10), iVar9 == 0))))
        goto LAB_001b2958;
        if (0 < iVar4) {
          iVar9 = 0;
          local_7c = 1;
          do {
            piVar5 = piVar5 + 1;
            iVar2 = (int)psVar3[*piVar5];
            if (iVar2 == 0) {
              iVar9 = iVar9 + 1;
            }
            else {
              for (; 0xf < iVar9; iVar9 = iVar9 + -0x10) {
                iVar13 = FUN_001b2268(local_4c,puVar11[0xf0],*(undefined *)(puVar11 + 0x13c));
                if (iVar13 == 0) goto LAB_001b2958;
              }
              iVar13 = iVar2;
              if (iVar2 < 0) {
                iVar13 = -iVar2;
                iVar2 = iVar2 + -1;
              }
              iVar6 = 1;
              iVar13 = iVar13 >> 1;
              iVar10 = 1;
              if (iVar13 != 0) {
                do {
                  iVar13 = iVar13 >> 1;
                  iVar6 = iVar6 + 1;
                } while (iVar13 != 0);
                iVar10 = iVar6;
                if (10 < iVar6) {
                  *(undefined4 *)(*local_2c + 0x14) = 6;
                  (**(code **)*local_2c)();
                }
              }
              iVar9 = iVar9 * 0x10 + iVar10;
              iVar9 = FUN_001b2268(local_4c,puVar11[iVar9],
                                   *(undefined *)((int)puVar11 + iVar9 + 0x400));
              if ((iVar9 == 0) || (iVar9 = FUN_001b2268(local_4c,iVar2,iVar10), iVar9 == 0))
              goto LAB_001b2958;
              iVar9 = 0;
            }
            local_7c = local_7c + 1;
          } while (local_7c <= iVar4);
          if ((iVar9 != 0) &&
             (iVar9 = FUN_001b2268(local_4c,*puVar11,*(undefined *)(puVar11 + 0x100)), iVar9 == 0))
          goto LAB_001b2958;
        }
        ppsVar1 = (short **)(param_2 + local_68);
        local_68 = local_68 + 4;
        local_4c[iVar8] = (char *)(int)**ppsVar1;
        local_54 = local_54 + 1;
      } while (local_54 < param_1[0x4f]);
    }
    *(char **)param_1[6] = local_4c[0];
    *(char **)(param_1[6] + 4) = local_4c[1];
    *(int *)(iVar7 + 0xc) = local_44;
    *(int *)(iVar7 + 0x10) = local_40;
    *(undefined4 *)(iVar7 + 0x14) = local_3c[0];
    *(undefined4 *)(iVar7 + 0x18) = local_3c[1];
    *(undefined4 *)(iVar7 + 0x1c) = local_3c[2];
    *(undefined4 *)(iVar7 + 0x20) = local_3c[3];
    iVar9 = param_1[0x3b];
    uVar12 = 1;
    if (iVar9 != 0) {
      iVar2 = *(int *)(iVar7 + 0x24);
      if (iVar2 == 0) {
        *(int *)(iVar7 + 0x24) = iVar9;
        *(uint *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1U & 7;
        iVar2 = iVar9;
      }
      *(int *)(iVar7 + 0x24) = iVar2 + -1;
      uVar12 = 1;
    }
  }
  else {
    uVar12 = *(undefined4 *)(iVar7 + 0x28);
    iVar2 = FUN_001b2268(local_4c,0x7f,7);
    if (iVar2 != 0) {
      local_44 = iVar9;
      local_40 = iVar9;
      *local_4c[0] = -1;
      local_4c[0] = local_4c[0] + 1;
      local_4c[1] = local_4c[1] + -1;
      if ((local_4c[1] != (char *)0x0) || (iVar9 = FUN_001b221c(local_4c), iVar9 != 0)) {
        *local_4c[0] = (char)uVar12 + -0x30;
        local_4c[0] = local_4c[0] + 1;
        local_4c[1] = local_4c[1] + -1;
        if ((local_4c[1] != (char *)0x0) || (iVar9 = FUN_001b221c(local_4c), iVar9 != 0)) {
          piVar5 = local_2c;
          if (0 < local_2c[0x48]) {
            puVar11 = local_3c;
            iVar9 = 0;
            do {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
              iVar9 = iVar9 + 1;
            } while (iVar9 < piVar5[0x48]);
          }
          goto LAB_001b2768;
        }
      }
    }
LAB_001b2958:
    uVar12 = 0;
  }
  return uVar12;
}


