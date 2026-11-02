/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001929e4  Symbol: FUN_001929e4 */

undefined4 FUN_001929e4(int param_1,char **param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *local_1c [2];
  
  pcVar4 = *param_2;
  iVar5 = DAT_00192b80 + 0x1929f4;
  if (*pcVar4 == '[') {
    local_1c[0] = pcVar4 + 1;
    do {
      cVar1 = *local_1c[0];
      if (cVar1 == '\0') {
        return 1;
      }
      local_1c[0] = local_1c[0] + 1;
    } while (cVar1 != ']');
LAB_00192b2a:
    if (param_1 != 0) {
      if (*(int *)(param_1 + 8) != 0) {
        (***(code ***)(iVar5 + DAT_00192b84))();
      }
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        (***(code ***)(iVar5 + DAT_00192b84))();
      }
      if (local_1c[0] == pcVar4) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
          uVar3 = FUN_0019c88c(pcVar4);
        }
        else {
          uVar3 = FUN_00191be0(pcVar4,(int)local_1c[0] - (int)pcVar4,0);
        }
        *(undefined4 *)(param_1 + 0xc) = uVar3;
      }
    }
    *param_2 = local_1c[0];
    return 0;
  }
  local_1c[0] = pcVar4;
  if ((byte)(*pcVar4 - 0x30U) < 10) {
    iVar2 = FUN_00191720(local_1c);
    if ((iVar2 == 0) && (*local_1c[0] == '.')) {
      local_1c[0] = local_1c[0] + 1;
      iVar2 = FUN_00191720(local_1c);
      if ((iVar2 == 0) &&
         ((((*local_1c[0] == '.' && (iVar2 = FUN_00191720(local_1c), iVar2 == 0)) &&
           (*local_1c[0] == '.')) && (iVar2 = FUN_00191720(local_1c), iVar2 == 0))))
      goto LAB_00192b2a;
    }
    local_1c[0] = *param_2;
  }
  do {
    for (; ((cVar1 = *local_1c[0], (byte)(cVar1 + 0xbfU) < 0x1a || ((byte)(cVar1 + 0x9fU) < 0x1a))
           || ((byte)(cVar1 - 0x30U) < 10)); local_1c[0] = local_1c[0] + 3) {
LAB_00192a70:
      if (cVar1 != '%') goto LAB_00192a78;
LAB_00192a74:
    }
    if (((cVar1 != '-') && (cVar1 != '.')) && ((cVar1 != '_' && (cVar1 != '~')))) {
      if (cVar1 == '%') {
        cVar1 = local_1c[0][1];
        if (((((byte)(cVar1 + 0x9fU) < 6) || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((byte)(cVar1 + 0xbfU) < 6)) &&
           (((cVar1 = local_1c[0][2], (byte)(cVar1 + 0x9fU) < 6 || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((byte)(cVar1 + 0xbfU) < 6)))) goto LAB_00192a74;
        goto LAB_00192b2a;
      }
      if ((cVar1 == '$') || (cVar1 == '!')) goto LAB_00192a70;
      if ((((cVar1 != '&') && (cVar1 != '(')) && (cVar1 != ')')) &&
         (((cVar1 != '*' && (cVar1 != '+')) &&
          ((cVar1 != ',' && ((cVar1 != ';' && (cVar1 != '=')))))))) goto LAB_00192b2a;
    }
LAB_00192a78:
    local_1c[0] = local_1c[0] + 1;
  } while( true );
}


