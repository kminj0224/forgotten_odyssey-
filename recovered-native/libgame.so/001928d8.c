/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001928d8  Symbol: FUN_001928d8 */

undefined4 FUN_001928d8(int param_1,char **param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = *param_2;
  do {
    for (; ((cVar1 = *pcVar4, 0x19 < (byte)(cVar1 + 0xbfU) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
           (9 < (byte)(cVar1 - 0x30U))); pcVar4 = pcVar4 + 1) {
      if (((cVar1 != '-') && (cVar1 != '.')) && ((cVar1 != '_' && (cVar1 != '~')))) {
        if (cVar1 == '%') {
          cVar1 = pcVar4[1];
          if (((5 < (byte)(cVar1 + 0x9fU)) && (9 < (byte)(cVar1 - 0x30U))) &&
             (5 < (byte)(cVar1 + 0xbfU))) {
            return 1;
          }
          cVar1 = pcVar4[2];
          if (((5 < (byte)(cVar1 + 0x9fU)) && (9 < (byte)(cVar1 - 0x30U))) &&
             (5 < (byte)(cVar1 + 0xbfU))) {
            return 1;
          }
          goto LAB_001928ea;
        }
        if ((cVar1 == '$') || (cVar1 == '!')) break;
        if ((((cVar1 != '&') && (cVar1 != '(')) &&
            ((cVar1 != ')' &&
             ((((cVar1 != '*' && (cVar1 != '+')) && (cVar1 != ',')) &&
              ((cVar1 != ';' && (cVar1 != '=')))))))) && (cVar1 != ':')) {
          if (cVar1 != '@') {
            return 1;
          }
          if (param_1 != 0) {
            if (*(int *)(param_1 + 0x10) != 0) {
              (***(code ***)(DAT_001929dc + 0x1928e4 + DAT_001929e0))();
            }
            pcVar2 = *param_2;
            if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
              uVar3 = FUN_0019c88c(pcVar2,(int)pcVar4 - (int)pcVar2);
            }
            else {
              uVar3 = FUN_00191be0(pcVar2,(int)pcVar4 - (int)pcVar2,0);
            }
            *(undefined4 *)(param_1 + 0x10) = uVar3;
          }
          *param_2 = pcVar4;
          return 0;
        }
      }
LAB_001928ee:
    }
    if (cVar1 != '%') goto LAB_001928ee;
LAB_001928ea:
    pcVar4 = pcVar4 + 3;
  } while( true );
}


