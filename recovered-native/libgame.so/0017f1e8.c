/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017f1e8  Symbol: FUN_0017f1e8 */

undefined4 FUN_0017f1e8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_30;
  uint local_1c [2];
  
  iVar10 = DAT_0017f4a0 + 0x17f1f4;
  *(int *)(iVar10 + DAT_0017f4a4 + 0x14) = *(int *)(iVar10 + DAT_0017f4a4 + 0x14) + 1;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar2 = FUN_0017a70c(param_1,local_1c);
  uVar9 = local_1c[0];
  if (-1 < *(int *)(param_1 + 0x168) << 0xe) {
    if (iVar2 == 0x3e) {
      return 0;
    }
    if (iVar2 == 0x20) {
      return 0;
    }
    if (iVar2 == 0x2f) {
      return 0;
    }
    if (((((0x19 < iVar2 - 0x41U) && (0x19 < iVar2 - 0x61U)) && (iVar2 != 0x3a)) &&
        ((iVar2 != 0x5f && (0x16 < iVar2 - 0xc0U)))) &&
       (((0x1e < iVar2 - 0xd8U &&
         ((DAT_0017f4a8 < iVar2 - 0xf8U && (0xd < (uint)(iVar2 + DAT_0017f4ac))))) &&
        ((0x1c80 < (uint)(iVar2 + DAT_0017f4b0) &&
         ((((1 < (uint)(iVar2 + DAT_0017f4b4) && (DAT_0017f4bc < (uint)(iVar2 + DAT_0017f4b8))) &&
           (DAT_0017f4c4 < (uint)(iVar2 + DAT_0017f4c0))) &&
          (((DAT_0017f4cc < (uint)(iVar2 + DAT_0017f4c8) &&
            (DAT_0017f4d4 < (uint)(iVar2 + DAT_0017f4d0))) &&
           ((DAT_0017f4dc < (uint)(iVar2 + DAT_0017f4d8) &&
            (DAT_0017f4e4 < (uint)(iVar2 + DAT_0017f4e0))))))))))))) {
      return 0;
    }
    iVar10 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar10 + 0x10) == '\n') {
      *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x1c) + 1;
      iVar10 = *(int *)(param_1 + 0x24);
      iVar2 = 1;
    }
    else {
      iVar2 = *(int *)(iVar10 + 0x20) + 1;
    }
    *(int *)(iVar10 + 0x20) = iVar2;
    *(uint *)(*(int *)(param_1 + 0x24) + 0x10) =
         *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    iVar10 = FUN_0017a70c(param_1,local_1c);
    iVar2 = 0;
    while ((((iVar10 != 0x3e && (iVar10 != 0x20)) && (iVar10 != 0x2f)) &&
           ((((((iVar10 - 0x41U < 0x1a || (iVar10 - 0x61U < 0x1a)) || (iVar10 - 0x30U < 10)) ||
              (((iVar10 == 0x5f || (iVar10 == 0x2d)) ||
               ((iVar10 == 0x3a || ((iVar10 == 0xb7 || (iVar10 == 0x2e)))))))) ||
             ((iVar10 - 0xc0U < 0x17 ||
              (((((((iVar10 - 0xd8U < 0x1f || (iVar10 - 0xf8U <= DAT_0017f4a8)) ||
                   ((uint)(iVar10 + DAT_0017f4e8) < 0x70)) ||
                  (((uint)(iVar10 + DAT_0017f4e8 + -0x70) < 0xe ||
                   ((uint)(iVar10 + DAT_0017f4e8 + -0x7f) < 0x1c81)))) ||
                 ((uint)(iVar10 + DAT_0017f4b4) < 2)) ||
                (((uint)(iVar10 + DAT_0017f4b4 + -0x33) < 2 ||
                 ((uint)(iVar10 + DAT_0017f4b4 + -100) <= DAT_0017f4bc)))) ||
               (((uint)(iVar10 + DAT_0017f4c0) <= DAT_0017f4c4 ||
                ((((uint)(iVar10 + DAT_0017f4c8) <= DAT_0017f4cc ||
                  ((uint)(iVar10 + DAT_0017f4d0) <= DAT_0017f4d4)) ||
                 ((uint)(iVar10 + DAT_0017f4d8) <= DAT_0017f4dc)))))))))) ||
            ((uint)(iVar10 + DAT_0017f4e0) <= DAT_0017f4e4))))) {
      if (iVar2 < 0x65) {
        iVar2 = iVar2 + 1;
      }
      else {
        if ((*(int *)(param_1 + 0x124) == 0) &&
           (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
            0xfa)) {
          FUN_0017c738(param_1);
        }
        iVar2 = 0;
      }
      uVar9 = uVar9 + local_1c[0];
      iVar10 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar10 + 0x10) == '\n') {
        *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x1c) + 1;
        iVar10 = *(int *)(param_1 + 0x24);
        iVar7 = 1;
      }
      else {
        iVar7 = *(int *)(iVar10 + 0x20) + 1;
      }
      *(int *)(iVar10 + 0x20) = iVar7;
      *(uint *)(*(int *)(param_1 + 0x24) + 0x10) =
           *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      iVar10 = FUN_0017a70c(param_1,local_1c);
    }
    goto LAB_0017f62c;
  }
  if (iVar2 == 0x3e) {
    return 0;
  }
  if (iVar2 == 0x20) {
    return 0;
  }
  if (iVar2 == 0x2f) {
    return 0;
  }
  if (iVar2 < 0x100) {
    if ((((0x19 < iVar2 - 0x61U) && (0x19 < iVar2 - 0x41U)) && (0x16 < iVar2 - 0xc0U)) &&
       ((0x1e < iVar2 - 0xd8U && (iVar2 < 0xf8)))) {
LAB_0017f47c:
      if ((iVar2 != 0x3a) && (iVar2 != 0x5f)) {
        return 0;
      }
    }
  }
  else {
    iVar7 = FUN_0019f630(iVar2,*(undefined4 *)(iVar10 + DAT_0017f4ec));
    if (((iVar7 == 0) && (DAT_0017f6b0 < (uint)(iVar2 + DAT_0017f6ac))) &&
       ((iVar2 != DAT_0017f6b4 && (8 < (uint)(iVar2 + DAT_0017f4f0))))) goto LAB_0017f47c;
  }
  uVar9 = local_1c[0];
  iVar2 = *(int *)(param_1 + 0x24);
  if (**(char **)(iVar2 + 0x10) == '\n') {
    iVar7 = 1;
    *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x20) + 1;
  }
  *(int *)(iVar2 + 0x20) = iVar7;
  *(uint *)(*(int *)(param_1 + 0x24) + 0x10) =
       *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  iVar3 = FUN_0017a70c(param_1,local_1c);
  iVar1 = DAT_0017f6a0;
  iVar7 = DAT_0017f69c;
  iVar2 = DAT_0017f698;
  local_30 = 0;
  while (((iVar3 != 0x3e && (iVar3 != 0x20)) && (iVar3 != 0x2f))) {
    if (iVar3 < 0x100) {
      if ((((0x19 < iVar3 - 0x61U) && ((0x19 < iVar3 - 0x41U && (0x16 < iVar3 - 0xc0U)))) &&
          (0x1e < iVar3 - 0xd8U)) && ((iVar3 < 0xf8 && (9 < iVar3 - 0x30U)))) {
LAB_0017f604:
        if ((iVar3 != 0x2d) && (((iVar3 != 0x2e && (iVar3 != 0x3a)) && (iVar3 != 0x5f)))) {
          if (iVar3 < 0x100) {
            if (iVar3 != 0xb7) break;
          }
          else {
            iVar4 = FUN_0019f630(iVar3,*(undefined4 *)(iVar10 + iVar1));
            if ((iVar4 == 0) &&
               (iVar3 = FUN_0019f630(iVar3,*(undefined4 *)(iVar10 + iVar2)), iVar3 == 0)) break;
          }
        }
      }
    }
    else {
      iVar4 = FUN_0019f630(iVar3,*(undefined4 *)(iVar10 + iVar7));
      if ((((iVar4 == 0) && (DAT_0017f6b0 < (uint)(iVar3 + DAT_0017f6ac))) &&
          (iVar3 != DAT_0017f6b4)) &&
         ((8 < (uint)(iVar3 + DAT_0017f6a4) &&
          (iVar4 = FUN_0019f630(iVar3,*(undefined4 *)(iVar10 + DAT_0017f6a8)), iVar4 == 0))))
      goto LAB_0017f604;
    }
    if (local_30 < 0x65) {
      local_30 = local_30 + 1;
    }
    else if ((*(int *)(param_1 + 0x124) == 0) &&
            (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
             0xfa)) {
      FUN_0017c738(param_1);
      local_30 = 0;
    }
    else {
      local_30 = 0;
    }
    uVar9 = uVar9 + local_1c[0];
    iVar3 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar3 + 0x10) == '\n') {
      iVar4 = 1;
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar3 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x20) + 1;
    }
    *(int *)(iVar3 + 0x20) = iVar4;
    *(uint *)(*(int *)(param_1 + 0x24) + 0x10) =
         *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    iVar3 = FUN_0017a70c(param_1,local_1c);
  }
LAB_0017f62c:
  pcVar6 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if ((*pcVar6 == '\n') && (pcVar6[-1] == '\r')) {
    uVar5 = *(undefined4 *)(param_1 + 0x128);
    uVar8 = ~uVar9;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x128);
    uVar8 = -uVar9;
  }
  uVar5 = FUN_0019d178(uVar5,pcVar6 + uVar8,uVar9);
  return uVar5;
}


