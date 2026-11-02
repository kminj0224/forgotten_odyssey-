/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017af10  Symbol: FUN_0017af10 */

void FUN_0017af10(int param_1,char **param_2,char **param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = DAT_0017afc0 + 0x17af18;
  if (((param_2 == (char **)0x0) || (param_1 == 0)) || (param_3 == (char **)0x0)) {
    (***(code ***)(iVar3 + DAT_0017afc4))
              (**(undefined4 **)(iVar3 + DAT_0017afc8),iVar3 + DAT_0017afcc);
  }
  else if ((*(int *)(param_1 + 0x124) == 0) || (*(int *)(param_1 + 0x28) != 1)) {
LAB_0017afa8:
    pcVar4 = (char *)0x0;
    *param_2 = (char *)0x0;
LAB_0017afb8:
    *param_3 = pcVar4;
  }
  else {
    pcVar5 = *(char **)(*(int *)(param_1 + 0x24) + 0x14);
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + -1;
      if (pcVar5 < *(char **)(*(int *)(param_1 + 0x24) + 0xc)) goto LAB_0017afa8;
    } while (*pcVar5 != '<');
    *param_2 = pcVar5;
    pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x14);
    while (pcVar4 < pcVar2) {
      cVar1 = *pcVar4;
      if (cVar1 == '>') goto LAB_0017afb8;
      if (cVar1 == '\'') {
        pcVar4 = pcVar4 + 1;
        do {
          if (pcVar2 <= pcVar4) goto LAB_0017af90;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\'');
      }
      else {
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\"') {
          do {
            if (pcVar2 <= pcVar4) goto LAB_0017af90;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\"');
        }
      }
    }
LAB_0017af90:
    do {
      pcVar5 = pcVar5 + -1;
      if (pcVar5 < *(char **)(*(int *)(param_1 + 0x24) + 0xc)) {
        pcVar4 = (char *)0x0;
        goto LAB_0017afb8;
      }
    } while (*pcVar5 != '>');
    *param_3 = pcVar5;
  }
  return;
}


