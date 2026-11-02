/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197208  Symbol: FUN_00197208 */

undefined4 FUN_00197208(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = DAT_00197324 + 0x197214;
  for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
    cVar1 = *(char *)(param_2 + iVar3);
    if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
      return 0;
    }
  }
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '<') {
    piVar4 = (int *)(param_1 + 0xb8);
    if (*piVar4 == 0) {
      return 1;
    }
    iVar3 = FUN_0019c30c(*piVar4,iVar6 + DAT_00197328);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_0019c30c(*piVar4,iVar6 + DAT_0019732c);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_0019c30c(*piVar4,iVar6 + DAT_00197330);
    if (((iVar3 != 0) && (*(int *)(param_1 + 8) != 0)) &&
       ((iVar3 = FUN_00189564(), iVar3 != 0 && (*(int *)(iVar3 + 0x34) != 0)))) {
      iVar2 = FUN_0019c398(*(int *)(iVar3 + 0x34),iVar6 + DAT_00197334);
      if (iVar2 == 0) {
        return 1;
      }
      iVar3 = FUN_0019c398(*(undefined4 *)(iVar3 + 0x34),iVar6 + DAT_00197338);
      if (iVar3 == 0) {
        return 1;
      }
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      for (iVar3 = FUN_001895dc(); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x1c)) {
        if (*(int *)(iVar3 + 4) != 8) {
          iVar2 = FUN_00189644(iVar3);
          if (iVar2 != 0) {
            return 0;
          }
          iVar6 = iVar6 + DAT_0019733c;
          puVar5 = (undefined4 *)(iVar6 + 0x38);
          do {
            iVar2 = FUN_0019c30c(*(undefined4 *)(iVar3 + 8),*puVar5);
            if (iVar2 != 0) {
              return 0;
            }
            puVar5 = puVar5 + 1;
          } while (puVar5 != (undefined4 *)(iVar6 + 0x10c));
          return 1;
        }
      }
      if ((*(int *)(*(int *)(param_1 + 0x34) + 4) == 1) ||
         (*(int *)(*(int *)(param_1 + 0x34) + 0x28) == 0)) {
        iVar6 = iVar6 + DAT_0019733c;
        puVar5 = (undefined4 *)(iVar6 + 0x38);
        do {
          iVar3 = FUN_0019c30c(*(undefined4 *)(param_1 + 0xb8),*puVar5);
          if (iVar3 != 0) {
            return 0;
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 != (undefined4 *)(iVar6 + 0x10c));
        return 1;
      }
    }
  }
  return 0;
}


