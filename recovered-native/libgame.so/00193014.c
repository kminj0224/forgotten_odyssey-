/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193014  Symbol: FUN_00193014 */

undefined4 FUN_00193014(int param_1,char **param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  if (param_2 == (char **)0x0) {
    return 0xffffffff;
  }
  pcVar5 = *param_2;
  do {
    for (; ((cVar1 = *pcVar5, (byte)(cVar1 + 0xbfU) < 0x1a || ((byte)(cVar1 + 0x9fU) < 0x1a)) ||
           ((byte)(cVar1 - 0x30U) < 10)); pcVar5 = pcVar5 + 3) {
LAB_0019302e:
      if (cVar1 != '%') goto LAB_00193036;
LAB_00193032:
    }
    if (((cVar1 != '-') && (cVar1 != '.')) && ((cVar1 != '_' && (cVar1 != '~')))) {
      if (cVar1 == '%') {
        cVar2 = pcVar5[1];
        if (((((byte)(cVar2 + 0x9fU) < 6) || ((byte)(cVar2 - 0x30U) < 10)) ||
            ((byte)(cVar2 + 0xbfU) < 6)) &&
           (((cVar2 = pcVar5[2], (byte)(cVar2 + 0x9fU) < 6 || ((byte)(cVar2 - 0x30U) < 10)) ||
            ((byte)(cVar2 + 0xbfU) < 6)))) goto LAB_00193032;
LAB_001930fc:
        if (param_1 == 0) goto LAB_00193142;
        if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
LAB_00193148:
          if (*(int *)(param_1 + 0x20) != 0) {
            (***(code ***)(DAT_00193150 + 0x193020 + DAT_00193154))();
          }
          pcVar3 = *param_2;
          if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
            uVar4 = FUN_0019c88c(pcVar3,(int)pcVar5 - (int)pcVar3);
          }
          else {
            uVar4 = FUN_00191be0(pcVar3,(int)pcVar5 - (int)pcVar3,0);
          }
          *(undefined4 *)(param_1 + 0x20) = uVar4;
LAB_00193142:
          *param_2 = pcVar5;
          return 0;
        }
        if ((cVar1 == '}') || (cVar1 == '{')) goto LAB_0019302e;
        if ((((cVar1 != '|') && (cVar1 != '\\')) && (cVar1 != '^')) && (cVar1 != '`'))
        goto LAB_00193148;
      }
      else {
        if ((cVar1 == '$') || (cVar1 == '!')) goto LAB_0019302e;
        if (((cVar1 != '&') && (((cVar1 != '(' && (cVar1 != ')')) && (cVar1 != '*')))) &&
           (((((cVar1 != '+' && (cVar1 != ',')) && (cVar1 != ';')) &&
             ((cVar1 != '=' && (cVar1 != ':')))) &&
            ((cVar1 != '@' &&
             ((((cVar1 != '/' && (cVar1 != '?')) && (cVar1 != '[')) && (cVar1 != ']'))))))))
        goto LAB_001930fc;
      }
    }
LAB_00193036:
    pcVar5 = pcVar5 + 1;
  } while( true );
}


