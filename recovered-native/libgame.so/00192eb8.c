/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192eb8  Symbol: FUN_00192eb8 */

undefined4 FUN_00192eb8(int param_1,char **param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = DAT_0019300c + 0x192ec4;
  if (param_2 == (char **)0x0) {
    return 0xffffffff;
  }
  pcVar5 = *param_2;
  do {
    for (; ((cVar1 = *pcVar5, (byte)(cVar1 + 0xbfU) < 0x1a || ((byte)(cVar1 + 0x9fU) < 0x1a)) ||
           ((byte)(cVar1 - 0x30U) < 10)); pcVar5 = pcVar5 + 3) {
LAB_00192ed2:
      if (cVar1 != '%') goto LAB_00192eda;
LAB_00192ed6:
    }
    if (((cVar1 != '-') && (cVar1 != '.')) && ((cVar1 != '_' && (cVar1 != '~')))) {
      if (cVar1 == '%') {
        cVar2 = pcVar5[1];
        if ((((byte)(cVar2 + 0x9fU) < 6) ||
            (((byte)(cVar2 - 0x30U) < 10 || ((byte)(cVar2 + 0xbfU) < 6)))) &&
           ((cVar2 = pcVar5[2], (byte)(cVar2 + 0x9fU) < 6 ||
            (((byte)(cVar2 - 0x30U) < 10 || ((byte)(cVar2 + 0xbfU) < 6)))))) goto LAB_00192ed6;
LAB_00192f98:
        if (param_1 == 0) goto LAB_00192ffe;
        if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
LAB_00193004:
          if (*(int *)(param_1 + 0x1c) != 0) {
            (***(code ***)(iVar6 + DAT_00193010))();
          }
          pcVar3 = *param_2;
          if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
            uVar4 = FUN_0019c88c(pcVar3,(int)pcVar5 - (int)pcVar3);
          }
          else {
            uVar4 = FUN_00191be0(pcVar3,(int)pcVar5 - (int)pcVar3,0,*(int *)(param_1 + 0x24),param_4
                                );
          }
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
          if (*(int *)(param_1 + 0x28) != 0) {
            (***(code ***)(iVar6 + DAT_00193010))();
          }
          uVar4 = FUN_0019c88c(*param_2,(int)pcVar5 - (int)*param_2);
          *(undefined4 *)(param_1 + 0x28) = uVar4;
LAB_00192ffe:
          *param_2 = pcVar5;
          return 0;
        }
        if ((cVar1 == '}') || (cVar1 == '{')) goto LAB_00192ed2;
        if ((((cVar1 != '|') && (cVar1 != '\\')) && (cVar1 != '^')) &&
           (((cVar1 != '[' && (cVar1 != ']')) && (cVar1 != '`')))) goto LAB_00193004;
      }
      else {
        if ((cVar1 == '$') || (cVar1 == '!')) goto LAB_00192ed2;
        if ((((cVar1 != '&') &&
             ((((cVar1 != '(' && (cVar1 != ')')) && (cVar1 != '*')) &&
              ((cVar1 != '+' && (cVar1 != ',')))))) && (cVar1 != ';')) &&
           (((cVar1 != '=' && (cVar1 != ':')) &&
            ((cVar1 != '@' && ((cVar1 != '/' && (cVar1 != '?')))))))) goto LAB_00192f98;
      }
    }
LAB_00192eda:
    pcVar5 = pcVar5 + 1;
  } while( true );
}


