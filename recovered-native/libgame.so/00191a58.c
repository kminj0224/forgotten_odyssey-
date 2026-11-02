/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191a58  Symbol: FUN_00191a58 */

undefined4 FUN_00191a58(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar6 = param_1;
  if (param_1 == (char *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (; *pcVar6 == '/'; pcVar6 = pcVar6 + 1) {
    }
    pcVar3 = pcVar6;
    if (*pcVar6 != '\0') {
      while (*pcVar3 != '\0') {
        if (*pcVar3 == '.') {
          if (pcVar3[1] != '/') {
            if (pcVar3[1] != '\0') goto LAB_00191aa0;
            break;
          }
          for (pcVar3 = pcVar3 + 2; *pcVar3 == '/'; pcVar3 = pcVar3 + 1) {
          }
        }
        else {
LAB_00191aa0:
          for (; cVar1 = *pcVar3, cVar1 != '/'; pcVar3 = pcVar3 + 1) {
            if (cVar1 == '\0') goto LAB_00191ac4;
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
          }
          do {
            pcVar7 = pcVar3;
            if (*pcVar7 != '/') break;
            pcVar3 = pcVar7 + 1;
          } while (pcVar7[1] == '/');
          *pcVar6 = *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
        }
      }
LAB_00191ac4:
      *pcVar6 = '\0';
      for (pcVar3 = param_1; *pcVar3 == '/'; pcVar3 = pcVar3 + 1) {
      }
      pcVar7 = pcVar3;
      if (*pcVar3 != '\0') {
LAB_00191ae2:
        pcVar8 = pcVar7;
        pcVar9 = pcVar3;
        if (*pcVar9 != '\0') {
          pcVar3 = pcVar9 + 1;
          pcVar7 = pcVar8;
          if ((*pcVar9 == '/') &&
             ((((pcVar7 = pcVar3, *pcVar8 != '.' || (pcVar8[1] != '.')) || (pcVar3 != pcVar8 + 3))
              && ((*pcVar3 == '.' && (pcVar9[2] == '.')))))) {
            if (pcVar9[3] == '\0') {
              *pcVar8 = '\0';
              goto LAB_00191b4c;
            }
            if (pcVar9[3] == '/') {
              iVar4 = 0;
              do {
                cVar1 = pcVar9[iVar4 + 4];
                pcVar8[iVar4] = cVar1;
                iVar4 = iVar4 + 1;
                pcVar5 = pcVar8;
              } while (cVar1 != '\0');
              do {
                if (pcVar5 <= param_1) break;
                pcVar5 = pcVar5 + -1;
              } while (*pcVar5 == '/');
              pcVar3 = pcVar8;
              pcVar7 = pcVar8;
              if (pcVar5 != param_1) {
                do {
                  pcVar3 = pcVar5;
                  pcVar7 = pcVar3;
                  if (pcVar3 <= param_1) break;
                  pcVar5 = pcVar3 + -1;
                } while (pcVar3[-1] != '/');
              }
            }
          }
          goto LAB_00191ae2;
        }
LAB_00191b4c:
        *pcVar6 = '\0';
        pcVar6 = param_1;
        if (*param_1 == '/') {
          do {
            pcVar3 = pcVar6;
            if (((*pcVar3 != '/') || (pcVar3[1] != '.')) || (pcVar3[2] != '.')) break;
            pcVar6 = pcVar3 + 3;
          } while ((pcVar3[3] == '\0') || (pcVar3[3] == '/'));
          if (pcVar3 != param_1) {
            for (; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
              *param_1 = *pcVar3;
              param_1 = param_1 + 1;
            }
            *param_1 = '\0';
          }
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


