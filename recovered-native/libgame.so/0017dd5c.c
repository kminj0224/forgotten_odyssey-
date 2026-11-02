/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017dd5c  Symbol: FUN_0017dd5c */

void FUN_0017dd5c(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  iVar7 = DAT_0017df6c + 0x17dd6a;
  if (**(char **)(param_1[9] + 0x10) != '%') {
    return;
  }
  if (param_1[0x2b] + 1U < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x0017dd82 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar7 + DAT_0017df70 + (param_1[0x2b] + 1U) * 4) + iVar7 + DAT_0017df70))();
    return;
  }
  FUN_0017a4a4(param_1);
  iVar2 = FUN_0017f6b8(param_1);
  if (**(int **)(iVar7 + DAT_0017df74) != 0) {
    (***(code ***)(iVar7 + DAT_0017df78))
              (**(undefined4 **)(iVar7 + DAT_0017df7c),iVar7 + DAT_0017df80,iVar2);
  }
  if (iVar2 == 0) {
    uVar4 = 0x18;
  }
  else {
    if (**(char **)(param_1[9] + 0x10) == ';') {
      FUN_0017a4a4(param_1);
      if (((*param_1 == 0) || (pcVar5 = *(code **)(*param_1 + 0x60), pcVar5 == (code *)0x0)) ||
         (iVar3 = (*pcVar5)(param_1[1],iVar2), iVar3 == 0)) {
        if ((param_1[7] != 1) && ((param_1[0x16] != 0 || (param_1[0x17] != 0)))) {
          if ((param_1[0x1a] == 0) || (param_1[0x1c] == 0)) {
            FUN_0017dcec(param_1,0x1b,iVar7 + DAT_0017df84,iVar2);
          }
          else {
            FUN_0017bb40(param_1,0x1b,iVar7 + DAT_0017df84,iVar2,0);
          }
          param_1[0x19] = 0;
          return;
        }
        uVar4 = 0x1a;
        iVar3 = DAT_0017df84;
      }
      else {
        if (*(int *)(param_1[9] + 0x28) != iVar7 + DAT_0017df88) {
          uVar4 = FUN_0017ca88(param_1,iVar3);
          FUN_0017c760(param_1,uVar4);
          return;
        }
        if (*(int *)(iVar3 + 0x30) - 4U < 2) {
          uVar4 = FUN_001797c4(param_1,iVar3);
          iVar7 = FUN_0017c760(param_1,uVar4);
          if (iVar7 < 0) {
            return;
          }
          if ((param_1[0x49] == 0) &&
             (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
            FUN_0017c738(param_1);
          }
          iVar7 = param_1[9];
          if (3 < *(int *)(iVar7 + 0x14) - (int)*(undefined **)(iVar7 + 0x10)) {
            local_1c = **(undefined **)(iVar7 + 0x10);
            local_1b = *(undefined *)(*(int *)(iVar7 + 0x10) + 1);
            local_1a = *(undefined *)(*(int *)(iVar7 + 0x10) + 2);
            local_19 = *(undefined *)(*(int *)(iVar7 + 0x10) + 3);
            iVar7 = FUN_001a2fd8(&local_1c,4);
            if (iVar7 != 0) {
              FUN_00179fd4(param_1,iVar7);
            }
          }
          if (*(int *)(iVar3 + 0x30) != 5) {
            return;
          }
          pcVar6 = *(char **)(param_1[9] + 0x10);
          if (*pcVar6 != '<') {
            return;
          }
          if (pcVar6[1] != '?') {
            return;
          }
          if (pcVar6[2] != 'x') {
            return;
          }
          if (pcVar6[3] != 'm') {
            return;
          }
          if (pcVar6[4] != 'l') {
            return;
          }
          cVar1 = pcVar6[5];
          if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
            return;
          }
          FUN_0018113c(param_1);
          return;
        }
        uVar4 = 0x1e;
        iVar3 = DAT_0017df8c;
      }
      FUN_0017b798(param_1,uVar4,iVar7 + iVar3,iVar2);
      return;
    }
    uVar4 = 0x19;
  }
  FUN_0017b7fc(param_1,uVar4,0);
  return;
}


