/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00181300  Symbol: FUN_00181300 */

void FUN_00181300(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = DAT_00181450 + 0x18130e;
  if (**(char **)(param_1[9] + 0x10) == '%') {
    FUN_0017a4a4(param_1);
    iVar2 = FUN_0017f6b8(param_1);
    if (iVar2 == 0) {
      FUN_0017bae0(param_1,0x44,iVar7 + DAT_00181454);
    }
    else if (**(char **)(param_1[9] + 0x10) == ';') {
      FUN_0017a4a4(param_1);
      param_1[0x6e] = param_1[0x6e] + 1;
      if (((*param_1 == 0) || (pcVar5 = *(code **)(*param_1 + 0x60), pcVar5 == (code *)0x0)) ||
         (iVar3 = (*pcVar5)(param_1[1],iVar2,0x1b8,pcVar5,param_4), iVar3 == 0)) {
        if ((param_1[7] == 1) || ((param_1[0x16] == 0 && (param_1[0x17] == 0)))) {
          FUN_0017b798(param_1,0x1a,iVar7 + DAT_00181458,iVar2);
        }
        else {
          FUN_0017dcec(param_1,0x1b,iVar7 + DAT_00181458,iVar2);
          param_1[0x19] = 0;
        }
      }
      else if (*(int *)(iVar3 + 0x30) - 4U < 2) {
        if (*(int *)(param_1[9] + 0x28) == iVar7 + DAT_00181460) {
          uVar4 = FUN_001797c4(param_1,iVar3);
          iVar7 = FUN_0017c760(param_1,uVar4);
          if (iVar7 < 0) {
            return;
          }
          if (((((*(int *)(iVar3 + 0x30) == 5) &&
                (pcVar6 = *(char **)(param_1[9] + 0x10), *pcVar6 == '<')) &&
               ((pcVar6[1] == '?' &&
                (((pcVar6[2] == 'x' && (pcVar6[3] == 'm')) && (pcVar6[4] == 'l')))))) &&
              (((cVar1 = pcVar6[5], (byte)(cVar1 - 9U) < 2 || (cVar1 == ' ')) || (cVar1 == '\r'))))
             && (FUN_0018113c(param_1), param_1[0x15] == 0x20)) {
            param_1[0x2b] = -1;
            return;
          }
        }
        else {
          uVar4 = FUN_0017ca88(param_1,iVar3);
          iVar7 = FUN_0017c760(param_1,uVar4);
          if (iVar7 < 0) {
            return;
          }
        }
      }
      else {
        FUN_0017dcec(param_1,0x1b,iVar7 + DAT_0018145c,iVar2);
      }
      param_1[0x17] = 1;
    }
    else {
      FUN_0017b7fc(param_1,0x17,0);
    }
  }
  return;
}


