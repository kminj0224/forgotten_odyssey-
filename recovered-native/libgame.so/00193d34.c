/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193d34  Symbol: FUN_00193d34 */

int FUN_00193d34(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = DAT_00193dc8 + 0x193d3c;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (((*param_1 != '/') || (param_1[1] != '/')) || (pcVar3 = param_1 + 1, param_1[2] == '/')) {
    pcVar3 = param_1;
  }
  iVar1 = FUN_00193d0c(pcVar3);
  if (iVar1 == 0) {
    iVar1 = FUN_0019cb18(pcVar3,iVar4 + DAT_00193dcc);
    if ((iVar1 != 0) && ((iVar1 - (int)pcVar3) - 1U < 0x14)) {
      iVar2 = 0;
      do {
        if ((0x19 < (byte)(pcVar3[iVar2] + 0xbfU)) && (0x19 < (byte)(pcVar3[iVar2] + 0x9fU)))
        goto LAB_00193dbc;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1 - (int)pcVar3);
      iVar4 = FUN_001926bc(pcVar3,iVar4 + DAT_00193dd0);
      if ((iVar4 != 0) && (iVar1 = FUN_00193d0c(), iVar1 != 0)) {
        FUN_001919b8();
        return iVar4;
      }
    }
  }
  else {
    FUN_001919b8();
  }
LAB_00193dbc:
  iVar4 = FUN_0019c904(pcVar3);
  return iVar4;
}


