/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192d88  Symbol: FUN_00192d88 */

int FUN_00192d88(int param_1,char **param_2)

{
  char cVar1;
  int iVar2;
  char *local_14;
  
  local_14 = *param_2;
  cVar1 = *local_14;
  if (cVar1 == '/') {
    if (local_14[1] == '/') {
      local_14 = local_14 + 2;
      iVar2 = FUN_00192b88(param_1,&local_14);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00192c08(param_1,&local_14);
      if (iVar2 != 0) {
        return iVar2;
      }
      *param_2 = local_14;
      return 0;
    }
    iVar2 = FUN_00192c78(param_1,&local_14);
  }
  else {
    if ((((0x19 < (byte)(cVar1 + 0xbfU)) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
        (9 < (byte)(cVar1 - 0x30U))) &&
       (((cVar1 != '-' && (cVar1 != '.')) && ((cVar1 != '_' && (cVar1 != '~')))))) {
      if (cVar1 == '%') {
        cVar1 = local_14[1];
        if (((((byte)(cVar1 + 0x9fU) < 6) || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((byte)(cVar1 + 0xbfU) < 6)) &&
           (((cVar1 = local_14[2], (byte)(cVar1 + 0x9fU) < 6 || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((byte)(cVar1 + 0xbfU) < 6)))) goto LAB_00192e80;
      }
      else if (((cVar1 == '$') || (cVar1 == '!')) ||
              ((((cVar1 == '&' ||
                 ((((cVar1 == '(' || (cVar1 == ')')) || (cVar1 == '*')) ||
                  ((cVar1 == '+' || (cVar1 == ',')))))) || (cVar1 == ';')) ||
               (((cVar1 == '=' || (cVar1 == ':')) || (cVar1 == '@')))))) goto LAB_00192e80;
      if (param_1 != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          (***(code ***)(DAT_00192eb0 + 0x192d9a + DAT_00192eb4))();
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      goto LAB_00192ea4;
    }
LAB_00192e80:
    iVar2 = FUN_00192d00(param_1,&local_14);
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00192ea4:
  *param_2 = local_14;
  return 0;
}


