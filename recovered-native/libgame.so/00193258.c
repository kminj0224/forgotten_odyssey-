/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193258  Symbol: FUN_00193258 */

uint FUN_00193258(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *local_14 [2];
  
  cVar1 = *param_2;
  local_14[0] = param_2;
  if (cVar1 == '/') {
    if (param_2[1] == '/') {
      local_14[0] = param_2 + 2;
      uVar2 = FUN_00192b88(param_1,local_14);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_00192c08(param_1,local_14);
    }
    else {
      uVar2 = FUN_00192c78(param_1,local_14);
    }
  }
  else {
    if ((((0x19 < (byte)(cVar1 + 0xbfU)) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
        (9 < (byte)(cVar1 - 0x30U))) &&
       (((cVar1 != '-' && (cVar1 != '.')) && ((cVar1 != '_' && (cVar1 != '~')))))) {
      if (cVar1 == '%') {
        cVar1 = param_2[1];
        if (((((byte)(cVar1 + 0x9fU) < 6) || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((byte)(cVar1 + 0xbfU) < 6)) &&
           (((cVar1 = param_2[2], (byte)(cVar1 + 0x9fU) < 6 || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((byte)(cVar1 + 0xbfU) < 6)))) goto LAB_00193348;
      }
      else if (((cVar1 == '$') || (cVar1 == '!')) ||
              ((((cVar1 == '&' ||
                 ((((cVar1 == '(' || (cVar1 == ')')) || (cVar1 == '*')) ||
                  ((cVar1 == '+' || (cVar1 == ',')))))) || (cVar1 == ';')) ||
               (((cVar1 == '=' || (cVar1 == ':')) || (cVar1 == '@')))))) goto LAB_00193348;
      if (param_1 != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          (***(code ***)(DAT_001933b4 + 0x193268 + DAT_001933b8))();
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      goto LAB_0019336c;
    }
LAB_00193348:
    uVar2 = FUN_001931d0(param_1,local_14);
  }
  if (uVar2 != 0) {
    return uVar2;
  }
LAB_0019336c:
  if (*local_14[0] == '?') {
    local_14[0] = local_14[0] + 1;
    uVar2 = FUN_00192eb8(param_1,local_14);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  if (*local_14[0] == '#') {
    local_14[0] = local_14[0] + 1;
    uVar2 = FUN_00193014(param_1,local_14);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  cVar1 = *local_14[0];
  if (cVar1 != '\0') {
    FUN_00191900(param_1);
  }
  return (uint)(cVar1 != '\0');
}


