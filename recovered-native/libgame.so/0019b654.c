/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019b654  Symbol: FUN_0019b654 */

char * FUN_0019b654(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = DAT_0019b7f0 + 0x19b65e;
  if (param_1 == 0) {
    return (char *)0x0;
  }
  iVar7 = *(int *)(param_1 + 0xc);
  iVar10 = iVar8 + DAT_0019b7f4;
  iVar11 = iVar8 + DAT_0019b7f8;
  do {
    if (iVar7 == 0) {
      return (char *)0x0;
    }
    if ((*(int *)(iVar7 + 4) == 1) && (*(int *)(iVar7 + 8) != 0)) {
      iVar2 = FUN_0019c30c(*(int *)(iVar7 + 8),iVar10);
      if (iVar2 != 0) {
        iVar7 = *(int *)(iVar7 + 0xc);
        iVar10 = iVar8 + DAT_0019b7f8;
        iVar11 = iVar8 + DAT_0019b7fc;
        break;
      }
      iVar2 = FUN_0019c30c(*(undefined4 *)(iVar7 + 8),iVar11);
      if (iVar2 != 0) goto LAB_0019b6dc;
      iVar2 = FUN_0019c30c(*(undefined4 *)(iVar7 + 8),iVar8 + DAT_0019b7fc);
      if (iVar2 != 0) goto LAB_0019b766;
    }
    iVar7 = *(int *)(iVar7 + 0x18);
  } while( true );
LAB_0019b6d6:
  if (iVar7 == 0) {
    return (char *)0x0;
  }
  if ((*(int *)(iVar7 + 4) == 1) && (*(int *)(iVar7 + 8) != 0)) {
    iVar2 = FUN_0019c30c(*(int *)(iVar7 + 8),iVar10);
    if (iVar2 != 0) {
LAB_0019b6dc:
      iVar7 = *(int *)(iVar7 + 0xc);
LAB_0019b766:
      iVar10 = DAT_0019b7fc;
      iVar11 = iVar8 + DAT_0019b808;
      do {
        if (iVar7 == 0) {
          return (char *)0x0;
        }
        if (((*(int *)(iVar7 + 4) == 1) && (*(int *)(iVar7 + 8) != 0)) &&
           (iVar2 = FUN_0019c30c(*(int *)(iVar7 + 8),iVar8 + iVar10), iVar2 != 0)) {
          iVar4 = iVar8 + DAT_0019b800;
          bVar1 = false;
          iVar2 = 0;
          for (iVar9 = *(int *)(iVar7 + 0x2c); iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x18)) {
            iVar5 = *(int *)(iVar9 + 0xc);
            if (((iVar5 != 0) && (*(int *)(iVar5 + 4) == 3)) && (*(int *)(iVar5 + 0x18) == 0)) {
              iVar6 = *(int *)(iVar5 + 0x28);
              iVar5 = FUN_0019c398(*(undefined4 *)(iVar9 + 8),iVar11);
              if ((iVar5 == 0) && (iVar5 = FUN_0019c398(iVar6,iVar8 + DAT_0019b804), iVar5 == 0)) {
                bVar1 = true;
              }
              else if ((iVar6 != 0) &&
                      (iVar5 = FUN_0019c398(*(undefined4 *)(iVar9 + 8),iVar4), iVar5 == 0)) {
                iVar2 = iVar6;
              }
              if ((iVar2 != 0) && (bVar1)) {
                iVar7 = FUN_0019cb18(iVar2,iVar8 + DAT_0019b80c);
                if ((iVar7 == 0) &&
                   ((iVar7 = FUN_0019cb18(iVar2,iVar8 + DAT_0019b810), iVar7 == 0 &&
                    (iVar7 = FUN_0019cb18(iVar2,iVar8 + DAT_0019b814), iVar7 == 0)))) {
                  iVar7 = FUN_0019cb18(iVar2,iVar8 + DAT_0019b818);
                  if (((iVar7 == 0) &&
                      (iVar7 = FUN_0019cb18(iVar2,iVar8 + DAT_0019b81c), iVar7 == 0)) &&
                     (iVar7 = FUN_0019cb18(iVar2,iVar8 + DAT_0019b820), iVar7 == 0)) {
                    return (char *)0x0;
                  }
                  pcVar3 = (char *)(iVar7 + 9);
                }
                else {
                  pcVar3 = (char *)(iVar7 + 8);
                }
                if (pcVar3 != (char *)0x0) {
                  for (; (*pcVar3 == '\t' || (*pcVar3 == ' ')); pcVar3 = pcVar3 + 1) {
                  }
                  return pcVar3;
                }
                return (char *)0x0;
              }
            }
          }
        }
        iVar7 = *(int *)(iVar7 + 0x18);
      } while( true );
    }
    iVar2 = FUN_0019c30c(*(undefined4 *)(iVar7 + 8),iVar11);
    if (iVar2 != 0) goto LAB_0019b766;
  }
  iVar7 = *(int *)(iVar7 + 0x18);
  goto LAB_0019b6d6;
}


