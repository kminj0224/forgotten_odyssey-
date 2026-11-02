/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00180018  Symbol: FUN_00180018 */

int * FUN_00180018(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int local_28;
  
  iVar4 = DAT_001802dc + 0x180024;
  FUN_0017ff44();
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '(') {
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x38);
    FUN_0017a4a4(param_1);
    FUN_0017ff44(param_1);
    piVar2 = (int *)FUN_00180018(param_1,uVar8);
    FUN_0017ff44(param_1);
  }
  else {
    iVar6 = FUN_0017f6b8(param_1);
    if (iVar6 == 0) {
      FUN_0017b7fc(param_1,0x36,0);
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_00194f6c(*(undefined4 *)(param_1 + 8),iVar6,2);
    if (piVar2 == (int *)0x0) {
      FUN_00179430(param_1,0);
      return (int *)0x0;
    }
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
    cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if (cVar1 == '?') {
      iVar6 = 2;
    }
    else if (cVar1 == '*') {
      iVar6 = 3;
    }
    else {
      if (cVar1 != '+') {
        piVar2[1] = 1;
        goto LAB_001800e6;
      }
      iVar6 = 4;
    }
    piVar2[1] = iVar6;
    FUN_0017a4a4(param_1);
  }
LAB_001800e6:
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  FUN_0017ff44(param_1);
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar6 = *(int *)(param_1 + 0x24);
    if ((500 < *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc)) &&
       (*(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) <= DAT_001802e0)) {
      FUN_0017cc50(param_1);
    }
  }
  piVar9 = (int *)0x0;
  local_28 = 0;
  piVar7 = piVar2;
  while (cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10), cVar1 != ')') {
    if (cVar1 != ',') {
      if (cVar1 == '|') {
        if ((local_28 != 0) && (local_28 != 0x7c)) goto LAB_001801c2;
        FUN_0017a4a4(param_1);
        piVar3 = (int *)FUN_00194f6c(*(undefined4 *)(param_1 + 8),0,4);
        if (piVar3 != (int *)0x0) {
          if (piVar9 == (int *)0x0) {
            piVar3[3] = (int)piVar2;
            piVar7 = piVar3;
            if (piVar2 != (int *)0x0) {
              piVar2[5] = (int)piVar3;
              local_28 = 0x7c;
              piVar2 = piVar3;
              goto LAB_0018022a;
            }
          }
          else {
            piVar3[5] = (int)piVar7;
            piVar7[4] = (int)piVar3;
            piVar3[3] = (int)piVar9;
            piVar9[5] = (int)piVar3;
            piVar7 = piVar2;
          }
          local_28 = 0x7c;
          piVar2 = piVar7;
          goto LAB_0018022a;
        }
      }
      else {
        FUN_0017b7fc(param_1,0x37,0);
      }
LAB_0018021c:
      if ((piVar9 != piVar2) && (piVar9 != (int *)0x0)) {
        FUN_0019541c(*(undefined4 *)(param_1 + 8),piVar9);
      }
LAB_0018015c:
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
LAB_00180162:
      FUN_0019541c(*(undefined4 *)(param_1 + 8),piVar2);
      return (int *)0x0;
    }
    if ((local_28 != 0) && (local_28 != 0x2c)) {
LAB_001801c2:
      FUN_0017bd20(param_1,0x42,iVar4 + DAT_001802e4,local_28);
      goto LAB_0018021c;
    }
    FUN_0017a4a4(param_1);
    piVar3 = (int *)FUN_00194f6c(*(undefined4 *)(param_1 + 8),0,3);
    if (piVar3 == (int *)0x0) {
      if ((piVar9 != piVar2) && (piVar9 != (int *)0x0)) {
        FUN_0019541c(*(undefined4 *)(param_1 + 8),piVar9);
      }
      goto LAB_00180162;
    }
    if (piVar9 == (int *)0x0) {
      piVar3[3] = (int)piVar2;
      piVar7 = piVar3;
      if (piVar2 != (int *)0x0) {
        piVar2[5] = (int)piVar3;
        local_28 = 0x2c;
        piVar2 = piVar3;
        goto LAB_0018022a;
      }
    }
    else {
      piVar3[5] = (int)piVar7;
      piVar7[4] = (int)piVar3;
      piVar3[3] = (int)piVar9;
      piVar9[5] = (int)piVar3;
      piVar7 = piVar2;
    }
    local_28 = 0x2c;
    piVar2 = piVar7;
LAB_0018022a:
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
    FUN_0017ff44(param_1);
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '(') {
      iVar6 = FUN_0017f6b8(param_1);
      if (iVar6 == 0) {
        FUN_0017b7fc(param_1,0x36,0);
      }
      else {
        piVar9 = (int *)FUN_00194f6c(*(undefined4 *)(param_1 + 8),iVar6,2);
        if (piVar9 != (int *)0x0) {
          cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
          if (cVar1 == '?') {
            iVar6 = 2;
          }
          else if (cVar1 == '*') {
            iVar6 = 3;
          }
          else {
            if (cVar1 != '+') {
              piVar9[1] = 1;
              goto LAB_001802ec;
            }
            iVar6 = 4;
          }
          piVar9[1] = iVar6;
          FUN_0017a4a4(param_1);
          goto LAB_001802ec;
        }
      }
      goto LAB_0018015c;
    }
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x38);
    FUN_0017a4a4(param_1);
    FUN_0017ff44(param_1);
    piVar9 = (int *)FUN_00180018(param_1,uVar8);
    FUN_0017ff44(param_1);
LAB_001802ec:
    FUN_0017ff44(param_1);
    piVar7 = piVar3;
    if ((*(int *)(param_1 + 0x124) == 0) &&
       (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       )) {
      FUN_0017c738(param_1);
    }
  }
  if ((piVar9 != (int *)0x0) && (piVar7 != (int *)0x0)) {
    piVar7[4] = (int)piVar9;
    piVar9[5] = (int)piVar7;
  }
  if ((*(int *)(param_1 + 0x68) != 0) && (*(int *)(*(int *)(param_1 + 0x24) + 0x38) != param_2)) {
    FUN_0017bb40(param_1,0x5a,iVar4 + DAT_00180408,0,0);
  }
  FUN_0017a4a4(param_1);
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '?') {
    if (piVar2 == (int *)0x0) goto LAB_001803fc;
    if (piVar2[1] - 3U < 2) goto LAB_001803f8;
    iVar4 = 2;
  }
  else {
    if (cVar1 == '*') {
      if (piVar2 != (int *)0x0) {
        piVar2[1] = 3;
        for (piVar7 = piVar2; (piVar7 != (int *)0x0 && (*piVar7 == 4)); piVar7 = (int *)piVar7[4]) {
          iVar4 = piVar7[3];
          if ((iVar4 != 0) && (*(int *)(iVar4 + 4) - 2U < 2)) {
            *(undefined4 *)(iVar4 + 4) = 1;
          }
          iVar4 = piVar7[4];
          if ((iVar4 != 0) && (*(int *)(iVar4 + 4) - 2U < 2)) {
            *(undefined4 *)(iVar4 + 4) = 1;
          }
        }
      }
      goto LAB_001803fc;
    }
    if (cVar1 != '+') {
      return piVar2;
    }
    if (piVar2 == (int *)0x0) goto LAB_001803fc;
    if (piVar2[1] - 2U < 2) {
      iVar4 = 3;
    }
    else {
      iVar4 = 4;
    }
    piVar2[1] = iVar4;
    bVar5 = false;
    for (; (piVar7 != (int *)0x0 && (*piVar7 == 4)); piVar7 = (int *)piVar7[4]) {
      iVar4 = piVar7[3];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 4) - 2U < 2)) {
        *(undefined4 *)(iVar4 + 4) = 1;
        bVar5 = true;
      }
      iVar4 = piVar7[4];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 4) - 2U < 2)) {
        *(undefined4 *)(iVar4 + 4) = 1;
        bVar5 = true;
      }
    }
    if (!bVar5) goto LAB_001803fc;
LAB_001803f8:
    iVar4 = 3;
  }
  piVar2[1] = iVar4;
LAB_001803fc:
  FUN_0017a4a4(param_1);
  return piVar2;
}


