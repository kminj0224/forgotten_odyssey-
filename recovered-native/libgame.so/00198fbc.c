/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00198fbc  Symbol: FUN_00198fbc */

int FUN_00198fbc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_38;
  int local_1c [2];
  
  iVar12 = DAT_00199290 + 0x198fc8;
  if ((param_1 == (int *)0x0) || (param_1[9] == 0)) {
    FUN_00195ba4(param_1,1,iVar12 + DAT_00199294,0,0);
  }
  else if (**(char **)(param_1[9] + 0x10) == '<') {
    FUN_0017a4a4(param_1);
    local_44 = param_1[0x4c];
    puVar13 = (undefined4 *)param_1[0x4b];
    if ((param_1[0x49] == 0) &&
       (iVar2 = param_1[9], *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) < 0xfa)) {
      FUN_0017a2bc(iVar2,0xfa);
    }
    iVar2 = FUN_00196608(param_1);
    if (iVar2 != 0) {
      iVar3 = FUN_0019c30c(iVar2,iVar12 + DAT_0019929c);
      FUN_00196190(param_1,iVar2);
      FUN_001961d4(param_1,iVar2);
      if ((param_1[0x2f] < 1) || (iVar4 = FUN_0019c30c(iVar2,iVar12 + DAT_001992a0), iVar4 == 0)) {
        local_48 = 0;
      }
      else {
        FUN_00195ba4(param_1,800,iVar12 + DAT_001992a4,iVar2,0);
        param_1[0x3e] = param_1[0x3e] + 1;
        local_48 = 1;
      }
      if ((param_1[0x2f] != 1) && (iVar4 = FUN_0019c30c(iVar2,iVar12 + DAT_001992a8), iVar4 != 0)) {
        FUN_00195ba4(param_1,800,iVar12 + DAT_001992ac,iVar2,0);
        param_1[0x3e] = param_1[0x3e] + 1;
        local_48 = 1;
      }
      iVar9 = iVar12 + DAT_001992b0;
      iVar4 = FUN_0019c30c(iVar2,iVar9);
      if (iVar4 != 0) {
        iVar4 = iVar12 + DAT_001992b4;
        for (local_4c = 0; local_4c < param_1[0x2f]; local_4c = local_4c + 1) {
          iVar10 = FUN_0019c30c(*(undefined4 *)(local_4c * 4 + param_1[0x31]),iVar9);
          if (iVar10 != 0) {
            FUN_00195ba4(param_1,800,iVar4,iVar2,0);
            param_1[0x3e] = param_1[0x3e] + 1;
            local_48 = 1;
          }
        }
      }
      FUN_00196588(param_1);
      local_4c = 0;
      iVar4 = iVar12 + DAT_001992b8;
      do {
        iVar9 = param_1[9];
        pbVar8 = *(byte **)(iVar9 + 0x10);
        bVar1 = *pbVar8;
        if ((((1 < (byte)(bVar1 - 9)) && (bVar1 != 0xd)) && (bVar1 < 0x20)) ||
           ((bVar1 == 0x3e || ((bVar1 == 0x2f && (pbVar8[1] == 0x3e)))))) goto LAB_00199350;
        iVar10 = param_1[0x32];
        if ((param_1[0x49] == 0) && (*(int *)(iVar9 + 0x14) - (int)pbVar8 < 0xfa)) {
          FUN_0017a2bc(iVar9,0xfa);
        }
        iVar9 = FUN_00198f4c(param_1,local_1c);
        if (iVar9 == 0) {
          if (local_1c[0] != 0) {
            (***(code ***)(iVar12 + DAT_001992c0))();
          }
          while( true ) {
            bVar1 = **(byte **)(param_1[9] + 0x10);
            if (((((byte)(bVar1 - 9) < 2) || ((bVar1 != 0xd && (bVar1 < 0x20)))) ||
                ((byte)(bVar1 - 9) < 2)) ||
               ((((bVar1 == 0x20 || (bVar1 == 0xd)) || (bVar1 == 0x3e)) ||
                ((bVar1 == 0x2f && ((*(byte **)(param_1[9] + 0x10))[1] == 0x3e)))))) break;
            FUN_0017a4a4(param_1);
          }
        }
        else {
          local_38 = puVar13;
          for (iVar7 = 0; iVar7 < local_4c; iVar7 = iVar7 + 2) {
            iVar5 = FUN_0019c30c(*local_38,iVar9);
            local_38 = local_38 + 2;
            if (iVar5 != 0) {
              FUN_00195ba4(param_1,0x2a,iVar4,iVar9,0);
              goto LAB_0019923e;
            }
          }
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = (undefined4 *)(***(code ***)(iVar12 + DAT_001992bc))(0x58);
            if (puVar13 == (undefined4 *)0x0) {
              FUN_00195c00(param_1,0);
              if (local_1c[0] == 0) {
                local_44 = 0x16;
              }
              else {
                (***(code ***)(iVar12 + DAT_001992c0))();
                local_44 = 0x16;
              }
              goto LAB_00199302;
            }
            param_1[0x4b] = (int)puVar13;
            param_1[0x4c] = 0x16;
            local_44 = 0x16;
            puVar6 = puVar13;
          }
          else {
            puVar6 = puVar13;
            if (local_44 <= local_4c + 3) {
              iVar7 = local_44 << 1;
              puVar6 = (undefined4 *)(***(code ***)(iVar12 + DAT_001992c4))(puVar13,local_44 << 3);
              local_44 = iVar7;
              if (puVar6 == (undefined4 *)0x0) {
                FUN_00195c00(param_1,0);
LAB_0019923e:
                if (local_1c[0] != 0) {
                  (***(code ***)(iVar12 + DAT_001992c0))();
                }
                goto LAB_00199302;
              }
              param_1[0x4b] = (int)puVar6;
              param_1[0x4c] = iVar7;
            }
          }
          puVar6[local_4c] = iVar9;
          puVar6[local_4c + 1] = local_1c[0];
          puVar6[local_4c + 2] = 0;
          puVar6[local_4c + 3] = 0;
          puVar13 = puVar6;
          local_4c = local_4c + 2;
        }
LAB_00199302:
        FUN_00196588(param_1);
      } while (iVar10 != param_1[0x32]);
      FUN_00195ba4(param_1,1,iVar12 + DAT_001993c8,0,0);
LAB_00199350:
      if ((local_4c != 0) && (iVar3 != 0)) {
        FUN_00196ad0(param_1,puVar13);
      }
      if (local_48 == 0) {
        FUN_00195ca8(param_1,iVar2);
        if ((*param_1 != 0) && (pcVar11 = *(code **)(*param_1 + 0x38), pcVar11 != (code *)0x0)) {
          puVar6 = puVar13;
          if (local_4c == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          (*pcVar11)(param_1[1],iVar2,puVar6);
        }
      }
      iVar2 = DAT_001993cc;
      if (puVar13 == (undefined4 *)0x0) {
        return local_48;
      }
      piVar14 = puVar13 + 1;
      for (iVar3 = 1; iVar3 < local_4c; iVar3 = iVar3 + 2) {
        if (*piVar14 != 0) {
          (***(code ***)(iVar12 + iVar2))();
        }
        piVar14 = piVar14 + 2;
      }
      return local_48;
    }
    FUN_00195ba4(param_1,0x44,iVar12 + DAT_00199298,0,0);
    while ((((bVar1 = **(byte **)(param_1[9] + 0x10), (byte)(bVar1 - 9) < 2 || (bVar1 == 0xd)) ||
            (0x1f < bVar1)) && (bVar1 != 0x3e))) {
      FUN_0017a4a4(param_1);
    }
  }
  return -1;
}


